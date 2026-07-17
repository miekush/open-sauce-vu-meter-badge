/**
 * OPA2 Generated Driver API Header File
 * 
 * @file opa2.h
 * 
 * @defgroup  opa2 OPA2
 * 
 * @brief This file contains the API prototypes and the related data structures for the OPA2 module.
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


#ifndef OPA2_H
#define OPA2_H

/**
  Section: Included Files
*/

#include <stdbool.h>
#include <stdint.h>

/**
  Section: OPA2 Types
*/

/**
 * @ingroup opa2
 * @enum OPA2_posChannel_select_t
 * @brief  Enumeration of the positive channel selections for the OPA2 module.
 */ 
 typedef enum
 {
    OPA2_posChannel_IN0 = (uint8_t)0x0,
    OPA2_posChannel_IN1 = (uint8_t)0x1,
    OPA2_posChannel_IN2 = (uint8_t)0x2,
    OPA2_posChannel_IN3 = (uint8_t)0x3,
    OPA2_posChannel_GSEL = (uint8_t)0x5,
    OPA2_posChannel_Vdd_by_2 = (uint8_t)0x6,
    OPA2_posChannel_DAC1_OUT = (uint8_t)0x7,
    OPA2_posChannel_DAC2_OUT = (uint8_t)0x8,
    OPA2_posChannel_VSS = (uint8_t)0x9
 } OPA2_posChannel_select_t;

/**
 * @ingroup opa2
 * @enum OPA2_negChannel_select_t 
 * @brief  Enumeration of the negative channel selections for the OPA2 module.
 */ 
 typedef enum
 {
    OPA2_negChannel_IN0 = (uint8_t)0x0,
    OPA2_negChannel_IN1 = (uint8_t)0x1,
    OPA2_negChannel_IN2 = (uint8_t)0x2,
    OPA2_negChannel_IN3 = (uint8_t)0x3,
    OPA2_negChannel_GSEL = (uint8_t)0x5,
    OPA2_negChannel_Vdd_by_2 = (uint8_t)0x6,
    OPA2_negChannel_DAC1_OUT = (uint8_t)0x7,
    OPA2_negChannel_DAC2_OUT = (uint8_t)0x8,
    OPA2_negChannel_VSS = (uint8_t)0x9,
    OPA2_negChannel_No_Connection = (uint8_t)0xf
 } OPA2_negChannel_select_t;

/**
 * @ingroup opa2
 * @enum OPA2_negSource_select_t
 * @brief  Enumeration of the negative source selections for the OPA2 module.
 */ 
 typedef enum
 {
    OPA2_negSource_IN0 = (uint8_t)0x0,
    OPA2_negSource_IN1 = (uint8_t)0x1,
    OPA2_negSource_IN2 = (uint8_t)0x2,
    OPA2_negSource_IN3 = (uint8_t)0x3,
    OPA2_negSource_IN4 = (uint8_t)0x4,
    OPA2_negSource_VSS = (uint8_t)0x7
 } OPA2_negSource_select_t;


 /**
 * @ingroup opa2
 * @enum OPA2_resistor_select_t 
 * @brief  Enumeration of the resistor ladder (and hence gain) selections for the OPA2 module.
 */ 
 typedef enum
 {
    OPA2_R1_15_R2_1 =  0,
    OPA2_R1_14_R2_2 =  1,
    OPA2_R1_12_R2_4 =  2,
    OPA2_R1_8_R2_8 =   3,
    OPA2_R1_6_R2_10 =  4,
    OPA2_R1_4_R2_12 =  5,
    OPA2_R1_2_R2_14 =  6,
    OPA2_R1_1_R2_15 =  7
 } OPA2_resistor_select_t;

/**
 * @ingroup opa2
 * @enum OPA2_feedback_select_t 
 * @brief  Enumeration of the feeback mode selections for the OPA2 module.
 */ 
 typedef enum
 {
    OPA2_NO_CONNECTION = 0,
    OPA2_VDD           = 1,
    OPA2_OPA_OUT       = 2
 } OPA2_feedback_select_t;

/**
 * @ingroup opa2
 * @enum OPA2_unityGain_select_t 
 * @brief  Enumeration of the Unity Gain mode selections for the OPA2 module.
 */ 
 typedef enum
 {
    OPA2_unityGain_NCH_MUX   = 0,
    OPA2_unityGain_OUTPUT    = 1,
 } OPA2_unityGain_select_t;


 /**
 * @ingroup opa2
 * @enum OPA2_calibration_select_t 
 * @brief  Enumeration of the calibration source selections for the OPA2 module.
 */ 
 typedef enum
 {
    OPA2_FACTORY_DATA          = 0,
    OPA2_USER_DATA             = 1,
    OPA2_CALIBRATION_SEQUENCE  = 2
 } OPA2_calibration_select_t;


/**
  Section: OPA2 APIs
*/


/**
 * @ingroup opa2
 * @brief Initializes the OPA2 module and must be called only once, before any other OPA2 routine is called.
 * @param None.
 * @return None.
 */ 
void OPA2_Initialize(void);

/**
 * @ingroup opa2
 * @brief Deinitializes the OPA2 module.
 * @param None.
 * @return None.
 */ 
void OPA2_Deinitialize(void);

/**
 * @ingroup opa2
 * @brief Enables the OPA2 module.
 * @param None.
 * @return None.
 */ 
void OPA2_Enable(void);

/**
 * @ingroup opa2
 * @brief Disables the OPA2 module.
 * @param None.
 * @return None.
 */ 
void OPA2_Disable(void);

/**
 * @ingroup opa2
 * @brief Enables the internal unity gain of the OPA2 module.
 * @param None.
 * @return None.
 */ 
void OPA2_SoftwareUnityGainEnable(void);

/**
 * @ingroup opa2
 * @brief Disables the internal unity gain of the OPA2 module.
 * @param None.
 * @return None.
 */ 
void OPA2_SoftwareUnityGainDisable(void);

/**
 * @ingroup opa2
 * @brief Selects the positive channel input of the OPA2 module.
 * @param posChannel: Selected positive channel input for OPA2
 * @return None.
 */ 
void OPA2_PositiveChannelSelect(OPA2_posChannel_select_t posChannel);

/**
 * @ingroup opa2
 * @brief Selects the negative channel input of the OPA2 module.
 * @param negChannel: Selected negative channel input for OPA2
 * @return None.
 */ 
void OPA2_NegativeChannelSelect(OPA2_negChannel_select_t negChannel);

/**
 * @ingroup opa2
 * @brief Selects the negative source input of the OPA2 module.
 * @param negSource: Selected negative source input for OPA2
 * @return None.
 */ 
void OPA2_NegativeSourceSelect(OPA2_negSource_select_t negSource);

/**
 * @ingroup opa2
 * @brief Selects the resistor ladder option (and hence gain) of the OPA2 module.
 * @param resistorSelection: Selected resistor ladder option for OPA2
 * @return None.
 */ 
void OPA2_ResistorLadderSelect(OPA2_resistor_select_t resistorSelection);

/**
 * @ingroup opa2
 * @brief Sets the feedback mode of the OPA2 module.
 * @param feedbackSelect: Selected feedback mode for OPA2
 * @return None.
 */ 
void OPA2_FeedbackModeSelect(OPA2_feedback_select_t feedbackSelect);

/**
 * @ingroup opa2
 * @brief Enables the resistor ladder of the OPA2 module.
 * @param None.
 * @return None.
 */ 
void OPA2_ResistorLadderEnable (void);

/**
 * @ingroup opa2
 * @brief Disables the resistor ladder of the OPA2 module.
 * @param None.
 * @return None.
 */ 
void OPA2_ResistorLadderDisable (void);

/**
 * @ingroup opa2
 * @brief Sets the offset value of the OPA2 module.
 * @param offset: Offset value for OPA2
 * @return None.
 */ 
void OPA2_InputOffsetSet(uint8_t offset);

/**
 * @ingroup opa2
 * @brief Selectes the calibration source of the OPA2 module.
 * @param calibrationSelect: Selected calibration source for OPA2
 * @return None.
 */ 
void OPA2_CalibrationSourceSelect(OPA2_calibration_select_t calibrationSelect);

/**
 * @ingroup opa2
 * @brief Starts the self-calibration process of the OPA2 module.
 * @param None.
 * @return None.
 */ 
void OPA2_SelfCalibrationStart(void);

/**
 * @ingroup opa2
 * @brief Returns the completion status of the self-calibration process of the OPA2 module.
 * @param None.
 * @return bool
 */ 
bool OPA2_IsCalibrationComplete(void);

/**
 * @ingroup opa2
 * @brief Follows the tasks of the OPA2 module.
 * @param None.
 * @return None.
 */ 
void OPA2_Tasks(void);

/**
 * @ingroup opa2
 * @brief Register callback function with the auto-callibration complete interrupt of the OPA2 module.
 * @param handler: Pointer passed to the function
 * @return None.
 */ 
void OPA2_CallBackRegister(void (*handler)(void));

/**
 * @ingroup opa2
 * @brief Default Callback function.
 * @param None.
 * @return None.
 */ 
void OPA2_DefaultCallback (void);


#endif // OPA2_H
/**
 End of File
*/
