#include "mcc_generated_files/system/system.h"

//macros
#define ADC_POLL_DELAY      10
#define OPA_SAMPLE_COUNT    3    
#define SLEEP_TIMER_DELAY   36000000

//function prototypes
uint16_t map(uint16_t in_num, uint16_t in_min, uint16_t in_max, uint16_t out_min, uint16_t out_max);
void updateVuMeter(uint8_t num);
void updateNose(uint8_t num);
uint16_t readGainPot(void);
uint16_t readOpaOut(void);
void switchISR(void);
void goToSleep(void);
void timerISR(void);
void initPeripherals(void);

//global variables
bool pollAdc=false;
uint16_t pollAdcCounter=0;
uint16_t gainPotPos=0;
uint16_t opaOutput=0;
uint16_t adcSamples[10]={0,0,0,0,0,0,0,0,0,0};
uint8_t adcAccumulatorCounter=0;
bool opaDataReady=false;

bool badgeState=false;
uint32_t sleepTimer=0;

int main(void)
{
    initPeripherals();

    while(1)
    {
        if(pollAdc)
        {
            gainPotPos=readGainPot();
            
            adcSamples[adcAccumulatorCounter]=readOpaOut();
            adcAccumulatorCounter++;
            if(adcAccumulatorCounter > OPA_SAMPLE_COUNT)
            {
                //find min/max sample inside array
                uint16_t min_sample=adcSamples[0];
                uint16_t max_sample=adcSamples[0];
                for(int i=0; i<10; i++)
                {
                    if(adcSamples[i] < min_sample)
                    {
                        min_sample=adcSamples[i];
                    }
                    if(adcSamples[i] > max_sample)
                    {
                        max_sample=adcSamples[i];
                    }
                    adcSamples[i]=0;
                }
                opaOutput=(max_sample-min_sample);
                //printf("%d\n", opaOutput);
                opaDataReady=true;
                adcAccumulatorCounter=0;
            }
            //printf("%d\n", gainPotPos);
            pollAdc=false;
        }

        if(opaDataReady)
        {
            uint16_t opaOutputAdjusted=opaOutput*(gainPotPos/4096.0);
            //printf("%d\n", opaOutputAdjusted);
            updateVuMeter(map(opaOutputAdjusted, 1000, 4096, 0, 8));
            opaDataReady=false;
        }

        if(!badgeState)
        {
            goToSleep();
        }
    }
    
    return 0;
}

void initPeripherals(void)
{
    SYSTEM_Initialize();
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    INT_SetInterruptHandler(&switchISR);
    TMR0_PeriodMatchCallbackRegister(&timerISR);
    GAIN_VIN_SetHigh();

    //POWER_PeripheralDisable(POWER_UART1);
}

uint16_t map(uint16_t in_num, uint16_t in_min, uint16_t in_max, uint16_t out_min, uint16_t out_max)
{
    return (in_num - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

//num: 0 -> 7 representing number of LEDs to illuminate in VU meter
void updateVuMeter(uint8_t num)
{
    if(num < 8)
    {
        uint8_t vu_num = (1 << num) - 1;
        VU_G1_LAT = (vu_num) & 1;
        VU_G2_LAT = (vu_num >> 1) & 1;
        VU_G3_LAT = (vu_num >> 2) & 1;
        VU_G4_LAT = (vu_num >> 3) & 1;
        VU_G5_LAT = (vu_num >> 4) & 1;
        VU_Y1_LAT = (vu_num >> 5) & 1;
        VU_R1_LAT = (vu_num >> 6) & 1;
    }
}

//num: 0 -> 3 representing number of LEDs to illuminate in nose
void updateNose(uint8_t num)
{
    if(num < 4)
    {
        uint8_t nose_num = (1 << num) - 1;
        N_Y1_LAT = (nose_num) & 1;
        N_Y2_LAT = (nose_num >> 1) & 1;
        N_Y3_LAT = (nose_num >> 2) & 1;
    }
}

//reads GAIN_VIN adc channel and scales value from 12-bit raw value to 0->100
uint16_t readGainPot(void)
{
    adc_result_t gain_pot_raw = ADC_ChannelSelectAndConvert(GAIN_VOUT);
    adc_result_t adc_vss_raw = ADC_ChannelSelectAndConvert(ADC_CHANNEL_VSS);
    return (gain_pot_raw-adc_vss_raw);
}

//reads OPA_OUT adc channel and scales value from 12-bit raw value to 0->7
uint16_t readOpaOut(void)
{
    adc_result_t opa_out_raw = ADC_ChannelSelectAndConvert(OPA_OUT);
    adc_result_t adc_vss_raw = ADC_ChannelSelectAndConvert(ADC_CHANNEL_VSS);
    return (opa_out_raw - adc_vss_raw);
}

void switchISR(void)
{
    badgeState=!badgeState;
    GAIN_VIN_SetHigh();
    sleepTimer=0;
    pollAdcCounter=0;
}

void goToSleep(void)
{
    //turn off all LEDs
    GAIN_VIN_SetLow();
    updateVuMeter(0);
    updateNose(0);
    TMR0_Stop();

    INTERRUPT_PeripheralInterruptDisable();
    POWER_PeripheralDisableAll();

    CPUDOZEbits.IDLEN=0;
    SLEEP();
    NOP();

    //wake here

    CPUDOZEbits.IDLEN = 1;
    POWER_PeripheralEnable(POWER_ADC);
    POWER_PeripheralEnable(POWER_OPA1);
    POWER_PeripheralEnable(POWER_OPA2);
    POWER_PeripheralEnable(POWER_TMR0);
    POWER_PeripheralEnable(POWER_UART1);
    POWER_PeripheralEnable(POWER_APM);
    initPeripherals();
}

void timerISR(void)
{
    sleepTimer++;
    if(sleepTimer>SLEEP_TIMER_DELAY)
    {
        badgeState=false;
        sleepTimer=0;
    }

    pollAdcCounter++;
    if(pollAdcCounter>ADC_POLL_DELAY)
    {
        pollAdc=true;
        pollAdcCounter=0;
    }
}