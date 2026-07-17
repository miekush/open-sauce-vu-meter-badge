/**
 * OPA1 Generated Driver API Header File
 * 
 * @file opa1.h
 * 
 * @defgroup  opa1 OPA1
 * 
 * @brief This file contains the API prototypes and the related data structures for the OPA1 module.
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


#ifndef OPA1_H
#define OPA1_H

/**
  Section: Included Files
*/

#include <stdbool.h>
#include <stdint.h>

/**
  Section: OPA1 Types
*/

/**
 * @ingroup opa1
 * @enum OPA1_posChannel_select_t
 * @brief  Enumeration of the positive channel selections for the OPA1 module.
 */ 
 typedef enum
 {
    OPA1_posChannel_IN0 = (uint8_t)0x0,
    OPA1_posChannel_IN1 = (uint8_t)0x1,
    OPA1_posChannel_IN2 = (uint8_t)0x2,
    OPA1_posChannel_IN3 = (uint8_t)0x3,
    OPA1_posChannel_GSEL = (uint8_t)0x5,
    OPA1_posChannel_Vdd_by_2 = (uint8_t)0x6,
    OPA1_posChannel_DAC1_OUT = (uint8_t)0x7,
    OPA1_posChannel_DAC2_OUT = (uint8_t)0x8,
    OPA1_posChannel_VSS = (uint8_t)0x9
 } OPA1_posChannel_select_t;

/**
 * @ingroup opa1
 * @enum OPA1_negChannel_select_t 
 * @brief  Enumeration of the negative channel selections for the OPA1 module.
 */ 
 typedef enum
 {
    OPA1_negChannel_IN0 = (uint8_t)0x0,
    OPA1_negChannel_IN1 = (uint8_t)0x1,
    OPA1_negChannel_IN2 = (uint8_t)0x2,
    OPA1_negChannel_IN3 = (uint8_t)0x3,
    OPA1_negChannel_GSEL = (uint8_t)0x5,
    OPA1_negChannel_Vdd_by_2 = (uint8_t)0x6,
    OPA1_negChannel_DAC1_OUT = (uint8_t)0x7,
    OPA1_negChannel_DAC2_OUT = (uint8_t)0x8,
    OPA1_negChannel_VSS = (uint8_t)0x9,
    OPA1_negChannel_No_Connection = (uint8_t)0xf
 } OPA1_negChannel_select_t;

/**
 * @ingroup opa1
 * @enum OPA1_negSource_select_t
 * @brief  Enumeration of the negative source selections for the OPA1 module.
 */ 
 typedef enum
 {
    OPA1_negSource_IN0 = (uint8_t)0x0,
    OPA1_negSource_IN1 = (uint8_t)0x1,
    OPA1_negSource_IN2 = (uint8_t)0x2,
    OPA1_negSource_IN3 = (uint8_t)0x3,
    OPA1_negSource_VSS = (uint8_t)0x7
 } OPA1_negSource_select_t;


 /**
 * @ingroup opa1
 * @enum OPA1_resistor_select_t 
 * @brief  Enumeration of the resistor ladder (and hence gain) selections for the OPA1 module.
 */ 
 typedef enum
 {
    OPA1_R1_15_R2_1 =  0,
    OPA1_R1_14_R2_2 =  1,
    OPA1_R1_12_R2_4 =  2,
    OPA1_R1_8_R2_8 =   3,
    OPA1_R1_6_R2_10 =  4,
    OPA1_R1_4_R2_12 =  5,
    OPA1_R1_2_R2_14 =  6,
    OPA1_R1_1_R2_15 =  7
 } OPA1_resistor_select_t;

/**
 * @ingroup opa1
 * @enum OPA1_feedback_select_t 
 * @brief  Enumeration of the feeback mode selections for the OPA1 module.
 */ 
 typedef enum
 {
    OPA1_NO_CONNECTION = 0,
    OPA1_VDD           = 1,
    OPA1_OPA_OUT       = 2
 } OPA1_feedback_select_t;

/**
 * @ingroup opa1
 * @enum OPA1_unityGain_select_t 
 * @brief  Enumeration of the Unity Gain mode selections for the OPA1 module.
 */ 
 typedef enum
 {
    OPA1_unityGain_NCH_MUX   = 0,
    OPA1_unityGain_OUTPUT    = 1,
 } OPA1_unityGain_select_t;


 /**
 * @ingroup opa1
 * @enum OPA1_calibration_select_t 
 * @brief  Enumeration of the calibration source selections for the OPA1 module.
 */ 
 typedef enum
 {
    OPA1_FACTORY_DATA          = 0,
    OPA1_USER_DATA             = 1,
    OPA1_CALIBRATION_SEQUENCE  = 2
 } OPA1_calibration_select_t;


/**
  Section: OPA1 APIs
*/


/**
 * @ingroup opa1
 * @brief Initializes the OPA1 module and must be called only once, before any other OPA1 routine is called.
 * @param None.
 * @return None.
 */ 
void OPA1_Initialize(void);

/**
 * @ingroup opa1
 * @brief Deinitializes the OPA1 module.
 * @param None.
 * @return None.
 */ 
void OPA1_Deinitialize(void);

/**
 * @ingroup opa1
 * @brief Enables the OPA1 module.
 * @param None.
 * @return None.
 */ 
void OPA1_Enable(void);

/**
 * @ingroup opa1
 * @brief Disables the OPA1 module.
 * @param None.
 * @return None.
 */ 
void OPA1_Disable(void);

/**
 * @ingroup opa1
 * @brief Enables the internal unity gain of the OPA1 module.
 * @param None.
 * @return None.
 */ 
void OPA1_SoftwareUnityGainEnable(void);

/**
 * @ingroup opa1
 * @brief Disables the internal unity gain of the OPA1 module.
 * @param None.
 * @return None.
 */ 
void OPA1_SoftwareUnityGainDisable(void);

/**
 * @ingroup opa1
 * @brief Selects the positive channel input of the OPA1 module.
 * @param posChannel: Selected positive channel input for OPA1
 * @return None.
 */ 
void OPA1_PositiveChannelSelect(OPA1_posChannel_select_t posChannel);

/**
 * @ingroup opa1
 * @brief Selects the negative channel input of the OPA1 module.
 * @param negChannel: Selected negative channel input for OPA1
 * @return None.
 */ 
void OPA1_NegativeChannelSelect(OPA1_negChannel_select_t negChannel);

/**
 * @ingroup opa1
 * @brief Selects the negative source input of the OPA1 module.
 * @param negSource: Selected negative source input for OPA1
 * @return None.
 */ 
void OPA1_NegativeSourceSelect(OPA1_negSource_select_t negSource);

/**
 * @ingroup opa1
 * @brief Selects the resistor ladder option (and hence gain) of the OPA1 module.
 * @param resistorSelection: Selected resistor ladder option for OPA1
 * @return None.
 */ 
void OPA1_ResistorLadderSelect(OPA1_resistor_select_t resistorSelection);

/**
 * @ingroup opa1
 * @brief Sets the feedback mode of the OPA1 module.
 * @param feedbackSelect: Selected feedback mode for OPA1
 * @return None.
 */ 
void OPA1_FeedbackModeSelect(OPA1_feedback_select_t feedbackSelect);

/**
 * @ingroup opa1
 * @brief Enables the resistor ladder of the OPA1 module.
 * @param None.
 * @return None.
 */ 
void OPA1_ResistorLadderEnable (void);

/**
 * @ingroup opa1
 * @brief Disables the resistor ladder of the OPA1 module.
 * @param None.
 * @return None.
 */ 
void OPA1_ResistorLadderDisable (void);

/**
 * @ingroup opa1
 * @brief Sets the offset value of the OPA1 module.
 * @param offset: Offset value for OPA1
 * @return None.
 */ 
void OPA1_InputOffsetSet(uint8_t offset);

/**
 * @ingroup opa1
 * @brief Selectes the calibration source of the OPA1 module.
 * @param calibrationSelect: Selected calibration source for OPA1
 * @return None.
 */ 
void OPA1_CalibrationSourceSelect(OPA1_calibration_select_t calibrationSelect);

/**
 * @ingroup opa1
 * @brief Starts the self-calibration process of the OPA1 module.
 * @param None.
 * @return None.
 */ 
void OPA1_SelfCalibrationStart(void);

/**
 * @ingroup opa1
 * @brief Returns the completion status of the self-calibration process of the OPA1 module.
 * @param None.
 * @return bool
 */ 
bool OPA1_IsCalibrationComplete(void);

/**
 * @ingroup opa1
 * @brief Follows the tasks of the OPA1 module.
 * @param None.
 * @return None.
 */ 
void OPA1_Tasks(void);

/**
 * @ingroup opa1
 * @brief Register callback function with the auto-callibration complete interrupt of the OPA1 module.
 * @param handler: Pointer passed to the function
 * @return None.
 */ 
void OPA1_CallBackRegister(void (*handler)(void));

/**
 * @ingroup opa1
 * @brief Default Callback function.
 * @param None.
 * @return None.
 */ 
void OPA1_DefaultCallback (void);


#endif // OPA1_H
/**
 End of File
*/
