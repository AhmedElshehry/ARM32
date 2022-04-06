/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  UART                                                    */
/*  version    :  V01                                                 */
/*  DATA       : 9/2/2022                                            */
/**************************************************************************/
#ifndef USART_INTERFACE_H
#define USART_INTERFACE_H

/* Defining Macros */

#define USART_U8_8_BIT_WORD					0
#define USART_U8_9_BIT_WORD					1

#define USART_U8_PARITY_DISABLED			0
#define USART_U8_PARITY_ENABLED				1

#define USART_U8_EVEN_PARITY				0
#define USART_U8_ODD_PARITY					1

#define USART_U8_PE_DISABLED				0
#define USART_U8_PE_ENABLED					1


/*******************/
//the function to inilation the USART1
void MUSART1_voidInit(void);
//the function to transmation by  the USART1
void MUSART1_voidTransmit(u8 arr[]);
//the function to resived by  the USART1
u8 MUSART1_u8Receive(void);

#endif






