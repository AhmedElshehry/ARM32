/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  UART                                                    */
/*  version    :  V01                                                 */
/*  DATA       : 9/2/2022                                            */
/**************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "USART_interface.h"
#include "USART_private.h"
#include "USART_config.h"


void MUSART1_voidInit(void)
{
	/*	baud rate = 9600		*/
	USART1 -> BRR = BAUD_RATE ;
	
	/* select over sampling ===>  16  */
	CLR_BIT(USART1-> CR[0], 15);
	/* select the word length frame= 1 bit start +8 bits data +1 bit stop  */
	CLR_BIT(USART1-> CR[0], 12);
	CLR_BIT(USART1-> CR[1], 12);
	CLR_BIT(USART1-> CR[1], 13);
	
	/*disable parity bits */
	CLR_BIT(USART1-> CR[0], 10);
    /* Enabling Transmitter */
	SET_BIT((USART1-> CR[0]), 3);
	/* Enabling Receiver */			
	SET_BIT((USART1-> CR[0]), 2);
	/* Enabling USART */			
	SET_BIT((USART1-> CR[0]), 13);		
	
	/* Clearing status register */
	USART1 -> SR = 0;						
}


void MUSART1_Transmitdata(u8 r)
{

		while((GET_BIT((USART1 -> SR), 6)) == 0);
		USART1 -> DR = r;



}

void MUSART1_voidTransmit(u8 arr[])
{
	u8 i = 0;
	while(arr[i] != '\0')
    {

		//wait the transmition complate 
		while((GET_BIT((USART1 -> SR), 6)) == 0);
		USART1 -> DR = arr[i];
		i++;
	}
	
}

u8 MUSART1_u8Receive(void)
{
	u8 Loc_u8ReceivedData = 0;
	while((GET_BIT((USART1 -> SR), 5)) == 0);
	Loc_u8ReceivedData = USART1 -> DR;
	return (Loc_u8ReceivedData);
}

u8 MUSART1_Receive1(u8 * ptr )
{
	u8 Local_u8CounterReceivedData =0;
	while((GET_BIT((USART1 -> SR), 5)) == 0);

	ptr[Local_u8CounterReceivedData] = USART1 -> DR;

	while (ptr[Local_u8CounterReceivedData]!='\0')
	{
		Local_u8CounterReceivedData++;
		while((GET_BIT((USART1 -> SR), 5)) == 0);
		ptr[Local_u8CounterReceivedData] = USART1 -> DR;
	}

  //ptr[Local_u8CounterReceivedData]='\0';

}



char comper_string(char arr1[],char arr2[])
{
	int i=0;
	char flag=0;
	while ((arr2[i]!='\0'))
	{
		if(arr1[i]== arr2[i])
		{
			flag=1;
		}
		else
		{
			flag =0;
		}
		i++;
	}

return flag;
}













