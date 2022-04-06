/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************  Name   :Ahmed elshehry *******************/
/***************  Date   : 12/12/2021  **********************/
/***************  SWC    : LCD       **********************/
/*************** Version : 1.0        **********************/
/*concation hard ware
 -----------                   ----------
 | ATmega  |                 |   LCD    |
 |           |                 |          |
 |        PD7|---------------->|D7        |
 |        PD6|---------------->|D6        |
 |        PD5|---------------->|D5        |
 |        PD4|---------------->|D4        |
 |        PD3|---------------->|D3        |
 |        PD2|---------------->|D2        |
 |        PD1|---------------->|D1        |
 |        PD0|---------------->|D0        |
 |           |                 |          |
 |        PA2|---------------->|E         |
 |        PA1|---------------->|RW        |
 |        PA0|---------------->|RS        |
 -----------                   ----------
 */
//File guard 
#ifndef LCD_CONFIG_H
#define LCD_CONFIG_H
//the cong of the port of data and the pin to sent commaned
#define    LCD_u8_DATA_PORT         DIO_u8_PORTD
#define    LCD_u8_CTRL_PORT     	DIO_u8_PORTA

#define     LCD_u8_RSPIN                  DIO_u8_PIN0         //register selection 
#define     LCD_u8_RWPIN                 DIO_u8_PIN1         //write and read
#define     LCD_u8_EPIN                    DIO_u8_PIN2         //Enable 

#endif
