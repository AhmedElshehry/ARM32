/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  NVIC                                                    */
/*  version    :  V01                                                 */
/*  DATA       : 16/1/2022                                            */
/**************************************************************************/

#ifndef NVIC_PRIVATE_H 
#define NVIC_PRIVATE_H

// offset adderes 0xE000E100
//the register to enable interrupt
#define   NVIC_ISER0           *((u32 * )0xE000E200)//enable interrupt periphier from 0--->31 
#define   NVIC_ISER1           *((u32 * )0xE000E204)//enable interrupt periphier from 32--->63
#define   NVIC_ISER2           *((u32 * )0xE000E208)//enable interrupt periphier from 63--->95

//register to disable or clear  interrupt periphier 
#define   NVIC_ICER0           *((u32 * )0xE000E280)//DISable interrupt periphier from0--->31 
#define   NVIC_ICER1           *((u32 * )0xE000E284)//DISable interrupt periphier from32--->59
#define   NVIC_ICER2           *((u32 * )0xE000E288)//DISable interrupt periphier from32--->59

//the register to set pending flag 
#define   NVIC_ISPR0           *((u32 * )0xE000E300)// Register to set pending flag from 0--> 31
#define   NVIC_ISPR1           *((u32 * )0xE000E304)// 32 --->64 
#define   NVIC_ISPR2           *((u32 * )0xE000E308)// 32 --->64 

//the register to clear  pending flag 
#define   NVIC_ICPR0           *((u32 * )0xE000E380)
#define   NVIC_ICPR1           *((u32 * )0xE000E384)
#define   NVIC_ICPR2           *((u32 * )0xE000E388)

//the register to read active flag 
#define   NVIC_IABR0           *(( volatile u32 * )0xE000E400)
#define   NVIC_IABR1           *((volatile  u32 * )0xE000E404)
#define   NVIC_IABR2           *((volatile  u32 * )0xE000E408)

//pointer u8 to  register to set piroirty of interrupt at the NVIC 
#define        NVIC_IPR           (( volatile u8 * )0xE000E500)

//register to selection  piroirty of interrupt at the NVIC for the GROUP priority and sub priority  
// the base address 0xE000ED00 // offset address 0x0c
#define       SCB_AIRCR             *(( volatile u32 * )0xE000ED0C)

// MACRO the number of group paiolity and number sub priority (number of peripheral at group)
#define       GROUP_4_SUB_0          0X05FA0300
#define       GROUP_3_SUB_1          0X05FA0400
#define       GROUP_2_SUB_2          0X05FA0500
#define       GROUP_1_SUB_3          0X05FA0600
#define       GROUP_0_SUB_4          0X05FA0700



#endif 
