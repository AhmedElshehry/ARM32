/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  UART                                                    */
/*  version    :  V01                                                 */
/*  DATA       : 9/2/2022                                            */
/**************************************************************************/
#ifndef USART_PRIVATE_H
#define USART_PRIVATE_H

typedef struct{
	volatile u32 SR;
	volatile u32 DR;
	volatile u32 BRR;
	volatile u32 CR[3];
	volatile u32 GTPR;
}USART_T;
//pointer to 

#define 	USART1 		(( USART_T * ) 0x40011000)
#define 	USART2 		(( USART_T * ) 0x40004400)
#define 	USART3 		(( USART_T * ) 0x40004800)
#define 	USART4 		(( USART_T * ) 0x40004C00)
#define 	USART5 		(( USART_T * ) 0x40005000)
#define 	USART6 		(( USART_T * ) 0x40011400)
#define 	USART7 		(( USART_T * ) 0x40007800)
#define 	USART8		(( USART_T * ) 0x40007C00)

#define   BAUD_RATE_9600       0x0341
#define	  BAUD_RATE_115200     0x0045

#endif