/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  ADC                                                   */
/*  version    :  V01                                                 */
/*  DATA       : 15/2/2022                                            */
/**************************************************************************/
//include from lib
#include "STD_TYPES.h"
#include "BIT_MATH.h"

//include from drive GPIO 
#include "ADC_interface.h"
#include "ADC_private.h"
#include "ADC_config.h"



void ADC1_voidInitCountious (void)
{
	/* select pre scaler */
	CLR_BIT( ADC-> CCR,17);
	CLR_BIT( ADC-> CCR,16);
	
	/*selection resialution of ADC =12 bits*/
	CLR_BIT(ADC1 -> CR1,25);
	CLR_BIT(ADC1 -> CR1,24);
	
	/* select data alignment righ alignment*/
	CLR_BIT(ADC1 -> CR2,11);
	
	/* select countinous conversion */
	SET_BIT(ADC1 -> CR2 , 1 );
	
	/* the event flag at each conversion */
	//SET_BIT(ADC1 -> CR2 , 10 );
	
	
	
	/* ADC sample time channel 3 cycles all channel  */
	ADC1 -> SMPR1=0;
	ADC1 -> SMPR2=0;
	
	/*enable ADC */
	SET_BIT(ADC1 -> CR2 , 0 );
	
	
	
}

void  ADC1_void (void )
{
	CLR_BIT(ADC1-> SQR1,20);
	CLR_BIT(ADC1-> SQR1,21);
	CLR_BIT(ADC1-> SQR1,22);
	CLR_BIT(ADC1-> SQR1,23);
	ADC1-> SQR3 =5; 
}

u16  ADC1_u16Read (void )
{
	u16 data=0;
	/*start conversion enable */
	SET_BIT(ADC1 -> CR2 ,30);

	while(GET_BIT(ADC1->SR , 1)==0);
		data= ADC1->DR ;
	return data;
}
