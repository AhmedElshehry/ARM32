/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  RCC                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 8/1/2022                                            */
/*********************************************************************/
/*   include lib */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

 /* include drive */
 
#include  "RCC_interface.h"
#include  "RCC_private.h"
#include  "RCC_config.h"
// fun to initalition the clook and select the clock system
void RCC_voidInitSysClock(void) 
{ 
	#if       RCC_CLOCK_TYPE== RCC_HSE_CRYSTAL

	          RCC_CR  =0X00010000;//enable HSE by external clock with out baybass
	          RCC_CFGR=0x00000001;//select the HSE Clock system
	 
	
	#elif     RCC_CLOCK_TYPE== RCC_HSE_RC

	          RCC_CR  =0X00050000;//enable HSE by external clock with  baybass
	          RCC_CFGR=0x00000001;//SELECT HSE the clock system

	#elif     RCC_CLOCK_TYPE== RCC_HSI

	          RCC_CR  =0X00000081;//Enable the RCC_HSI TO SET BIN 0 AT register rcc_cr
	          RCC_CFGR=0x00000000;


	#elif    RCC_CLOCK_TYPE== RCC_PLL
	         RCC_CR=0X01000000;//enable rcc_pll
	
	
	
	#else 
	         //#error("you chosh worng type clock ")
	
	#endif
	
	
}






// enable the clock at peripheral  
void RCC_voidEnableClock(u8 capy_BusId,u8 capy_u8PerId)   
{
	if(capy_u8PerId<=31)
	{
		switch (capy_BusId)
		{
		case AHB  :SET_BIT(RCC_AHBENR,capy_u8PerId);   break;
		case APB1 :SET_BIT(RCC_APB1ENR,capy_u8PerId);  break;
		case APB2 :SET_BIT(RCC_APB2ENR,capy_u8PerId);  break;
		//Return error default 
		}
	}
	else
	{
		//return error state
	}
}

// disable the clock at peripheral  
void RCC_voidDisableClock(u8 capy_BusId,u8 capy_u8PerId)   
{
	if(capy_u8PerId<=31)
	{
		switch (capy_BusId)
		{
		case AHB : CLR_BIT(RCC_AHBENR,capy_u8PerId);   break;
		case APB1: CLR_BIT(RCC_APB1ENR,capy_u8PerId);  break;
		case APB2: CLR_BIT(RCC_APB2ENR,capy_u8PerId);  break;
		//Return error default 
		}
	}
	else
	{
		//return error state
	}
}
