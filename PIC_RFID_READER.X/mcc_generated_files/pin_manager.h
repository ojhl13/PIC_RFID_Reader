/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC12LF1840
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SDO aliases
#define SDO_TRIS               TRISAbits.TRISA0
#define SDO_LAT                LATAbits.LATA0
#define SDO_PORT               PORTAbits.RA0
#define SDO_WPU                WPUAbits.WPUA0
#define SDO_ANS                ANSELAbits.ANSA0
#define SDO_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define SDO_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define SDO_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define SDO_GetValue()           PORTAbits.RA0
#define SDO_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define SDO_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define SDO_SetPullup()      do { WPUAbits.WPUA0 = 1; } while(0)
#define SDO_ResetPullup()    do { WPUAbits.WPUA0 = 0; } while(0)
#define SDO_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define SDO_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set SCK aliases
#define SCK_TRIS               TRISAbits.TRISA1
#define SCK_LAT                LATAbits.LATA1
#define SCK_PORT               PORTAbits.RA1
#define SCK_WPU                WPUAbits.WPUA1
#define SCK_ANS                ANSELAbits.ANSA1
#define SCK_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define SCK_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define SCK_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define SCK_GetValue()           PORTAbits.RA1
#define SCK_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define SCK_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define SCK_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define SCK_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define SCK_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set SDI aliases
#define SDI_TRIS               TRISAbits.TRISA2
#define SDI_LAT                LATAbits.LATA2
#define SDI_PORT               PORTAbits.RA2
#define SDI_WPU                WPUAbits.WPUA2
#define SDI_ANS                ANSELAbits.ANSA2
#define SDI_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define SDI_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define SDI_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define SDI_GetValue()           PORTAbits.RA2
#define SDI_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define SDI_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define SDI_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define SDI_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define SDI_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define SDI_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RA4 procedures
#define RA4_SetHigh()    do { LATAbits.LATA4 = 1; } while(0)
#define RA4_SetLow()   do { LATAbits.LATA4 = 0; } while(0)
#define RA4_Toggle()   do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define RA4_GetValue()         PORTAbits.RA4
#define RA4_SetDigitalInput()   do { TRISAbits.TRISA4 = 1; } while(0)
#define RA4_SetDigitalOutput()  do { TRISAbits.TRISA4 = 0; } while(0)
#define RA4_SetPullup()     do { WPUAbits.WPUA4 = 1; } while(0)
#define RA4_ResetPullup()   do { WPUAbits.WPUA4 = 0; } while(0)
#define RA4_SetAnalogMode() do { ANSELAbits.ANSA4 = 1; } while(0)
#define RA4_SetDigitalMode()do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set RA5 procedures
#define RA5_SetHigh()    do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()   do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()   do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()         PORTAbits.RA5
#define RA5_SetDigitalInput()   do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()  do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()     do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()   do { WPUAbits.WPUA5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/