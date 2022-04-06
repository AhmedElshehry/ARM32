/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  RCC                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 28/1/2022                                            */
/*********************************************************************/
#ifndef   RCC_PRIVATE_H
#define   RCC_PRIVETE_H

/* defination register */
typedef struct 
{
volatile u32   CR   ;
volatile u32   PLLCFGR  ;
volatile u32   CFGR  ;
volatile u32   CIR   ;
volatile u32   AHB1RSTR   ;
volatile u32   AHB2RSTR   ;
volatile u32   AHB3RSTR   ;

volatile u32   RES0  ;

volatile u32   APB1RSTR   ;
volatile u32   APB2RSTR   ;
volatile u32   RES1  ;
volatile u32   RES2  ;
volatile u32   AHB1ENR  ;
volatile u32   AHB2ENR  ;
volatile u32   AHB3ENR  ;

volatile u32   RES3  ;

volatile u32   APB1ENR  ;
volatile u32   APB2ENR  ;

volatile u32   RES4  ;
volatile u32   RES5  ;

	
}RCC_TYPES;
#define         RCC         (( RCC_TYPES *)0x40023800)

//typedef struct
//{
//	u8 HSI_FLAG ; GET_BIT(RCC -> CR,1);
//	u8 HSE_FLAG ; GET_BIT(RCC -> CR,17);
//	u8 PLL_FLAG ; GET_BIT(RCC -> CR,25);
//	u8 SWS ;     GET_BIT(RCC -> CFGR,3); |GET_BIT(RCC -> CFGR,2);
//
//}stutes_types;

//#define         stutes        (( stutes_types *))

/* clock types */
#define     RCC_HSE_CRYSTAL       0
#define     RCC_HSE_RC            1
#define     RCC_HSI               2
#define    RCC_PLL               3










#endif 
