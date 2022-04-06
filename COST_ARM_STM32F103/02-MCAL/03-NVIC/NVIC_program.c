/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  NVIC                                                    */
/*  version    :  V01                                                 */
/*  DATA       : 16/1/2022                                            */
/**************************************************************************/
// include from lib 
#include "STD_TYPES.h"
#include "BIT_MATH.h"
  
// include from drive  
#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"

//funcation to enable interrupt from NVIC
void MNVIC_voidEnableInterrupt    (u8 capy_u8IntNumber)
 {
	 if(capy_u8IntNumber<=31)
	 {
		 //SET_BIT(NVIC_ISER0,capy_u8IntNumber);
		 NVIC_ISER0 = (1<<capy_u8IntNumber);
	 }
	 else if(capy_u8IntNumber<=59)
	 {   capy_u8IntNumber-=32;
		 //SET_BIT(NVIC_ISER1,capy_u8IntNumber);
		 NVIC_ISER1 = (1<<capy_u8IntNumber);
	 }
	 else
	 {
		 //return error 
	 }	 
	  
 }
 //funcation to disable interrupt from NVIC
 
 void MNVIC_voidDisableInterrupt    (u8 capy_u8IntNumber)
 {
	 if(capy_u8IntNumber<=31)
	 {
		 //SET_BIT(NVIC_ISER0,capy_u8IntNumber);
		 NVIC_ICER0 = (1<<capy_u8IntNumber);
	 }
	 else if(capy_u8IntNumber<=59)
	 {   capy_u8IntNumber-=32;
		 //SET_BIT(NVIC_ISER1,capy_u8IntNumber);
		 NVIC_ICER1 = (1<<capy_u8IntNumber);
	 }
	 else
	 {
		 //return error 
	 }	 
	  
 }
 // funcation to set Panding falg if want to testing ISR with out periphier 
 void MNVIC_voidSetPendingFalg     (u8 capy_u8IntNumber)
 {
	 if(capy_u8IntNumber<=31)
	 {
		 //SET_BIT(NVIC_ISER0,capy_u8IntNumber);
		 NVIC_ISPR0 = (1<<capy_u8IntNumber);
	 }
	 else if(capy_u8IntNumber<=59)
	 {   capy_u8IntNumber-=32;
		 //SET_BIT(NVIC_ISER1,capy_u8IntNumber);
		 NVIC_ISPR1 = (1<<capy_u8IntNumber);
	 }
	 else
	 {
		 //return error 
	 }	 
	  
 }
 // Funcation clear panding flag 
 void MNVIC_voidClearPendingFalg   (u8 capy_u8IntNumber)
 {
	 if(capy_u8IntNumber<=31)
	 {
		 //SET_BIT(NVIC_ISER0,capy_u8IntNumber);
		 NVIC_ICPR0 = 1<<capy_u8IntNumber;
	 }
	 else if(capy_u8IntNumber<=59)
	 {   capy_u8IntNumber-=32;
		 //SET_BIT(NVIC_ISER1,capy_u8IntNumber);
		 NVIC_ICPR1 = 1<<capy_u8IntNumber;
	 }
	 else
	 {
		 //return error 
	 }	 
	  
 }
 //funcation read active flag
 u8   MNVIC_u8GetActiveFalg        (u8 capy_u8IntNumber)
 {
	 u8 local_flag_status;
	 if(capy_u8IntNumber<=31)
	 {
		local_flag_status =GET_BIT(NVIC_IABR0,capy_u8IntNumber);
	 }
	 else if(capy_u8IntNumber<=59)
	 {   capy_u8IntNumber-=32;
		local_flag_status =GET_BIT(NVIC_IABR1,capy_u8IntNumber);
	 }
	 else
	 {
		 //return error 
	 }	 
	 return local_flag_status;
 }
 
 void MNVIC_voidSetPrioirty(u8 capy_u8IntID ,u8 capy_u8GroupPirorty,u8 capy_u8SubPirorty )
  {
 // value of capy_u8SubPirorty | shift value capy_u8GroupPirorty  << number of sub priolaty and group bit
   u8 local_priorty=(capy_u8SubPirorty|(capy_u8GroupPirorty<<(((NUMBER_OF_GROUP_SUB)-(GROUP_4_SUB_0))/256)));

 	//cheek the core periprier
 	if(capy_u8IntID <0)
 	{
 		//code
 	}



 	//cheek the external periphier
 	else if(capy_u8IntID<60)
 	{
 		NVIC_IPR[capy_u8IntID]= local_priorty << 4;
 	}

 	SCB_AIRCR=NUMBER_OF_GROUP_SUB;
  }



// void MNVIC_voidInit(void)
// {
//     #define SCB_AIRCR  *((u32*)0xE000ED0C)
// 	SCB_AIRCR = NUMBER_OF_GROUP_SUB;
// }
//
//
// void MNVIC_voidSetPriority(u8 Copy_PeripheralIdx, u8 Copy_u8Priority)
// {
// 	if (Copy_PeripheralIdx < 60)
// 	{
// 		NVIC_IPR[Copy_PeripheralIdx] = Copy_u8Priority;
// 	}
//
// 	else
// 	{
// 		/* Report Error */
// 	}
// }
//
