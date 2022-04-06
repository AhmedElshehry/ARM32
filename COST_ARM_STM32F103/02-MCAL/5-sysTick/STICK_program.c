/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  SYS                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 8/1/2022                                            */
/*********************************************************************/
/*   include lib */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

 /* include drive */
 
#include  "STICK_interface.h"
#include  "STICK_private.h"
#include  "STICK_config.h"


//the define the Galobal in the file STICk_mode_interval 
static u8  STICk_u8ModeInterval ; 

//the define call back  globel variable    (pointer to function)  
void (*STICK_CallBack)(void);

// the function  init the clock of systick from choise the file configration 
// Disable the sys tick system 
// Disable  interrupt the sys tick
void MSTICK_voidInit(void )
{
	
	#if CLOCK_SYS_TICK== STICK_AHB
	    
	   //set bit 2 to enable seclect the clock AHB 
	   //clear bit 0 to disable the sys tick  
	   //clear bit 1 to disable interrupt sys tick
        STICK -> STK_CTRL =0x00000004;	
       //difrent mathoud way
       //SET_BIT(STICK -> STK_CTRL, 2 );   
       //CLR_BIT(STICK -> STK_CTRL, 0 );   
       //CLR_BIT(STICK -> STK_CTRL, 1 );   
	
	
	#elif CLOCK_SYS_TICK == STICK_AHB_DIV_8
	   //clear bit 2 to enable seclect the clock AHB/8 
	   //clear bit 0 to disable the sys tick  
	   //clear bit 1 to disable interrupt sys tick
        STICK -> STK_CTRL =0x00000000;	
        //difrent mathoud way
        //CLR_BIT(STICK -> STK_CTRL, 2 );   
        //CLR_BIT(STICK -> STK_CTRL, 0 );   
        //CLR_BIT(STICK -> STK_CTRL, 1 ); 
	#else 
		#error "the error choise to file config "
	
	
	#endif 
}                       


// the  synchonious function counter timer  the value that as  delay  
void MSTICK_voidSetBusyWait( u32 capy_u32Ticks )
{
	//move value tick  to register load 
	STICK -> STK_LOAD = capy_u32Ticks;
	
	//enable the counter to count 
	SET_BIT(STICK -> STK_CTRL, 0 ); 
	
	//Wait the flag can be 1 the counter finshed  
	while( ( GET_BIT(STICK -> STK_CTRL, 16 ) )==0);
	//disable the counter to count 
	CLR_BIT(STICK -> STK_CTRL, 0 );
	// clear the register load and value 
	STICK -> STK_LOAD=0;
	STICK -> STK_VAL =0;
	
}

// the  Asynchonious function counter timer  the value that as  delay by one shoot not repated
void MSTICK_voidSetIntervalSingle(u32 capy_u32Ticks, void (*capy_ptr)(void))
{
    //set STICk Mode Interval 
	STICk_u8ModeInterval= STICk_ModeIntervalSingal;
	//move value tick  to register load 
	STICK -> STK_LOAD = capy_u32Ticks;
	
	//enable the counter to start count 
	SET_BIT(STICK -> STK_CTRL, 0 );
	
	//pass address the funcatio to call back and save 
	STICK_CallBack = capy_ptr;
    //enable the interrupt 
	SET_BIT(STICK -> STK_CTRL, 1 );
	
}


// the  Asynchonious function counter timer the value that as delay by repated
void MSTICK_voidSetIntervalPeriodic(u32 capy_u32Ticks, void (*capy_ptr)(void))
{
	//set STICk ModeInterval 
	STICk_u8ModeInterval= STICk_ModeIntervalPeriodic;
	//move value tick  to register load 
	STICK -> STK_LOAD = capy_u32Ticks;
	
	//enable the counter to start count 
	SET_BIT(STICK -> STK_CTRL, 0 );
	
	//pass address the funcatio to call back and save 
	STICK_CallBack = capy_ptr;
	
	//enable the interrupt 
	SET_BIT(STICK -> STK_CTRL, 1 );
}


//the function to stop time 
void MSTICK_voidStopTimer(void)
{       
        //disable the interrupt 
		CLR_BIT(STICK -> STK_CTRL, 1 ); 
		//disable counter 
		CLR_BIT(STICK -> STK_CTRL, 0 );
		
	    // clear the register load and value 
	    STICK -> STK_LOAD=0;
	    STICK -> STK_VAL =0;
}


// the funcation to get value of ticks elapsed form start 
u32  MSTICK_u32GetElapsedTime(void );
{
	u32 local_u32returnvalue =((STICK -> STK_LOAD)-(STICK -> STK_VAL ));
	// return the value ElapsedTime
	return local_u32returnvalue;
}
// the funcation to get value of ticks to action interrupt  flag 
u32  MSTICK_u32GetRemainingTime(void )
{
	u32 local_u32returnvalue =((STICK -> STK_VAL ));
	return local_u32returnvalue;
}

// ISR sys tick 
void SysTick_Handler(void)
{
	u8 local_u8flagvalue;
	if(STICk_u8ModeInterval == STICk_ModeIntervalSingal)
	{
		//disable the interrupt 
		CLR_BIT(STICK -> STK_CTRL, 1 );   
        
		//disable the counter to count 
		// stop timer val & load 0 
	    CLR_BIT(STICK -> STK_CTRL, 0 );
	    // clear the register load and value 
	    STICK -> STK_LOAD=0;
	    STICK -> STK_VAL =0;
	}
	
	// call the nafication function 
	STICK_CallBack();
	// the clear flag form read 
	local_u8flagvalue=(GET_BIT(STICK -> STK_CTRL, 16 ));
}