/**
 * OPA1 Generated Driver File
 * 
 * @file opa1.c
 * 
 * @ingroup opa1
 * 
 * @brief This is the generated driver implementation file for the OPA1 module.
 *
 * @version OPA1 Driver Version 1.0.0
 *
 * @version Package Version 1.0.0
*/
/*
© [2026] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/


/**
  Section: Included Files
*/

#include <xc.h>
#include "../opa1.h"

static void (*callBackHandler)(void);

/**
  Section: OPA1 APIs
*/

void OPA1_Initialize (void){
  
  OPA1CON0 = (1 << _OPA1CON0_OPA1EN_POSN)   // OPA1EN Enabled
        | (0 << _OPA1CON0_OPA1UG_POSN);  // OPA1UG OPAIN- pin

  OPA1CON1 = (7 << _OPA1CON1_OPA1GSEL_POSN)   // OPA1GSEL R1 = 1R and R2 = 15R, R2/R1 = 15
        | (1 << _OPA1CON1_OPA1RESON_POSN)   // OPA1RESON Enabled
        | (0 << _OPA1CON1_OPA1NSS_POSN);  // OPA1NSS OPA1IN0-

  OPA1CON2 = (6 << _OPA1CON2_OPA1PCH_POSN)   // OPA1PCH Vdd/2
        | (2 << _OPA1CON2_OPA1FMS_POSN);  // OPA1FMS OPA1OUT

  OPA1CON3 = (5 << _OPA1CON3_OPA1NCH_POSN);  // OPA1NCH GSEL

  OPA1CON4 = (0 << _OPA1CON4_OFCSEL_POSN)   // OFCSEL Factory Calibration Data
        | (0 << _OPA1CON4_OFCST_POSN);  // OFCST Completed

  callBackHandler = OPA1_DefaultCallback;
  PIR7bits.OPA1CIF = 0;    // Turn off Calibration Interrupt Flag

}

void OPA1_Deinitialize(void){
  OPA1CON0 = 0x0;

  OPA1CON1 = 0x0;  

  OPA1CON2 = 0x0;
  
  OPA1CON3 = 0x0;

  OPA1CON4 = 0x0;

}

void OPA1_Enable(void){
  OPA1CON0bits.OPA1EN = 1;
}

void OPA1_Disable(void){
  OPA1CON0bits.OPA1EN = 0;
}


void OPA1_SoftwareUnityGainEnable(void){
  OPA1CON0bits.OPA1UG = OPA1_unityGain_OUTPUT;
}

void OPA1_SoftwareUnityGainDisable (void){
  OPA1CON0bits.OPA1UG = OPA1_unityGain_NCH_MUX;
}

void OPA1_PositiveChannelSelect(OPA1_posChannel_select_t posChannel){
  OPA1CON2bits.OPA1PCH = (uint8_t)posChannel;
}

void OPA1_NegativeChannelSelect(OPA1_negChannel_select_t negChannel){
    OPA1CON3bits.OPA1NCH = (uint8_t)negChannel;
}

void OPA1_NegativeSourceSelect(OPA1_negSource_select_t negSource){
    OPA1CON1bits.OPA1NSS = (uint8_t)negSource;
}

void OPA1_ResistorLadderSelect(OPA1_resistor_select_t resistorSelection){  
  OPA1CON1bits.OPA1GSEL = (uint8_t)resistorSelection;
}

void OPA1_ResistorLadderEnable (void){
  OPA1CON1bits.OPA1RESON = 1;
}

void OPA1_ResistorLadderDisable (void){
  OPA1CON1bits.OPA1RESON = 0;
}

void OPA1_FeedbackModeSelect(OPA1_feedback_select_t feedbackSelect){
  OPA1CON2bits.OPA1FMS = (uint8_t)feedbackSelect;
}

void OPA1_InputOffsetSet(uint8_t offset){
  OPA1OFFSETbits.OFFSET = offset;
}

void OPA1_CalibrationSourceSelect(OPA1_calibration_select_t calibrationSelect){
  OPA1CON4bits.OFCSEL = (uint8_t)calibrationSelect;
}

void OPA1_SelfCalibrationStart(void){
  OPA1CON4bits.OFCST = 1;
}

bool OPA1_IsCalibrationComplete(void){
  return !OPA1CON4bits.OFCST;
}

void OPA1_Tasks(void)
{
    if(1U == PIR7bits.OPA1CIF)
    {
        if(NULL != callBackHandler)
        {
            callBackHandler();
        }
        PIR7bits.OPA1CIF = 0;
    }
}


void OPA1_CallBackRegister(void (*handler)(void)){
    callBackHandler = handler;
}

void OPA1_DefaultCallback (void){
  // Default callback 
}

/**
 End of File
*/