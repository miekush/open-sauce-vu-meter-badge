/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define IO_RA0_TRIS                 TRISAbits.TRISA0
#define IO_RA0_LAT                  LATAbits.LATA0
#define IO_RA0_PORT                 PORTAbits.RA0
#define IO_RA0_WPU                  WPUAbits.WPUA0
#define IO_RA0_OD                   ODCONAbits.ODCA0
#define IO_RA0_ANS                  ANSELAbits.ANSA0
#define IO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_RA0_GetValue()           PORTAbits.RA0
#define IO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_RA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_RA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define IO_RA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define IO_RA0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define IO_RA0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)
// get/set IO_RA1 aliases
#define OPA1OUT_TRIS                 TRISAbits.TRISA1
#define OPA1OUT_LAT                  LATAbits.LATA1
#define OPA1OUT_PORT                 PORTAbits.RA1
#define OPA1OUT_WPU                  WPUAbits.WPUA1
#define OPA1OUT_OD                   ODCONAbits.ODCA1
#define OPA1OUT_ANS                  ANSELAbits.ANSA1
#define OPA1OUT_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define OPA1OUT_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define OPA1OUT_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define OPA1OUT_GetValue()           PORTAbits.RA1
#define OPA1OUT_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define OPA1OUT_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define OPA1OUT_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define OPA1OUT_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define OPA1OUT_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define OPA1OUT_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define OPA1OUT_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define OPA1OUT_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)
// get/set IO_RA2 aliases
#define MIC_IN_TRIS                 TRISAbits.TRISA2
#define MIC_IN_LAT                  LATAbits.LATA2
#define MIC_IN_PORT                 PORTAbits.RA2
#define MIC_IN_WPU                  WPUAbits.WPUA2
#define MIC_IN_OD                   ODCONAbits.ODCA2
#define MIC_IN_ANS                  ANSELAbits.ANSA2
#define MIC_IN_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define MIC_IN_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define MIC_IN_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define MIC_IN_GetValue()           PORTAbits.RA2
#define MIC_IN_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define MIC_IN_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define MIC_IN_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define MIC_IN_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define MIC_IN_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define MIC_IN_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define MIC_IN_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define MIC_IN_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
// get/set IO_RA3 aliases
#define IO_RA3_TRIS                 TRISAbits.TRISA3
#define IO_RA3_LAT                  LATAbits.LATA3
#define IO_RA3_PORT                 PORTAbits.RA3
#define IO_RA3_WPU                  WPUAbits.WPUA3
#define IO_RA3_OD                   ODCONAbits.ODCA3
#define IO_RA3_ANS                  ANSELAbits.ANSA3
#define IO_RA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define IO_RA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define IO_RA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define IO_RA3_GetValue()           PORTAbits.RA3
#define IO_RA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define IO_RA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define IO_RA3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define IO_RA3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define IO_RA3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define IO_RA3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define IO_RA3_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define IO_RA3_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)
// get/set IO_RA4 aliases
#define IO_RA4_TRIS                 TRISAbits.TRISA4
#define IO_RA4_LAT                  LATAbits.LATA4
#define IO_RA4_PORT                 PORTAbits.RA4
#define IO_RA4_WPU                  WPUAbits.WPUA4
#define IO_RA4_OD                   ODCONAbits.ODCA4
#define IO_RA4_ANS                  ANSELAbits.ANSA4
#define IO_RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define IO_RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define IO_RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define IO_RA4_GetValue()           PORTAbits.RA4
#define IO_RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define IO_RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define IO_RA4_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define IO_RA4_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define IO_RA4_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define IO_RA4_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define IO_RA4_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define IO_RA4_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)
// get/set IO_RA5 aliases
#define IO_RA5_TRIS                 TRISAbits.TRISA5
#define IO_RA5_LAT                  LATAbits.LATA5
#define IO_RA5_PORT                 PORTAbits.RA5
#define IO_RA5_WPU                  WPUAbits.WPUA5
#define IO_RA5_OD                   ODCONAbits.ODCA5
#define IO_RA5_ANS                  ANSELAbits.ANSA5
#define IO_RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define IO_RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define IO_RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define IO_RA5_GetValue()           PORTAbits.RA5
#define IO_RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define IO_RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define IO_RA5_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define IO_RA5_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define IO_RA5_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define IO_RA5_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define IO_RA5_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define IO_RA5_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)
// get/set IO_RA6 aliases
#define IO_RA6_TRIS                 TRISAbits.TRISA6
#define IO_RA6_LAT                  LATAbits.LATA6
#define IO_RA6_PORT                 PORTAbits.RA6
#define IO_RA6_WPU                  WPUAbits.WPUA6
#define IO_RA6_OD                   ODCONAbits.ODCA6
#define IO_RA6_ANS                  ANSELAbits.ANSA6
#define IO_RA6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define IO_RA6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define IO_RA6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define IO_RA6_GetValue()           PORTAbits.RA6
#define IO_RA6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define IO_RA6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define IO_RA6_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define IO_RA6_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define IO_RA6_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define IO_RA6_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define IO_RA6_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define IO_RA6_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)
// get/set IO_RA7 aliases
#define IO_RA7_TRIS                 TRISAbits.TRISA7
#define IO_RA7_LAT                  LATAbits.LATA7
#define IO_RA7_PORT                 PORTAbits.RA7
#define IO_RA7_WPU                  WPUAbits.WPUA7
#define IO_RA7_OD                   ODCONAbits.ODCA7
#define IO_RA7_ANS                  ANSELAbits.ANSA7
#define IO_RA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define IO_RA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define IO_RA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define IO_RA7_GetValue()           PORTAbits.RA7
#define IO_RA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define IO_RA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define IO_RA7_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define IO_RA7_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define IO_RA7_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define IO_RA7_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define IO_RA7_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define IO_RA7_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)
// get/set IO_RB0 aliases
#define MODE_SW_TRIS                 TRISBbits.TRISB0
#define MODE_SW_LAT                  LATBbits.LATB0
#define MODE_SW_PORT                 PORTBbits.RB0
#define MODE_SW_WPU                  WPUBbits.WPUB0
#define MODE_SW_OD                   ODCONBbits.ODCB0
#define MODE_SW_ANS                  ANSELBbits.ANSB0
#define MODE_SW_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define MODE_SW_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define MODE_SW_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define MODE_SW_GetValue()           PORTBbits.RB0
#define MODE_SW_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define MODE_SW_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define MODE_SW_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define MODE_SW_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define MODE_SW_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define MODE_SW_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define MODE_SW_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define MODE_SW_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)
// get/set IO_RB1 aliases
#define OPA2OUT_TRIS                 TRISBbits.TRISB1
#define OPA2OUT_LAT                  LATBbits.LATB1
#define OPA2OUT_PORT                 PORTBbits.RB1
#define OPA2OUT_WPU                  WPUBbits.WPUB1
#define OPA2OUT_OD                   ODCONBbits.ODCB1
#define OPA2OUT_ANS                  ANSELBbits.ANSB1
#define OPA2OUT_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define OPA2OUT_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define OPA2OUT_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define OPA2OUT_GetValue()           PORTBbits.RB1
#define OPA2OUT_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define OPA2OUT_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define OPA2OUT_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define OPA2OUT_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define OPA2OUT_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define OPA2OUT_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define OPA2OUT_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define OPA2OUT_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)
// get/set IO_RB2 aliases
#define OPA2NSS_TRIS                 TRISBbits.TRISB2
#define OPA2NSS_LAT                  LATBbits.LATB2
#define OPA2NSS_PORT                 PORTBbits.RB2
#define OPA2NSS_WPU                  WPUBbits.WPUB2
#define OPA2NSS_OD                   ODCONBbits.ODCB2
#define OPA2NSS_ANS                  ANSELBbits.ANSB2
#define OPA2NSS_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define OPA2NSS_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define OPA2NSS_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define OPA2NSS_GetValue()           PORTBbits.RB2
#define OPA2NSS_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define OPA2NSS_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define OPA2NSS_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define OPA2NSS_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define OPA2NSS_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define OPA2NSS_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define OPA2NSS_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define OPA2NSS_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)
// get/set IO_RB3 aliases
#define VU_G3_TRIS                 TRISBbits.TRISB3
#define VU_G3_LAT                  LATBbits.LATB3
#define VU_G3_PORT                 PORTBbits.RB3
#define VU_G3_WPU                  WPUBbits.WPUB3
#define VU_G3_OD                   ODCONBbits.ODCB3
#define VU_G3_ANS                  ANSELBbits.ANSB3
#define VU_G3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define VU_G3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define VU_G3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define VU_G3_GetValue()           PORTBbits.RB3
#define VU_G3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define VU_G3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define VU_G3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define VU_G3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define VU_G3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define VU_G3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define VU_G3_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define VU_G3_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)
// get/set IO_RB4 aliases
#define VU_G2_TRIS                 TRISBbits.TRISB4
#define VU_G2_LAT                  LATBbits.LATB4
#define VU_G2_PORT                 PORTBbits.RB4
#define VU_G2_WPU                  WPUBbits.WPUB4
#define VU_G2_OD                   ODCONBbits.ODCB4
#define VU_G2_ANS                  ANSELBbits.ANSB4
#define VU_G2_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define VU_G2_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define VU_G2_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define VU_G2_GetValue()           PORTBbits.RB4
#define VU_G2_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define VU_G2_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define VU_G2_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define VU_G2_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define VU_G2_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define VU_G2_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define VU_G2_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define VU_G2_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)
// get/set IO_RB5 aliases
#define VU_G1_TRIS                 TRISBbits.TRISB5
#define VU_G1_LAT                  LATBbits.LATB5
#define VU_G1_PORT                 PORTBbits.RB5
#define VU_G1_WPU                  WPUBbits.WPUB5
#define VU_G1_OD                   ODCONBbits.ODCB5
#define VU_G1_ANS                  ANSELBbits.ANSB5
#define VU_G1_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define VU_G1_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define VU_G1_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define VU_G1_GetValue()           PORTBbits.RB5
#define VU_G1_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define VU_G1_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define VU_G1_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define VU_G1_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define VU_G1_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define VU_G1_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define VU_G1_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define VU_G1_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)
// get/set IO_RB6 aliases
#define IO_RB6_TRIS                 TRISBbits.TRISB6
#define IO_RB6_LAT                  LATBbits.LATB6
#define IO_RB6_PORT                 PORTBbits.RB6
#define IO_RB6_WPU                  WPUBbits.WPUB6
#define IO_RB6_OD                   ODCONBbits.ODCB6
#define IO_RB6_ANS                  ANSELBbits.ANSB6
#define IO_RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_RB6_GetValue()           PORTBbits.RB6
#define IO_RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_RB6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_RB6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define IO_RB6_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define IO_RB6_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define IO_RB6_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define IO_RB6_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)
// get/set IO_RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_OD                   ODCONBbits.ODCB7
#define IO_RB7_ANS                  ANSELBbits.ANSB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_RB7_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define IO_RB7_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define IO_RB7_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define IO_RB7_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)
// get/set IO_RC0 aliases
#define IO_RC0_TRIS                 TRISCbits.TRISC0
#define IO_RC0_LAT                  LATCbits.LATC0
#define IO_RC0_PORT                 PORTCbits.RC0
#define IO_RC0_WPU                  WPUCbits.WPUC0
#define IO_RC0_OD                   ODCONCbits.ODCC0
#define IO_RC0_ANS                  ANSELCbits.ANSC0
#define IO_RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_RC0_GetValue()           PORTCbits.RC0
#define IO_RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IO_RC0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IO_RC0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IO_RC0_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define IO_RC0_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define IO_RC0_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define IO_RC0_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)
// get/set IO_RC1 aliases
#define IO_RC1_TRIS                 TRISCbits.TRISC1
#define IO_RC1_LAT                  LATCbits.LATC1
#define IO_RC1_PORT                 PORTCbits.RC1
#define IO_RC1_WPU                  WPUCbits.WPUC1
#define IO_RC1_OD                   ODCONCbits.ODCC1
#define IO_RC1_ANS                  ANSELCbits.ANSC1
#define IO_RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_RC1_GetValue()           PORTCbits.RC1
#define IO_RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IO_RC1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IO_RC1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IO_RC1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define IO_RC1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define IO_RC1_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define IO_RC1_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)
// get/set IO_RC2 aliases
#define UART_TX_TRIS                 TRISCbits.TRISC2
#define UART_TX_LAT                  LATCbits.LATC2
#define UART_TX_PORT                 PORTCbits.RC2
#define UART_TX_WPU                  WPUCbits.WPUC2
#define UART_TX_OD                   ODCONCbits.ODCC2
#define UART_TX_ANS                  ANSELCbits.ANSC2
#define UART_TX_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define UART_TX_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define UART_TX_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define UART_TX_GetValue()           PORTCbits.RC2
#define UART_TX_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define UART_TX_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define UART_TX_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define UART_TX_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define UART_TX_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define UART_TX_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define UART_TX_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define UART_TX_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)
// get/set IO_RC3 aliases
#define UART_RX_TRIS                 TRISCbits.TRISC3
#define UART_RX_LAT                  LATCbits.LATC3
#define UART_RX_PORT                 PORTCbits.RC3
#define UART_RX_WPU                  WPUCbits.WPUC3
#define UART_RX_OD                   ODCONCbits.ODCC3
#define UART_RX_ANS                  ANSELCbits.ANSC3
#define UART_RX_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define UART_RX_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define UART_RX_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define UART_RX_GetValue()           PORTCbits.RC3
#define UART_RX_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define UART_RX_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define UART_RX_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define UART_RX_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define UART_RX_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define UART_RX_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define UART_RX_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define UART_RX_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)
// get/set IO_RC4 aliases
#define GAIN_VIN_TRIS                 TRISCbits.TRISC4
#define GAIN_VIN_LAT                  LATCbits.LATC4
#define GAIN_VIN_PORT                 PORTCbits.RC4
#define GAIN_VIN_WPU                  WPUCbits.WPUC4
#define GAIN_VIN_OD                   ODCONCbits.ODCC4
#define GAIN_VIN_ANS                  ANSELCbits.ANSC4
#define GAIN_VIN_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define GAIN_VIN_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define GAIN_VIN_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define GAIN_VIN_GetValue()           PORTCbits.RC4
#define GAIN_VIN_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define GAIN_VIN_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define GAIN_VIN_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define GAIN_VIN_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define GAIN_VIN_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define GAIN_VIN_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define GAIN_VIN_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define GAIN_VIN_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)
// get/set IO_RC5 aliases
#define VU_R1_TRIS                 TRISCbits.TRISC5
#define VU_R1_LAT                  LATCbits.LATC5
#define VU_R1_PORT                 PORTCbits.RC5
#define VU_R1_WPU                  WPUCbits.WPUC5
#define VU_R1_OD                   ODCONCbits.ODCC5
#define VU_R1_ANS                  ANSELCbits.ANSC5
#define VU_R1_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define VU_R1_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define VU_R1_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define VU_R1_GetValue()           PORTCbits.RC5
#define VU_R1_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define VU_R1_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define VU_R1_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define VU_R1_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define VU_R1_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define VU_R1_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define VU_R1_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define VU_R1_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)
// get/set IO_RC6 aliases
#define VU_Y1_TRIS                 TRISCbits.TRISC6
#define VU_Y1_LAT                  LATCbits.LATC6
#define VU_Y1_PORT                 PORTCbits.RC6
#define VU_Y1_WPU                  WPUCbits.WPUC6
#define VU_Y1_OD                   ODCONCbits.ODCC6
#define VU_Y1_ANS                  ANSELCbits.ANSC6
#define VU_Y1_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define VU_Y1_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define VU_Y1_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define VU_Y1_GetValue()           PORTCbits.RC6
#define VU_Y1_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define VU_Y1_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define VU_Y1_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define VU_Y1_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define VU_Y1_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define VU_Y1_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define VU_Y1_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define VU_Y1_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)
// get/set IO_RC7 aliases
#define VU_G5_TRIS                 TRISCbits.TRISC7
#define VU_G5_LAT                  LATCbits.LATC7
#define VU_G5_PORT                 PORTCbits.RC7
#define VU_G5_WPU                  WPUCbits.WPUC7
#define VU_G5_OD                   ODCONCbits.ODCC7
#define VU_G5_ANS                  ANSELCbits.ANSC7
#define VU_G5_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define VU_G5_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define VU_G5_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define VU_G5_GetValue()           PORTCbits.RC7
#define VU_G5_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define VU_G5_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define VU_G5_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define VU_G5_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define VU_G5_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define VU_G5_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define VU_G5_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define VU_G5_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)
// get/set IO_RD0 aliases
#define IO_RD0_TRIS                 TRISDbits.TRISD0
#define IO_RD0_LAT                  LATDbits.LATD0
#define IO_RD0_PORT                 PORTDbits.RD0
#define IO_RD0_WPU                  WPUDbits.WPUD0
#define IO_RD0_OD                   ODCONDbits.ODCD0
#define IO_RD0_ANS                  ANSELDbits.ANSD0
#define IO_RD0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define IO_RD0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define IO_RD0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define IO_RD0_GetValue()           PORTDbits.RD0
#define IO_RD0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define IO_RD0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define IO_RD0_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define IO_RD0_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define IO_RD0_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define IO_RD0_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define IO_RD0_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define IO_RD0_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)
// get/set IO_RD1 aliases
#define IO_RD1_TRIS                 TRISDbits.TRISD1
#define IO_RD1_LAT                  LATDbits.LATD1
#define IO_RD1_PORT                 PORTDbits.RD1
#define IO_RD1_WPU                  WPUDbits.WPUD1
#define IO_RD1_OD                   ODCONDbits.ODCD1
#define IO_RD1_ANS                  ANSELDbits.ANSD1
#define IO_RD1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define IO_RD1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define IO_RD1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define IO_RD1_GetValue()           PORTDbits.RD1
#define IO_RD1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define IO_RD1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define IO_RD1_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define IO_RD1_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define IO_RD1_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define IO_RD1_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define IO_RD1_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define IO_RD1_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)
// get/set IO_RD2 aliases
#define IO_RD2_TRIS                 TRISDbits.TRISD2
#define IO_RD2_LAT                  LATDbits.LATD2
#define IO_RD2_PORT                 PORTDbits.RD2
#define IO_RD2_WPU                  WPUDbits.WPUD2
#define IO_RD2_OD                   ODCONDbits.ODCD2
#define IO_RD2_ANS                  ANSELDbits.ANSD2
#define IO_RD2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define IO_RD2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define IO_RD2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define IO_RD2_GetValue()           PORTDbits.RD2
#define IO_RD2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define IO_RD2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define IO_RD2_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define IO_RD2_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define IO_RD2_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define IO_RD2_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define IO_RD2_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define IO_RD2_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)
// get/set IO_RD3 aliases
#define GAIN_VOUT_TRIS                 TRISDbits.TRISD3
#define GAIN_VOUT_LAT                  LATDbits.LATD3
#define GAIN_VOUT_PORT                 PORTDbits.RD3
#define GAIN_VOUT_WPU                  WPUDbits.WPUD3
#define GAIN_VOUT_OD                   ODCONDbits.ODCD3
#define GAIN_VOUT_ANS                  ANSELDbits.ANSD3
#define GAIN_VOUT_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define GAIN_VOUT_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define GAIN_VOUT_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define GAIN_VOUT_GetValue()           PORTDbits.RD3
#define GAIN_VOUT_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define GAIN_VOUT_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define GAIN_VOUT_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define GAIN_VOUT_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define GAIN_VOUT_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define GAIN_VOUT_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define GAIN_VOUT_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define GAIN_VOUT_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)
// get/set IO_RD4 aliases
#define VU_G4_TRIS                 TRISDbits.TRISD4
#define VU_G4_LAT                  LATDbits.LATD4
#define VU_G4_PORT                 PORTDbits.RD4
#define VU_G4_WPU                  WPUDbits.WPUD4
#define VU_G4_OD                   ODCONDbits.ODCD4
#define VU_G4_ANS                  ANSELDbits.ANSD4
#define VU_G4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define VU_G4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define VU_G4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define VU_G4_GetValue()           PORTDbits.RD4
#define VU_G4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define VU_G4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define VU_G4_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define VU_G4_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define VU_G4_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define VU_G4_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define VU_G4_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define VU_G4_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)
// get/set IO_RD5 aliases
#define N_Y3_TRIS                 TRISDbits.TRISD5
#define N_Y3_LAT                  LATDbits.LATD5
#define N_Y3_PORT                 PORTDbits.RD5
#define N_Y3_WPU                  WPUDbits.WPUD5
#define N_Y3_OD                   ODCONDbits.ODCD5
#define N_Y3_ANS                  ANSELDbits.ANSD5
#define N_Y3_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define N_Y3_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define N_Y3_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define N_Y3_GetValue()           PORTDbits.RD5
#define N_Y3_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define N_Y3_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define N_Y3_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define N_Y3_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define N_Y3_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define N_Y3_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define N_Y3_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define N_Y3_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)
// get/set IO_RD6 aliases
#define N_Y2_TRIS                 TRISDbits.TRISD6
#define N_Y2_LAT                  LATDbits.LATD6
#define N_Y2_PORT                 PORTDbits.RD6
#define N_Y2_WPU                  WPUDbits.WPUD6
#define N_Y2_OD                   ODCONDbits.ODCD6
#define N_Y2_ANS                  ANSELDbits.ANSD6
#define N_Y2_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define N_Y2_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define N_Y2_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define N_Y2_GetValue()           PORTDbits.RD6
#define N_Y2_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define N_Y2_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define N_Y2_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define N_Y2_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define N_Y2_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define N_Y2_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define N_Y2_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define N_Y2_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)
// get/set IO_RD7 aliases
#define N_Y1_TRIS                 TRISDbits.TRISD7
#define N_Y1_LAT                  LATDbits.LATD7
#define N_Y1_PORT                 PORTDbits.RD7
#define N_Y1_WPU                  WPUDbits.WPUD7
#define N_Y1_OD                   ODCONDbits.ODCD7
#define N_Y1_ANS                  ANSELDbits.ANSD7
#define N_Y1_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define N_Y1_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define N_Y1_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define N_Y1_GetValue()           PORTDbits.RD7
#define N_Y1_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define N_Y1_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define N_Y1_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define N_Y1_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define N_Y1_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define N_Y1_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define N_Y1_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define N_Y1_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)
// get/set IO_RE0 aliases
#define OPA_OUT_TRIS                 TRISEbits.TRISE0
#define OPA_OUT_LAT                  LATEbits.LATE0
#define OPA_OUT_PORT                 PORTEbits.RE0
#define OPA_OUT_WPU                  WPUEbits.WPUE0
#define OPA_OUT_OD                   ODCONEbits.ODCE0
#define OPA_OUT_ANS                  ANSELEbits.ANSE0
#define OPA_OUT_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define OPA_OUT_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define OPA_OUT_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define OPA_OUT_GetValue()           PORTEbits.RE0
#define OPA_OUT_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define OPA_OUT_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define OPA_OUT_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define OPA_OUT_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define OPA_OUT_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define OPA_OUT_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define OPA_OUT_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define OPA_OUT_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)
// get/set IO_RE1 aliases
#define IO_RE1_TRIS                 TRISEbits.TRISE1
#define IO_RE1_LAT                  LATEbits.LATE1
#define IO_RE1_PORT                 PORTEbits.RE1
#define IO_RE1_WPU                  WPUEbits.WPUE1
#define IO_RE1_OD                   ODCONEbits.ODCE1
#define IO_RE1_ANS                  ANSELEbits.ANSE1
#define IO_RE1_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define IO_RE1_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define IO_RE1_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define IO_RE1_GetValue()           PORTEbits.RE1
#define IO_RE1_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define IO_RE1_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define IO_RE1_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define IO_RE1_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define IO_RE1_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define IO_RE1_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define IO_RE1_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define IO_RE1_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)
// get/set IO_RE2 aliases
#define IO_RE2_TRIS                 TRISEbits.TRISE2
#define IO_RE2_LAT                  LATEbits.LATE2
#define IO_RE2_PORT                 PORTEbits.RE2
#define IO_RE2_WPU                  WPUEbits.WPUE2
#define IO_RE2_OD                   ODCONEbits.ODCE2
#define IO_RE2_ANS                  ANSELEbits.ANSE2
#define IO_RE2_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define IO_RE2_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define IO_RE2_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define IO_RE2_GetValue()           PORTEbits.RE2
#define IO_RE2_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define IO_RE2_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define IO_RE2_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define IO_RE2_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define IO_RE2_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define IO_RE2_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define IO_RE2_SetAnalogMode()      do { ANSELEbits.ANSE2 = 1; } while(0)
#define IO_RE2_SetDigitalMode()     do { ANSELEbits.ANSE2 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/