/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  GPIO                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 29/1/2022                                            */
/**************************************************************************/
//include from lib
#include "STD_TYPES.h"
#include "BIT_MATH.h"

//include from drive GPIO 
#include "GPIO_interface.h"
#include "GPIO_private.h"
//#include "GPIO_config.h"




/* the funcation to set driction pin */
void MGPIO_voidSetPinDrictionOutAf( u8 capy_u8Port ,u8 capy_u8PinId,u8 Capy_u8modePin, u8 Capy_u8modeoutput,u8 Capy_u8speedmode )
{
	switch (capy_u8Port)
	{
		case GPIO_PORTA:
		                if(capy_u8PinId<=15)
						{   /*  the set pin mode   */
					        //clare the 2 bit has pin mode 
							GPIOA_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOA_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
							
							/*  the set pin speed    */
							//clare the 2 bit has pin mode 
							GPIOA_OSPEEDR&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOA_OSPEEDR|= ((Capy_u8speedmode)<<(capy_u8PinId * 2 ));
							
							/* set mode output */
							if(Capy_u8modeoutput == OUTPUT_PUSH_PULL )
							   {
								   CLR_BIT(GPIOA_OTYPER, capy_u8PinId);
							   }
							   
							else 
							{
								SET_BIT(GPIOA_OTYPER, capy_u8PinId);
							}
						}
						else 
						{
							//#error ("return error the pin choise ");
						}
		                break;
	
	    case GPIO_PORTB:
		                if(capy_u8PinId<=15)
						{   /*  the set pin mode   */
					        //clare the 2 bit has pin mode 
							GPIOB_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOB_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
							
							/*  the set pin speed    */
							//clare the 2 bit has pin mode 
							GPIOB_OSPEEDR&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOB_OSPEEDR|= ((Capy_u8speedmode)<<(capy_u8PinId * 2 ));
							
							/* set mode output */
							if(Capy_u8modeoutput == OUTPUT_PUSH_PULL )
							   {
								   CLR_BIT(GPIOB_OTYPER, capy_u8PinId);
							   }
							   
							else 
							{
								SET_BIT(GPIOB_OTYPER, capy_u8PinId);
							}
						}
						else 
						{
							//#error ("return error the pin choise ");
						}
		                break;
	
	    case GPIO_PORTC:
		                if(capy_u8PinId<=15)
						{   /*  the set pin mode   */
					        //clare the 2 bit has pin mode 
							GPIOC_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOC_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
							
							/*  the set pin speed    */
							//clare the 2 bit has pin mode 
							GPIOC_OSPEEDR&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOC_OSPEEDR|= ((Capy_u8speedmode)<<(capy_u8PinId * 2 ));
							
							/* set mode output */
							if(Capy_u8modeoutput == OUTPUT_PUSH_PULL )
							   {
								   CLR_BIT(GPIOC_OTYPER, capy_u8PinId);
							   }
							   
							else 
							{
								SET_BIT(GPIOC_OTYPER, capy_u8PinId);
							}
						}
						else 
						{
							//#error ("return error the pin choise ");
						}
		                break;
						
		case GPIO_PORTD:
		                if(capy_u8PinId<=15)
						{   /*  the set pin mode   */
					        //clare the 2 bit has pin mode 
							GPIOD_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOD_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
							
							/*  the set pin speed    */
							//clare the 2 bit has pin mode 
							GPIOD_OSPEEDR&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOD_OSPEEDR|= ((Capy_u8speedmode)<<(capy_u8PinId * 2 ));
							
							/* set mode output */
							if(Capy_u8modeoutput == OUTPUT_PUSH_PULL )
							   {
								   CLR_BIT(GPIOD_OTYPER, capy_u8PinId);
							   }
							   
							else 
							{
								SET_BIT(GPIOD_OTYPER, capy_u8PinId);
							}
						}
						else 
						{
							//#error ("return error the pin choise ");
						}
		                break;		
						
		case GPIO_PORTF:
		                if(capy_u8PinId<=15)
						{   /*  the set pin mode   */
					        //clare the 2 bit has pin mode 
							GPIOF_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOF_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
							
							/*  the set pin speed    */
							//clare the 2 bit has pin mode 
							GPIOF_OSPEEDR&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOF_OSPEEDR|= ((Capy_u8speedmode)<<(capy_u8PinId * 2 ));
							
							/* set mode output */
							if(Capy_u8modeoutput == OUTPUT_PUSH_PULL )
							   {
								   CLR_BIT(GPIOF_OTYPER, capy_u8PinId);
							   }
							   
							else 
							{
								SET_BIT(GPIOF_OTYPER, capy_u8PinId);
							}
						}
						else 
						{
							//#error ("return error the pin choise ");
						}
		                break;
						
		case GPIO_PORTE:
		                if(capy_u8PinId<=15)
						{   /*  the set pin mode   */
					        //clare the 2 bit has pin mode 
							GPIOE_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOE_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
							
							/*  the set pin speed    */
							//clare the 2 bit has pin mode 
							GPIOE_OSPEEDR&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOE_OSPEEDR|= ((Capy_u8speedmode)<<(capy_u8PinId * 2 ));
							
							/* set mode output */
							if(Capy_u8modeoutput == OUTPUT_PUSH_PULL )
							   {
								   CLR_BIT(GPIOE_OTYPER, capy_u8PinId);
							   }
							   
							else 
							{
								SET_BIT(GPIOE_OTYPER, capy_u8PinId);
							}
						}
						else 
						{
							//#error ("return error the pin choise ");
						}
		                break;				
						
		case GPIO_PORTH:
		                if(capy_u8PinId<=15)
						{   /*  the set pin mode   */
					        //clare the 2 bit has pin mode 
							GPIOH_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOH_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
							
							/*  the set pin speed    */
							//clare the 2 bit has pin mode 
							GPIOH_OSPEEDR&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOH_OSPEEDR|= ((Capy_u8speedmode)<<(capy_u8PinId * 2 ));
							
							/* set mode output */
							if(Capy_u8modeoutput == OUTPUT_PUSH_PULL )
							   {
								   CLR_BIT(GPIOH_OTYPER, capy_u8PinId);
							   }
							   
							else 
							{
								SET_BIT(GPIOH_OTYPER, capy_u8PinId);
							}
						}
						else 
						{
							//#error "return error the pin choise ";
						}
		                break;
		
		case GPIO_PORTG:
		                if(capy_u8PinId<=15)
						{   /*  the set pin mode   */
					        //clare the 2 bit has pin mode 
							GPIOG_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOG_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
							
							/*  the set pin speed    */
							//clare the 2 bit has pin mode 
							GPIOG_OSPEEDR&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOG_OSPEEDR|= ((Capy_u8speedmode)<<(capy_u8PinId * 2 ));
							
							/* set mode output */
							if(Capy_u8modeoutput == OUTPUT_PUSH_PULL )
							   {
								   CLR_BIT(GPIOG_OTYPER, capy_u8PinId);
							   }
							   
							else 
							{
								SET_BIT(GPIOG_OTYPER, capy_u8PinId);
							}
						}
						else 
						{
							//#error ("return error the pin choise ");
						}
		                break;	

		case GPIO_PORTJ:
		                if(capy_u8PinId<=15)
						{   /*  the set pin mode   */
					        //clare the 2 bit has pin mode 
							GPIOJ_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOJ_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
							
							/*  the set pin speed    */
							//clare the 2 bit has pin mode 
							GPIOJ_OSPEEDR&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOJ_OSPEEDR|= ((Capy_u8speedmode)<<(capy_u8PinId * 2 ));
							
							/* set mode output */
							if(Capy_u8modeoutput == OUTPUT_PUSH_PULL )
							   {
								   CLR_BIT(GPIOJ_OTYPER, capy_u8PinId);
							   }
							   
							else 
							{
								SET_BIT(GPIOJ_OTYPER, capy_u8PinId);
							}
						}
						else 
						{
							//#error ("return error the pin choise ");
						}
		                break;	

		case GPIO_PORTI:
		                if(capy_u8PinId<=15)
						{   /*  the set pin mode   */
					        //clare the 2 bit has pin mode 
							GPIOI_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOI_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
							
							/*  the set pin speed    */
							//clare the 2 bit has pin mode 
							GPIOI_OSPEEDR&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOI_OSPEEDR|= ((Capy_u8speedmode)<<(capy_u8PinId * 2 ));
							
							/* set mode output */
							if(Capy_u8modeoutput == OUTPUT_PUSH_PULL )
							   {
								   CLR_BIT(GPIOI_OTYPER, capy_u8PinId);
							   }
							   
							else 
							{
								SET_BIT(GPIOI_OTYPER, capy_u8PinId);
							}
						}
						else 
						{
							//#error ("return error the pin choise ");
						}
		                break;	

		case GPIO_PORTK:
		                if(capy_u8PinId<=15)
						{   /*  the set pin mode   */
					        //clare the 2 bit has pin mode 
							GPIOK_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOK_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
							
							/*  the set pin speed    */
							//clare the 2 bit has pin mode 
							GPIOK_OSPEEDR&=~((0b11)<<(capy_u8PinId * 2 ));
							//set pin for mode 
							GPIOK_OSPEEDR|= ((Capy_u8speedmode)<<(capy_u8PinId * 2 ));
							
							/* set mode output */
							if(Capy_u8modeoutput == OUTPUT_PUSH_PULL )
							   {
								   CLR_BIT(GPIOK_OTYPER, capy_u8PinId);
							   }
							   
							else 
							{
								SET_BIT(GPIOK_OTYPER, capy_u8PinId);
							}
						}
						else 
						{
							//#error ("return error the pin choise ");
						}
		                break;	
						
	    
		
	    default : break;
	}
	
}






//the function set driction  mode pin
void MGPIO_voidSetPinDrictionMode( u8 capy_u8Port ,u8 capy_u8PinId,u8 Capy_u8modePin)
{
	if(capy_u8PinId<=15)
	{
		switch(capy_u8Port)
		{
			case GPIO_PORTA :
			{
			   /*  the set pin mode   */
			   //clare the 2 bit has pin mode 
			   GPIOA_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
				//set pin for mode 
				GPIOA_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
			}
			break;
        	case GPIO_PORTB :
			{
			   /*  the set pin mode   */
			   //clare the 2 bit has pin mode 
			   GPIOB_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
				//set pin for mode 
				GPIOB_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
			}
			break;
			case GPIO_PORTC :
			{
			   /*  the set pin mode   */
			   //clare the 2 bit has pin mode 
			   GPIOC_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
				//set pin for mode 
				GPIOC_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
			}
			break;
			case GPIO_PORTD :
			{
			   /*  the set pin mode   */
			   //clare the 2 bit has pin mode 
			   GPIOD_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
				//set pin for mode 
				GPIOD_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
			}
			break;
			case GPIO_PORTF :
			{
			   /*  the set pin mode   */
			   //clare the 2 bit has pin mode 
			   GPIOF_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
				//set pin for mode 
				GPIOF_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
			}
			break;
			case GPIO_PORTE :
			{
			   /*  the set pin mode   */
			   //clare the 2 bit has pin mode 
			   GPIOE_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
				//set pin for mode 
				GPIOE_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
			}
			break;
			case GPIO_PORTG :
			{
			   /*  the set pin mode   */
			   //clare the 2 bit has pin mode 
			   GPIOG_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
				//set pin for mode 
				GPIOG_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
			}
			break;
			case GPIO_PORTH :
			{
			   /*  the set pin mode   */
			   //clare the 2 bit has pin mode 
			   GPIOH_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
				//set pin for mode 
				GPIOH_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
			}
			break;
			case GPIO_PORTI :
			{
			   /*  the set pin mode   */
			   //clare the 2 bit has pin mode 
			   GPIOI_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
				//set pin for mode 
				GPIOI_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
			}
			break;
			case GPIO_PORTJ :
			{
			   /*  the set pin mode   */
			   //clare the 2 bit has pin mode 
			   GPIOJ_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
				//set pin for mode 
				GPIOJ_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
			}
			break;
			case GPIO_PORTK :
			{
			   /*  the set pin mode   */
			   //clare the 2 bit has pin mode 
			   GPIOK_MODER&=~((0b11)<<(capy_u8PinId * 2 ));
				//set pin for mode 
				GPIOK_MODER|= ((Capy_u8modePin)<<(capy_u8PinId * 2 ));
			}
			break;
		    default :  break;
		}
	}
	else 
	{
		//returen error 
	}
}
/* the function to active PULL UP and PULL down OR not at  pin */
void MGPIO_voidActivePullUpPullDown( u8 capy_u8Port ,u8 capy_u8PinId,u8 Capy_u8pullup_down_floating)
{
	if( capy_u8PinId <=15)
		{switch (capy_u8Port)
		 {
			case GPIO_PORTA:
			{               //clare the 2 bit has pin mode
			                GPIOA_PUPDR&=~((0b11)<<(capy_u8PinId * 2 ));
			                //set pin for mode
			                GPIOA_PUPDR|= ((Capy_u8pullup_down_floating)<<(capy_u8PinId * 2 ));
			}break;
			case GPIO_PORTC:
			{               //clare the 2 bit has pin mode
			                GPIOC_PUPDR&=~((0b11)<<(capy_u8PinId * 2 ));
			                //set pin for mode
			                GPIOC_PUPDR|= ((Capy_u8pullup_down_floating)<<(capy_u8PinId * 2 ));
			} break;
			case GPIO_PORTB:
			{               //clare the 2 bit has pin mode
			                GPIOB_PUPDR&=~((0b11)<<(capy_u8PinId * 2 ));
			                //set pin for mode
			                GPIOB_PUPDR|= ((Capy_u8pullup_down_floating)<<(capy_u8PinId * 2 ));
			}break;
			case GPIO_PORTD:
			{               //clare the 2 bit has pin mode
			                GPIOD_PUPDR&=~((0b11)<<(capy_u8PinId * 2 ));
			                //set pin for mode
			                GPIOD_PUPDR|= ((Capy_u8pullup_down_floating)<<(capy_u8PinId * 2 ));
			}break;
			case GPIO_PORTF:
			{               //clare the 2 bit has pin mode
			                GPIOF_PUPDR&=~((0b11)<<(capy_u8PinId * 2 ));
			                //set pin for mode
			                GPIOF_PUPDR|= ((Capy_u8pullup_down_floating)<<(capy_u8PinId * 2 ));
			}break;
			case GPIO_PORTE:
			{               //clare the 2 bit has pin mode
			                GPIOE_PUPDR&=~((0b11)<<(capy_u8PinId * 2 ));
			                //set pin for mode
			                GPIOE_PUPDR|= ((Capy_u8pullup_down_floating)<<(capy_u8PinId * 2 ));
			}break;
			case GPIO_PORTG:
			{               //clare the 2 bit has pin mode
			                GPIOG_PUPDR&=~((0b11)<<(capy_u8PinId * 2 ));
			                //set pin for mode
			                GPIOG_PUPDR|= ((Capy_u8pullup_down_floating)<<(capy_u8PinId * 2 ));
			}break;
			case GPIO_PORTH:
			{               //clare the 2 bit has pin mode
			                GPIOH_PUPDR&=~((0b11)<<(capy_u8PinId * 2 ));
			                //set pin for mode
			                GPIOH_PUPDR|= ((Capy_u8pullup_down_floating)<<(capy_u8PinId * 2 ));
			}break;
			case GPIO_PORTJ:
			{               //clare the 2 bit has pin mode
			                GPIOJ_PUPDR&=~((0b11)<<(capy_u8PinId * 2 ));
			                //set pin for mode
			                GPIOJ_PUPDR|= ((Capy_u8pullup_down_floating)<<(capy_u8PinId * 2 ));
			}break;
			case GPIO_PORTI:
			{               //clare the 2 bit has pin mode
			                GPIOI_PUPDR&=~((0b11)<<(capy_u8PinId * 2 ));
			                //set pin for mode
			                GPIOI_PUPDR|= ((Capy_u8pullup_down_floating)<<(capy_u8PinId * 2 ));
			}break;
			case GPIO_PORTK:
			{               //clare the 2 bit has pin mode
			                GPIOK_PUPDR&=~((0b11)<<(capy_u8PinId * 2 ));
			                //set pin for mode
			                GPIOK_PUPDR|= ((Capy_u8pullup_down_floating)<<(capy_u8PinId * 2 ));
			}break;

			default: break;
		}
	}
    else
        {
    	  //return error
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
		case GPIO_PORTD:
		                if( Capy_u8ValuePin == HIGH)
						{
							SET_BIT(GPIOD_ODR,capy_u8PinId);
						}
						else if ( Capy_u8ValuePin ==LOW)
						{
						    CLR_BIT(GPIOD_ODR,capy_u8PinId);
						}
						break;
		case GPIO_PORTF:
		                if( Capy_u8ValuePin == HIGH)
						{
							SET_BIT(GPIOF_ODR,capy_u8PinId);
						}
						else if ( Capy_u8ValuePin ==LOW)
						{
						    CLR_BIT(GPIOF_ODR,capy_u8PinId);
						}
						break;
		case GPIO_PORTE:
		                if( Capy_u8ValuePin == HIGH)
						{
							SET_BIT(GPIOE_ODR,capy_u8PinId);
						}
						else if ( Capy_u8ValuePin ==LOW)
						{
						    CLR_BIT(GPIOE_ODR,capy_u8PinId);
						}
						break;
		case GPIO_PORTG:
		                if( Capy_u8ValuePin == HIGH)
						{
							SET_BIT(GPIOG_ODR,capy_u8PinId);
						}
						else if ( Capy_u8ValuePin ==LOW)
						{
						    CLR_BIT(GPIOG_ODR,capy_u8PinId);
						}
						break;
		case GPIO_PORTH:
		                if( Capy_u8ValuePin == HIGH)
						{
							SET_BIT(GPIOH_ODR,capy_u8PinId);
						}
						else if ( Capy_u8ValuePin ==LOW)
						{
						    CLR_BIT(GPIOH_ODR,capy_u8PinId);
						}
						break;
		case GPIO_PORTI:
		                if( Capy_u8ValuePin == HIGH)
						{
							SET_BIT(GPIOI_ODR,capy_u8PinId);
						}
						else if ( Capy_u8ValuePin ==LOW)
						{
						    CLR_BIT(GPIOI_ODR,capy_u8PinId);
						}
						break;
		case GPIO_PORTJ:
		                if( Capy_u8ValuePin == HIGH)
						{
							SET_BIT(GPIOJ_ODR,capy_u8PinId);
						}
						else if ( Capy_u8ValuePin ==LOW)
						{
						    CLR_BIT(GPIOJ_ODR,capy_u8PinId);
						}
						break;
		case GPIO_PORTK:
		                if( Capy_u8ValuePin == HIGH)
						{
							SET_BIT(GPIOK_ODR,capy_u8PinId);
						}
						else if ( Capy_u8ValuePin ==LOW)
						{
						    CLR_BIT(GPIOK_ODR,capy_u8PinId);
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
	    case GPIO_PORTD:
						local_return= GET_BIT(GPIOD_IDR,capy_u8PinId);
						break;
	    case GPIO_PORTF:
						local_return= GET_BIT(GPIOF_IDR,capy_u8PinId);
						break;
	    case GPIO_PORTE:
						local_return= GET_BIT(GPIOE_IDR,capy_u8PinId);
						break;
	    case GPIO_PORTG:
						local_return= GET_BIT(GPIOG_IDR,capy_u8PinId);
						break;
	    case GPIO_PORTH:
						local_return= GET_BIT(GPIOH_IDR,capy_u8PinId);
						break;
	    case GPIO_PORTJ:
						local_return= GET_BIT(GPIOJ_IDR,capy_u8PinId);
						break;
	    case GPIO_PORTI:
						local_return= GET_BIT(GPIOI_IDR,capy_u8PinId);
						break;
	    case GPIO_PORTK:
						local_return= GET_BIT(GPIOK_IDR,capy_u8PinId);
						break;

	    default: break;
	}
    return local_return;	
}


void MGPIO_voidSetAfPeripier( u8 capy_u8Port ,u8 capy_u8PinId,u8 Capy_u8modeAFPin)
{
	
		{switch (capy_u8Port)
		 {
			case GPIO_PORTA:
			{               if( capy_u8PinId <=7)
				             {
								 //clare the 4 bit has pin mode
			                     GPIOA_AFRL&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOA_AFRL|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }
							else if (capy_u8PinId <=15)
				             {
								 capy_u8PinId= (capy_u8PinId-8);
								 //clare the 4 bit has pin mode
			                     GPIOA_AFRH&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOA_AFRH|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }								
			}break;
			case GPIO_PORTC:
			{               if( capy_u8PinId <=7)
				             {
								 //clare the 4 bit has pin mode
			                     GPIOC_AFRL&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOC_AFRL|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }
							else if (capy_u8PinId <=15)
				             {
								 capy_u8PinId= (capy_u8PinId-8);
								 //clare the 4 bit has pin mode
			                     GPIOC_AFRH&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOC_AFRH|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }								
			}break;
			case GPIO_PORTB:
			{               if( capy_u8PinId <=7)
				             {
								 //clare the 4 bit has pin mode
			                     GPIOB_AFRL&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOB_AFRL|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }
							else if (capy_u8PinId <=15)
				             {
								 capy_u8PinId= (capy_u8PinId-8);
								 //clare the 4 bit has pin mode
			                     GPIOB_AFRH&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOB_AFRH|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }								
			}break;
			case GPIO_PORTD:
			{               if( capy_u8PinId <=7)
				             {
								 //clare the 4 bit has pin mode
			                     GPIOD_AFRL&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOD_AFRL|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }
							else if (capy_u8PinId <=15)
				             {
								 capy_u8PinId= (capy_u8PinId-8);
								 //clare the 4 bit has pin mode
			                     GPIOD_AFRH&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOD_AFRH|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }								
			}break;
			case GPIO_PORTF:
			{               if( capy_u8PinId <=7)
				             {
								 //clare the 4 bit has pin mode
			                     GPIOF_AFRL&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOF_AFRL|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }
							else if (capy_u8PinId <=15)
				             {
								 capy_u8PinId= (capy_u8PinId-8);
								 //clare the 4 bit has pin mode
			                     GPIOF_AFRH&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOF_AFRH|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }								
			}break;
			case GPIO_PORTE:
			{               if( capy_u8PinId <=7)
				             {
								 //clare the 4 bit has pin mode
			                     GPIOE_AFRL&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOE_AFRL|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }
							else if (capy_u8PinId <=15)
				             {
								 capy_u8PinId= (capy_u8PinId-8);
								 //clare the 4 bit has pin mode
			                     GPIOE_AFRH&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOE_AFRH|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }								
			}break;
			case GPIO_PORTG:
			{               if( capy_u8PinId <=7)
				             {
								 //clare the 4 bit has pin mode
			                     GPIOG_AFRL&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOG_AFRL|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }
							else if (capy_u8PinId <=15)
				             {
								 capy_u8PinId= (capy_u8PinId-8);
								 //clare the 4 bit has pin mode
			                     GPIOG_AFRH&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOG_AFRH|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }								
			}break;
			case GPIO_PORTH:
			{               if( capy_u8PinId <=7)
				             {
								 //clare the 4 bit has pin mode
			                     GPIOH_AFRL&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOH_AFRL|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }
							else if (capy_u8PinId <=15)
				             {
								 capy_u8PinId= (capy_u8PinId-8);
								 //clare the 4 bit has pin mode
			                     GPIOH_AFRH&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOH_AFRH|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }								
			}break;
			case GPIO_PORTJ:
			{               if( capy_u8PinId <=7)
				             {
								 //clare the 4 bit has pin mode
			                     GPIOJ_AFRL&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOJ_AFRL|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }
							else if (capy_u8PinId <=15)
				             {
								 capy_u8PinId= (capy_u8PinId-8);
								 //clare the 4 bit has pin mode
			                     GPIOJ_AFRH&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOJ_AFRH|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }								
			}break;
			case GPIO_PORTI:
			{               if( capy_u8PinId <=7)
				             {
								 //clare the 4 bit has pin mode
			                     GPIOI_AFRL&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOI_AFRL|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }
							else if (capy_u8PinId <=15)
				             {
								 capy_u8PinId= (capy_u8PinId-8);
								 //clare the 4 bit has pin mode
			                     GPIOI_AFRH&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOI_AFRH|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }								
			}break;
			case GPIO_PORTK:
			{               if( capy_u8PinId <=7)
				             {
								 //clare the 4 bit has pin mode
			                     GPIOK_AFRL&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOK_AFRL|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }
							else if (capy_u8PinId <=15)
				             {
								 capy_u8PinId= (capy_u8PinId-8);
								 //clare the 4 bit has pin mode
			                     GPIOK_AFRH&=~((0b1111)<<(capy_u8PinId * 4 ));
			                     //set pin for mode
							     GPIOK_AFRH|= ((Capy_u8modeAFPin)<<(capy_u8PinId * 4 ));
							 }								
			}break;

			default: break;
		}
	}

}
