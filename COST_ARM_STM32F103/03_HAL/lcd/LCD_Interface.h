/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************  Name   :Ahmed elshehry *******************/
/***************  Date   : 12/12/2021  **********************/
/***************  SWC    : LCD       **********************/
/*************** Version : 1.0        **********************/

#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

/* Function: LCD_voidInit to confg the lcd at used the 8 pin of microcontre 	   */
/*This Function initialize LCD	                                                                   	    **/
void LCD_voidInit(void);

/* Function: LCD_voidSendInstruction                        				    **/
/* This Function Send a command "an instruction" to LCD to work			     **/
void LCD_voidSendInstruction(u8 Copy_u8instruction);

/* Function: LCD_voidWriteChar		                        				    **/
/*This Function writes a character "data" at  LCD	at  start frist address			       	**/
void LCD_voidWriteChar(u8 Copy_u8Data);

/* This Function writes a string "array of characters" on LCD		       	**/
//void LCD_voidWriteString(u8 *Copy_u8String, u8 Copy_u8Size);
void LCD_voidSendString(char *Copy_u8String);
/* This Function Clears the whole LCD display						       	**/
/*********************************************************************************/
void LCD_voidClearDisplay();

void LCD_IntToString(int integer,char *String);


#endif
