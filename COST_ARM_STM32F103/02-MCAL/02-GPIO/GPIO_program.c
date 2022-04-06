/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  GPIO                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 10/1/2022                                            */
/**************************************************************************/
//include from lib
#include "STD_TYPES.h"
#include "BIT_MATH.h"

//include from drive GPIO 
#include "GPIO_interface.h"
#include "GPIO_private.h"
//#include "GPIO_config.h"


/* the funcation to set driction pin */
void MGPIO_voidSetPinDriction( u8 capy_u8Port ,u8 capy_u8PinId,u8 Capy_u8modePin)
{
	switch (capy_u8Port)
	{
		case GPIO_PORTA:
		                if(capy_u8PinId<=7)
						{   //clare the 4 bit has pin 
							GPIOA_CRL&=~((0b1111)<<(capy_u8PinId * 4));
							//set pin for mode 
							GPIOA_CRL|= ((Capy_u8modePin)<<(capy_u8PinId * 4));
						}
						else if(capy_u8PinId<=15)
						{   capy_u8PinId=capy_u8PinId-8;
							//clare the 4 bit has pin
							GPIOA_CRH&=~((0b1111)<<(capy_u8PinId * 4));
							//set pin for mode 
							GPIOA_CRH|= ((Capy_u8modePin)<<(capy_u8PinId * 4));
						}
		                break;
	
	    case GPIO_PORTB:
		                if(capy_u8PinId<=7)
						{   //clare the 4 bit has pin 
							GPIOB_CRL&=~((0b1111)<<(capy_u8PinId * 4));
							//set pin for mode 
							GPIOB_CRL|= ((Capy_u8modePin)<<(capy_u8PinId * 4));
						}
						else if(capy_u8PinId<=15)
						{   capy_u8PinId=capy_u8PinId-8;
							//clare the 4 bit has pin
							GPIOB_CRH&=~((0b1111)<<(capy_u8PinId * 4));
							//set pin for mode 
							GPIOB_CRH|= ((Capy_u8modePin)<<(capy_u8PinId * 4));
						}
		                break;
	
	    case GPIO_PORTC:
		                if(capy_u8PinId<=7)
						{   //clare the 4 bit has pin 
							GPIOC_CRL&=~((0b1111)<<(capy_u8PinId * 4));
							//set pin for mode 
							GPIOC_CRL|= ((Capy_u8modePin)<<(capy_u8PinId * 4));
						}
						else if(capy_u8PinId<=15)
						{   capy_u8PinId=capy_u8PinId-8;
							//clare the 4 bit has pin
							GPIOC_CRH&=~((0b1111)<<(capy_u8PinId * 4));
							//set pin for mode 
							GPIOC_CRH|= ((Capy_u8modePin)<<(capy_u8PinId * 4));
						}
		                break;
		
	    default : break;
	}
	
}
/* the funcation to set value pin */
void MGPIO_voidSetPinValue( u8 capy_u8Port ,u8 capy_u8PinId,u8 Capy_u8ValuePin)
{   
	switch (capy_u8Port)
	{
		case GPIO_PORTA:
		                if( Capy_u8ValuePin == HIGH)
						{
							SET_BIT(GPIOA_ODR,capy_u8PinId);
						}
						else if ( Capy_u8ValuePin ==LOW)
						{
						    CLR_BIT(GPIOA_ODR,capy_u8PinId);
						}
						break;
		case GPIO_PORTB:
		                if( Capy_u8ValuePin == HIGH)
						{
							SET_BIT(GPIOB_ODR,capy_u8PinId);
						}
						else if ( Capy_u8ValuePin ==LOW)
						{
						    CLR_BIT(GPIOB_ODR,capy_u8PinId);
						}
						break;
		case GPIO_PORTC:
		                if( Capy_u8ValuePin == HIGH)
						{
							SET_BIT(GPIOC_ODR,capy_u8PinId);
						}
						else if ( Capy_u8ValuePin ==LOW)
						{
						    CLR_BIT(GPIOC_ODR,capy_u8PinId);
						}
						break;
		default: break; 
	}
}
/* the funcation to get pin value  */
u8 MGPIO_u8GetPinValue( u8 capy_u8Port ,u8 capy_u8PinId)
{  
    u8 local_return=0;
	switch (capy_u8Port)
	{
		case GPIO_PORTA:
						local_return= GET_BIT(GPIOA_IDR,capy_u8PinId);
						break;
	    case GPIO_PORTB:
						local_return= GET_BIT(GPIOB_IDR,capy_u8PinId);
						break;
	    case GPIO_PORTC:
						local_return= GET_BIT(GPIOC_IDR,capy_u8PinId);
						break;
	    default: break;
	}
    return local_return;	
}
