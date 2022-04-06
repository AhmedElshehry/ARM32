/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  timer                                                   */
/*  version    :  V01                                                 */
/*  DATA       : 8/1/2022                                            */
/*********************************************************************/
/*   include lib */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

 /* include drive */
 
#include  "TIMER_interface.h"
#include  "TIMER_private.h"
#include  "TIMER_config.h"

void MTimer_voidinitPMWT1(void)
{
	   //initial all the register for timer
	  // SET_BIT(TIMER_1 -> EGR,0);
	   //enable  auto raload preload     ARPE---> 1
	   SET_BIT(TIMER_1 -> CR1,7 );
	   //enable SET drication up counter DIR
	   CLR_BIT(TIMER_1 -> CR1,4);
	   CLR_BIT(TIMER_1 -> CR1,5);
	   CLR_BIT(TIMER_1 -> CR1,6);

	   /* Set timer Prescaler, bus clock = 90 MHz, fCK_PSC / (PSC[15:0] + 1)
	   * CK_CNT = 180000000 / (1799 + 1) -> 10000 Hz -> time base = 1 ms */
	   TIMER_1 -> PSC =PRESCALER_TIMER;

	   // set capture compare 1 as output
	      CLR_BIT(TIMER_1 -> CCMR1,0);
	      CLR_BIT(TIMER_1 -> CCMR1,1);
	      // Output Compare 1 preload enable
	      SET_BIT(TIMER_1 -> CCMR1,3);

	      //selection output compare 1 1 pmw mode 1
	      SET_BIT(TIMER_1 -> CCMR1,6);
	      SET_BIT(TIMER_1 -> CCMR1,5);
	      CLR_BIT(TIMER_1 -> CCMR1,4);

	      //select capture compare 1 output poiarity active high
	        CLR_BIT(TIMER_1 -> CCER,3);

	        //enable capture compare 1 output
	        SET_BIT(TIMER_1 -> CCER,0);
}


void MTimer_voidPMWGENERATIONT1(u32 Capy_u32TimePeriod,u32 Capy_u32TimeOn  )
{


  u32 Capy_u32TickvalueTotal=( Capy_u32TimePeriod *1000 );
  u32 Capy_u32TickvalueOn=( Capy_u32TimeOn *1000 );
   // the iniatal the value of counter auto reload 
   TIMER_1 -> ARR = Capy_u32TickvalueTotal;
   //set init the Duty cycle 
   TIMER_1 -> CCR1 =Capy_u32TickvalueOn;

   //enable timer main output gpio 
   SET_BIT(TIMER_1 -> BDTR,15);
   //enable timer counter 
   SET_BIT(TIMER_1 -> CR1,0);
}

void MTimer_voidinitPMWT8(void)
{
	   //initial all the register for timer
	   SET_BIT(TIMER_8 -> EGR,0);
	   //enable  auto raload preload     ARPE---> 1
	   SET_BIT(TIMER_8 -> CR1,7 );
	   //enable SET drication up counter DIR
	   CLR_BIT(TIMER_8 -> CR1,4);
	   CLR_BIT(TIMER_8 -> CR1,5);
	   CLR_BIT(TIMER_8 -> CR1,6);

	   /* Set timer Prescaler, bus clock = 90 MHz, fCK_PSC / (PSC[15:0] + 1)
	   * CK_CNT = 180000000 / (1799 + 1) -> 10000 Hz -> time base = 1 ms */
	   TIMER_8 -> PSC =PRESCALER_TIMER;

	   // set capture compare 1 as output
	      CLR_BIT(TIMER_8 -> CCMR1,0);
	      CLR_BIT(TIMER_8 -> CCMR1,1);
	      // Output Compare 1 preload enable
	      SET_BIT(TIMER_8 -> CCMR1,3);

	      //selection output compare 1 1 pmw mode 1
	      SET_BIT(TIMER_8 -> CCMR1,6);
	      SET_BIT(TIMER_8 -> CCMR1,5);
	      CLR_BIT(TIMER_8 -> CCMR1,4);

	      //select capture compare 1 output poiarity active high
	        CLR_BIT(TIMER_8 -> CCER,3);


	        //enable capture compare 1 output
	        SET_BIT(TIMER_8 -> CCER,0);
}


void MTimer_voidPMWGENERATIONT8(u32 Capy_u32TimePeriod,u32 Capy_u32TimeOn  )
{


  u32 Capy_u32TickvalueTotal=( Capy_u32TimePeriod *1000 );
  u32 Capy_u32TickvalueOn=( Capy_u32TimeOn *1000 );
   // the iniatal the value of counter auto reload
   TIMER_8 -> ARR = Capy_u32TickvalueTotal;
   //set init the Duty cycle
   TIMER_8 -> CCR1 =Capy_u32TickvalueOn;

   //enable timer main output gpio
   SET_BIT(TIMER_8 -> BDTR,15);
   //enable timer counter
   SET_BIT(TIMER_8 -> CR1,0);
}

void MTimer_voidinitPMWT9(void)
{
	 //initial all the register for timer
		  SET_BIT(TIMER_9 -> EGR,0);
		   //enable  auto raload preload     ARPE---> 1
		   SET_BIT(TIMER_9 -> CR1,7 );
		   //enable SET drication up counter DIR
		   CLR_BIT(TIMER_9 -> CR1,4);
		   CLR_BIT(TIMER_9 -> CR1,5);
		   CLR_BIT(TIMER_9 -> CR1,6);

		   /* Set timer Prescaler, bus clock = 90 MHz, fCK_PSC / (PSC[15:0] + 1)
		   * CK_CNT = 180000000 / (1799 + 1) -> 10000 Hz -> time base = 1 ms */
		   TIMER_9 -> PSC =PRESCALER_TIMER;

		   // set capture compare 1 as output
		      CLR_BIT(TIMER_9 -> CCMR1,0);
		      CLR_BIT(TIMER_9 -> CCMR1,1);
		      // Output Compare 1 preload enable
		      SET_BIT(TIMER_9 -> CCMR1,3);

		      //selection output compare 1 1 pmw mode 1
		      SET_BIT(TIMER_9 -> CCMR1,6);
		      SET_BIT(TIMER_9 -> CCMR1,5);
		      CLR_BIT(TIMER_9 -> CCMR1,4);

		      //select capture compare 1 output poiarity active high
		        CLR_BIT(TIMER_9 -> CCER,3);

		        //enable capture compare 1 output
		        SET_BIT(TIMER_9 -> CCER,0);
}


void MTimer_voidPMWGENERATIONT9(u32 Capy_u32TimePeriod,u32 Capy_u32TimeOn  )
{


	 u32 Capy_u32TickvalueTotal=( Capy_u32TimePeriod *1000 );
	  u32 Capy_u32TickvalueOn=( Capy_u32TimeOn *1000 );
	   // the iniatal the value of counter auto reload
	   TIMER_9 -> ARR = Capy_u32TickvalueTotal;
	   //set init the Duty cycle
	   TIMER_9 -> CCR1 =Capy_u32TickvalueOn;

	   //enable timer main output gpio
	   SET_BIT(TIMER_9 -> BDTR,15);
	   //enable timer counter
	   SET_BIT(TIMER_9 -> CR1,0);
}


void MTimer_voidinitPMWT4(void)
{
	   //initial all the register for timer
	   SET_BIT(TIMER_4 -> EGR,0);
	   //enable  auto raload preload     ARPE---> 1
	   SET_BIT(TIMER_4 -> CR1,7 );
	   //enable SET drication up counter DIR
	   CLR_BIT(TIMER_4 -> CR1,4);
	   CLR_BIT(TIMER_4 -> CR1,5);
	   CLR_BIT(TIMER_4 -> CR1,6);

	   /* Set timer Prescaler, bus clock = 90 MHz, fCK_PSC / (PSC[15:0] + 1)
	   * CK_CNT = 180000000 / (1799 + 1) -> 10000 Hz -> time base = 1 ms */
	   TIMER_4 -> PSC =PRESCALER_TIMER;

	   // set capture compare 1 as output
	      CLR_BIT(TIMER_4 -> CCMR1,0);
	      CLR_BIT(TIMER_4 -> CCMR1,1);
	      // Output Compare 1 preload enable
	      SET_BIT(TIMER_4 -> CCMR1,3);

	      //selection output compare 1 1 pmw mode 1
	      SET_BIT(TIMER_4 -> CCMR1,6);
	      SET_BIT(TIMER_4 -> CCMR1,5);
	      CLR_BIT(TIMER_4 -> CCMR1,4);

	      //select capture compare 1 output poiarity active high
	        CLR_BIT(TIMER_4 -> CCER,3);

	        //enable capture compare 1 output
	        SET_BIT(TIMER_4 -> CCER,0);
}


void MTimer_voidPMWGENERATIONT4(u32 Capy_u32TimePeriod,u32 Capy_u32TimeOn  )

{


  u32 Capy_u32TickvalueTotal=( Capy_u32TimePeriod *1000 );
  u32 Capy_u32TickvalueOn=( Capy_u32TimeOn *1000 );
   // the iniatal the value of counter auto reload
   TIMER_4 -> ARR = Capy_u32TickvalueTotal;
   //set init the Duty cycle
   TIMER_4 -> CCR1 =Capy_u32TickvalueOn;

   //enable timer main output gpio
   SET_BIT(TIMER_4 -> BDTR,15);
   //enable timer counter
   SET_BIT(TIMER_4 -> CR1,0);
}




void MTimer_voidinitMeagerPMWT1(void)
{

	   //enable SET drication up counter DIR
	   CLR_BIT(TIMER_1 -> CR1,4);
	   CLR_BIT(TIMER_1 -> CR1,5);
	   CLR_BIT(TIMER_1 -> CR1,6);

	   /* Set timer Prescaler, bus clock = 8 MHz, fCK_PSC / (PSC[15:0] + 1)
	    * CK_CNT = 8000000 / (7 + 1) -> 1 MHz -> time base = 1 us */
	    TIMER_1 -> PSC =7;

        // the iniatal the value of counter auto reload
        TIMER_1 -> ARR = 0xffff;

	   // set capture compare channel  1 as input IC1 is mapped on TI1
          SET_BIT(TIMER_1 -> CCMR1,0);
	      CLR_BIT(TIMER_1 -> CCMR1,1);

	      //selection the input polarity T1FP1 active on rising edge
	      CLR_BIT(TIMER_1 -> CCER,1);
	      CLR_BIT(TIMER_1 -> CCER,3);

	      /* Timer 1 input channel 1 IC2 configuration */
	       /* CC2 channel is configured as input, IC2 is mapped on TI1 */

	      CLR_BIT(TIMER_1 -> CCMR1,8);
	      SET_BIT(TIMER_1 -> CCMR1,9);

	      //selection the input polarity T1FP1 active on failing edge
	      SET_BIT(TIMER_1 -> CCER,5);
	      CLR_BIT(TIMER_1 -> CCER,7);

	      /* Timer 1 trigger configuration */
	      /* Select Filtered Timer Input 1 (TI1FP1) trigger */
	      SET_BIT(TIMER_1 -> SMCR,4);
	      CLR_BIT(TIMER_1 -> SMCR,5);
	      SET_BIT(TIMER_1 -> SMCR,6);


          //selection rest mode
	      CLR_BIT(TIMER_1 -> SMCR,0);
	      CLR_BIT(TIMER_1 -> SMCR,1);
	      SET_BIT(TIMER_1 -> SMCR,2);



	      //enable CC1 and CC2
	      SET_BIT(TIMER_1 -> CCER,0);
	      SET_BIT(TIMER_1 -> CCER,4);


          //enable timer counter
          SET_BIT(TIMER_1 -> CR1,0);
}

void updata_value (void )
{
	if (GET_BIT(TIMER_1 -> SR ,1)==1)
	{
		u16 T= TIMER_1 -> CCR1;
	}

	if (GET_BIT(TIMER_1 -> SR ,2)==1)
		{
			u16 t= TIMER_1 -> CCR2 ;
		}

	}
