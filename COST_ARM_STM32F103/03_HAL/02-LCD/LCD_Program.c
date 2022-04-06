/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************  Name   :Ahmed elshehry *******************/
/***************  Date   : 12/12/2021  **********************/
/***************  SWC    : LCD       **********************/
/*************** Version : 1.0        **********************/


/* Header files Inclusions						    */

#include <util/delay.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_Interface.h"
// lcd file 
#include "LCD_Interface.h"
#include "LCD_Private.h"
#include "LCD_Config.h"

/* Function: LCD_voidInit to confg the lcd at used the 8 pin of microcontre 	   
This Function initialize LCD	    **/
void LCD_voidInit(void)
{
	//Configure the direction of all control o/p
	DIO_voidSetPinDirection(LCD_u8_CTRL_PORT,LCD_u8_RSPIN,DIO_u8_OUTPUT);
	DIO_voidSetPinDirection(LCD_u8_CTRL_PORT,LCD_u8_RWPIN,DIO_u8_OUTPUT);
	DIO_voidSetPinDirection(LCD_u8_CTRL_PORT,LCD_u8_EPIN,DIO_u8_OUTPUT);

	//Configure the direction of data port
	DIO_voidSetPortDirection(LCD_u8_DATA_PORT,0xff);
	/*LCD Initialization*/
	/* Delay 35ms to ensure the initialization of the LCD driver */
	_delay_ms(35);
	/*Funcation set return cursor to first position on first line   that write commend */
	LCD_voidSendInstruction(0b00111100);
	_delay_us(40; // delay need 
	/*Display ON/OFF*/
	LCD_voidSendInstruction(0b00001111);
	_delay_us(40;
	/*Clear Display lcd*/
	LCD_voidSendInstruction(0b00000001);
	_delay_ms(2);
	/*Entry Mode Set*/
	LCD_voidSendInstruction(0b00000110);
	_delay_ms(2);
}

/* Function LCD_voidSendInstruction                        				    **/
/* This Function Send a command  to LCD			       	**/
void LCD_voidSendInstruction(u8 Copy_command )
{
	
    
   
	DIO_voidSetPinValue(LCD_u8_CTRL_PORT,LCD_u8_RSPIN,DIO_u8_LOW); //RS = 0 (Command)Set RS to LOW
	DIO_voidSetPinValue(LCD_u8_CTRL_PORT,LCD_u8_RWPIN,DIO_u8_LOW);//	RW = 0 (Write)Set R/W to LOW 
	DIO_voidSetPinValue(LCD_u8_CTRL_PORT,LCD_u8_EPIN,DIO_u8_HIGH); //E = 1 (Enable)Set E to HIGH

	/* Load Command on Data bus */
	DIO_voidSetPortValue(LCD_u8_DATA_PORT,Copy_u8icommand);

	/* Set E to LOW */
	DIO_voidSetPinValue(LCD_u8_CTRL_PORT,LCD_u8_EPIN,DIO_u8_HIGH);
	_delay_us(2);
	/* Set E to HIGH */
	DIO_voidSetPinValue(LCD_u8_CTRL_PORT,LCD_u8_EPIN,DIO_u8_LOW);
}

/*Function: LCD_voidWriteChar		                        				    **/
/*This Function writes a character "data" at  LCD	at  start frist address			       	**/

void LCD_voidWriteChar(u8 Copy_u8Data)
{
	
	DIO_voidSetPinValue(LCD_u8_CTRL_PORT,LCD_u8_RSPIN,DIO_u8_HIGH);//RS = 0 (Data)
	DIO_voidSetPinValue(LCD_u8_CTRL_PORT,LCD_u8_RWPIN,DIO_u8_LOW);//RW = 0 (Write)
	DIO_voidSetPinValue(LCD_u8_CTRL_PORT,LCD_u8_EPIN,DIO_u8_HIGH); //E = 1 (Enable)

/* Load Command on Data bus */
	DIO_voidSetPortValue(LCD_u8_DATA_PORT,Copy_u8Data);

	//E =1
	DIO_voidSetPinValue(LCD_u8_CTRL_PORT,LCD_u8_EPIN,DIO_u8_HIGH);
	_delay_us(2);
		//E =0
	DIO_voidSetPinValue(LCD_u8_CTRL_PORT,LCD_u8_EPIN,DIO_u8_LOW);
}
//Another Way
//* This Function writes a string "array of characters" on LCD		       	**/
/*
void LCD_voidWriteString(u8 *Copy_u8String, u8 Copy_u8Size)
{
	//String is an array of characters
	for(u8 i=0; i<Copy_u8Size; i++)
	{
		LCD_voidWriteChar(Copy_u8String[i]);	//Write a char on each iteration
	}
}
*/


void LCD_voidSendString(char *Copy_u8String)
{
	u8 i =0;
	while( Copy_u8String[i] != '\0' )
	{
		LCD_voidWriteChar(Copy_u8String[i]);
		i++;
	}
}


/* This Function Clears the whole LCD display						       	**/
void LCD_voidClearDisplay()
{
	LCD_voidSendInstruction(0b00000001);	//sending Instruction to clear the whole display
}

