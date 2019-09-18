/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F15325
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/drivers/i2c_slave.h"

/*
                         Main application
 */
void main(void)
{
    //restart:
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
//#define I2C1_SLAVE_ADDRESS 0 
//#define I2C1_SLAVE_MASK    0x00

    uint8_t util;
    uint8_t x;
    
    i2c_slave_open();
    SSP1CON2bits.SEN = 1; //clock stretch
    //TMR2_LoadPeriodRegister(254);
    
    uint8_t buf[2];
    //i2c1_driver_start();
    //i2c1_driver_setAddr(addr);
    //i2c1_driver_startRX();
    
    //TMR1 = 0;
    //T1CONbits.TMR1CS = 0b00;
    //T1CONbits.TMR1ON = 1;
    
    //CCPR2 = 0;
    
    
    while (1)
    {
        //PWM4_LoadDutyValue(30);
        //i2c_slave_write(data);
        //PWM3_LoadDutyValue(i2c1_driver_getRXData());
        //i2c_slave_ISR();
        //i2c1_driver_getRXData();
        //i2c_slave_read();
        //PWM3_LoadDutyValue(i2c_slave_read());
        //i2c_slave_sendAck();
        //i2c1_driver_sendACK();
        // Add your application code
        
        buf[0] = i2c_slave_read();
        /*buf[1] = i2c_slave_read();
        switch(buf[0])
        {
            case 0x00:
                PWM3_LoadDutyValue((buf[1]*0.1215686)+30);
            case 0x01:
                PWM4_LoadDutyValue((buf[1]*0.1215686)+30);
            case 0x02:
                PWM5_LoadDutyValue((buf[1]*0.1215686)+30);
            //default:
                //goto restart;
                //x = 5;
                //i2c1_driver_restart();
                //SYSTEM_Initialize();
                
                //PMD_Initialize();
                //PIN_MANAGER_Initialize();
                //OSCILLATOR_Initialize();
                //PWM4_Initialize();
                //PWM3_Initialize();
                //TMR2_Initialize();
    // T2CS FOSC/4;    
    //T2CLKCON = 0x01;

    // T2PSYNC Not Synchronized; T2MODE Software control; T2CKPOL Rising Edge; T2CKSYNC Not Synchronized; 
    //T2HLT = 0x00;

    // T2RSEL T2INPPS pin; 
    //T2RST = 0x00;

    // T2PR 155; 
    //T2PR = 0x9B;

    // TMR2 0; 
    //T2TMR = 0x00;

    // Clearing IF flag before enabling the interrupt.
    //PIR4bits.TMR2IF = 0;

    // Enabling TMR2 interrupt.
    //PIE4bits.TMR2IE = 1;

    // Set Default Interrupt Handler
    //TMR2_SetInterruptHandler(TMR2_DefaultInterruptHandler);

    // T2CKPS 1:128; T2OUTPS 1:1; TMR2ON on; 
    //T2CON = 0xF0;
                
                //TMR2_ISR();
                //PWM5_Initialize();
                
                //INTERRUPT_GlobalInterruptEnable();
                //INTERRUPT_PeripheralInterruptEnable();
                //i2c_slave_open();
                //SSP1CON2bits.SEN = 1;
        }*/
        PWM3_LoadDutyValue((buf[0]*0.1215686)+30);
        SSP1CON1bits.CKP = 1;
    }
}
/**
 End of File
*/