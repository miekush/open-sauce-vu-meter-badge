/**
 * OPA2 Generated Driver File
 * 
 * @file opa2.c
 * 
 * @ingroup opa2
 * 
 * @brief This is the generated driver implementation file for the OPA2 module.
 *
 * @version OPA2 Driver Version 1.0.0
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
#include "../opa2.h"

static void (*callBackHandler)(void);

/**
  Section: OPA2 APIs
*/

void OPA2_Initialize (void){
  
  OPA2CON0 = (1 << _OPA2CON0_OPA2EN_POSN)   // OPA2EN Enabled
        | (0 << _OPA2CON0_OPA2UG_POSN);  // OPA2UG OPAIN- pin

  OPA2CON1 = (6 << _OPA2CON1_OPA2GSEL_POSN)   // OPA2GSEL R1 = 2R and R2 = 14R, R2/R1 = 7
        | (1 << _OPA2CON1_OPA2RESON_POSN)   // OPA2RESON Enabled
        | (3 << _OPA2CON1_OPA2NSS_POSN);  // OPA2NSS OPA2IN3-

  OPA2CON2 = (6 << _OPA2CON2_OPA2PCH_POSN)   // OPA2PCH Vdd/2
        | (2 << _OPA2CON2_OPA2FMS_POSN);  // OPA2FMS OPA2OUT

  OPA2CON3 = (5 << _OPA2CON3_OPA2NCH_POSN);  // OPA2NCH GSEL

  OPA2CON4 = (0 << _OPA2CON4_OFCSEL_POSN)   // OFCSEL Factory Calibration Data
        | (0 << _OPA2CON4_OFCST_POSN);  // OFCST Completed

  callBackHandler = OPA2_DefaultCallback;
  PIR7bits.OPA2CIF = 0;    // Turn off Calibration Interrupt Flag

}

void OPA2_Deinitialize(void){
  OPA2CON0 = 0x0;

  OPA2CON1 = 0x0;  

  OPA2CON2 = 0x0;
  
  OPA2CON3 = 0x0;

  OPA2CON4 = 0x0;

}

void OPA2_Enable(void){
  OPA2CON0bits.OPA2EN = 1;
}

void OPA2_Disable(void){
  OPA2CON0bits.OPA2EN = 0;
}


void OPA2_SoftwareUnityGainEnable(void){
  OPA2CON0bits.OPA2UG = OPA2_unityGain_OUTPUT;
}

void OPA2_SoftwareUnityGainDisable (void){
  OPA2CON0bits.OPA2UG = OPA2_unityGain_NCH_MUX;
}

void OPA2_PositiveChannelSelect(OPA2_posChannel_select_t posChannel){
  OPA2CON2bits.OPA2PCH = (uint8_t)posChannel;
}

void OPA2_NegativeChannelSelect(OPA2_negChannel_select_t negChannel){
    OPA2CON3bits.OPA2NCH = (uint8_t)negChannel;
}

void OPA2_NegativeSourceSelect(OPA2_negSource_select_t negSource){
    OPA2CON1bits.OPA2NSS = (uint8_t)negSource;
}

void OPA2_ResistorLadderSelect(OPA2_resistor_select_t resistorSelection){  
  OPA2CON1bits.OPA2GSEL = (uint8_t)resistorSelection;
}

void OPA2_ResistorLadderEnable (void){
  OPA2CON1bits.OPA2RESON = 1;
}

void OPA2_ResistorLadderDisable (void){
  OPA2CON1bits.OPA2RESON = 0;
}

void OPA2_FeedbackModeSelect(OPA2_feedback_select_t feedbackSelect){
  OPA2CON2bits.OPA2FMS = (uint8_t)feedbackSelect;
}

void OPA2_InputOffsetSet(uint8_t offset){
  OPA2OFFSETbits.OFFSET = offset;
}

void OPA2_CalibrationSourceSelect(OPA2_calibration_select_t calibrationSelect){
  OPA2CON4bits.OFCSEL = (uint8_t)calibrationSelect;
}

void OPA2_SelfCalibrationStart(void){
  OPA2CON4bits.OFCST = 1;
}

bool OPA2_IsCalibrationComplete(void){
  return !OPA2CON4bits.OFCST;
}

void OPA2_Tasks(void)
{
    if(1U == PIR7bits.OPA2CIF)
    {
        if(NULL != callBackHandler)
        {
            callBackHandler();
        }
        PIR7bits.OPA2CIF = 0;
    }
}


void OPA2_CallBackRegister(void (*handler)(void)){
    callBackHandler = handler;
}

void OPA2_DefaultCallback (void){
  // Default callback 
}

/**
 End of File
*/