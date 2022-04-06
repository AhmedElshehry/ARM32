/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  RCC                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 28/1/2022                                            */
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

	          RCC -> CR   =0X00010000;//enable HSE by external clock with out baybass
	          RCC -> CFGR =0x00000001;//select the HSE Clock system
	 
	
	#elif     RCC_CLOCK_TYPE== RCC_HSE_RC

	          RCC -> CR  =0X00050000;//enable HSE by external clock with  baybass
	          RCC -> CFGR=0x00000001;//SELECT HSE RC  the clock system

	#elif     RCC_CLOCK_TYPE== RCC_HSI

	          RCC -> CR  =0X00000001;//Enable the RCC_HSI TO SET BIN 0 AT register rcc_cr
	          RCC -> CFGR=0x00000000;


	#elif    RCC_CLOCK_TYPE== RCC_PLL
	         RCC -> CR=0X01000000;//enable rcc_pll
	
	
	
	#else 
	         //#error("you chosh worng type clock ")
	
	#endif
	
	
}

// the function to read stutes the initalation clock sys 
void RCC_voidStutesInitSysClock(void) 
{
	u8 HSI_FLAG = GET_BIT(RCC -> CR,1);
	u8 HSE_FLAG = GET_BIT(RCC -> CR,17);
	u8 PLL_FLAG = GET_BIT(RCC -> CR,25);
	u8 SWS      =    GET_BIT(RCC -> CFGR,3) | GET_BIT(RCC -> CFGR,2);
}



// enable the clock at peripheral  
void RCC_voidEnableClock(u8 capy_BusId,u8 capy_u8PerId)   
{
	if(capy_u8PerId<=31)
	{
		switch (capy_BusId)
		{
		case AHB1  :SET_BIT(RCC-> AHB1ENR,capy_u8PerId);    break;
		case AHB2  :SET_BIT(RCC-> AHB2ENR,capy_u8PerId);    break;
		case AHB3  :SET_BIT(RCC-> AHB3ENR,capy_u8PerId);    break;
		case APB1  :SET_BIT (RCC-> APB1ENR,capy_u8PerId);   break;
		case APB2  :SET_BIT (RCC-> APB2ENR,capy_u8PerId);   break;
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
		case AHB1  :   CLR_BIT(RCC-> AHB1ENR,capy_u8PerId);    break;
		case AHB2  :   CLR_BIT(RCC -> AHB2ENR,capy_u8PerId);    break;
		case AHB3  :   CLR_BIT(RCC -> AHB3ENR,capy_u8PerId);    break;
		case APB1  :   CLR_BIT (RCC -> APB1ENR,capy_u8PerId);   break;
		case APB2  :   CLR_BIT (RCC -> APB2ENR,capy_u8PerId);   break;
		//Return error default 
		}
	}
	else
	{
		//return error state
	}
}


// the function reset register at peripheral depended Bus 
void RCC_voidResetClockPer(u8 capy_BusId,u8 capy_u8PerId)
{
	if(capy_u8PerId<=31)
	{
		switch (capy_BusId)
		{ 
		case AHB1  :SET_BIT (RCC -> AHB1RSTR,capy_u8PerId);    break;
		case AHB2  :SET_BIT (RCC -> AHB2RSTR,capy_u8PerId);    break;
		case AHB3  :SET_BIT (RCC -> AHB3RSTR,capy_u8PerId);    break;
		case APB1  :SET_BIT (RCC -> APB1RSTR,capy_u8PerId);    break;
		case APB2  :SET_BIT (RCC -> APB2RSTR,capy_u8PerId);    break;
		//Return error default 
		}
	}
	else
	{
		//return error state
	}
}
