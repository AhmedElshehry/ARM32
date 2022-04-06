/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  UART                                                    */
/*  version    :  V01                                                 */
/*  DATA       : 9/2/2022                                            */
/**************************************************************************/
#ifndef USART_CONFIG_H
#define USART_CONFIG_H

/* 
	Baud rate to be implemented  For clock  8MHz extrnal :
	Baud rate =9600  -> 52.083 : BRR= M=34+F=1=0x341
	Baud rate =115200 -> 4.34 :  BRR= M=4+F=5=0x341
*/
/*opation Baud rate : 
                    1-BAUD_RATE_9600
					2-BAUD_RATE_115200 */

#define BAUD_RATE   BAUD_RATE_9600

#endif
