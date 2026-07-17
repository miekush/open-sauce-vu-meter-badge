/**
 * System Driver Source File
 * 
 * @file system.c
 * 
 * @ingroup systemdriver
 * 
 * @brief This file contains the API implementation for the System driver.
 *
 * @version Driver Version 2.0.3
 *
 * @version Package Version 1.0.6
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

#include "../system.h"

/** 
* @ingroup systemdriver
* @brief Initializes the Peripheral Module Disable (PMD) module.
* @param None.
* @return None.
*/
void PMD_Initialize(void);


void SYSTEM_Initialize(void)
{
    CLOCK_Initialize();
    PIN_MANAGER_Initialize();
    ADC_Initialize();
    TMR0_Initialize();
    EUSART1_Initialize();
    OPA1_Initialize();
    OPA2_Initialize();
    PMD_Initialize();
    INTERRUPT_Initialize();
}

void PMD_Initialize(void)
{
    //IOCMD IOC disabled; NVMMD NVM disabled; SCANMD SCANNER disabled; CRCMD CRC disabled; SYSCMD SYSCLK enabled; TMR0MD TMR0 enabled; CLKRMD CLKR disabled; ACTMD ACT disabled; 
    PMD0 = (uint8_t)0x77;
    //TMR1MD TMR1 disabled; TMR2MD TMR2 disabled; CCP1MD CCP1 disabled; CCP2MD CCP2 disabled; TMR3MD TMR3 disabled; TMR4MD TMR4 disabled; PWM1MD PWM1 disabled; TMR6MD TMR6 disabled; 
    PMD1 = (uint8_t)0xFF;
    //CLC1MD CLC1 disabled; CLC2MD CLC2 disabled; CLC3MD CLC3 disabled; CWG1MD CWG1 disabled; NCO1MD NCO1 disabled; PWM2MD PWM2 disabled; CLC4MD CLC4 disabled; 
    PMD2 = (uint8_t)0x7F;
    //MSSP1MD MSSP1 disabled; FVRMD FVR disabled; CM1MD CM1 disabled; UART1MD UART1 enabled; MSSP2MD MSSP2 disabled; UART2MD UART2 disabled; CMLP1MD CMLP1 disabled; 
    PMD3 = (uint8_t)0xFC;
    //ADCMD ADC enabled; DAC1MD DAC1 disabled; DAC2MD DAC2 disabled; ZCDMD ZCD disabled; OPA1MD OPA1 enabled; OPA2MD OPA2 enabled; OPA3MD OPA3 disabled; OPA4MD OPA4 disabled; 
    PMD4 = (uint8_t)0xE6;
    //APMMD APM disabled; VREFLPMD VREFLP disabled; PORTWMD VPORT disabled; 
    PMD5 = (uint8_t)0x7;
}

