/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  RCC                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 8/1/2022                                            */
/*********************************************************************/
#ifndef   RCC_INTERFACE_H
#define   RCC_INTERFACE_H
// macro the type bus can enable 
#define    AHB        0
#define    APB1       1
#define    APB2       2


// fun to initalition the clook and select the clock system
void RCC_voidInitSysClock(void) ;

// enable the clock at peripheral  
void RCC_voidEnableClock(u8 capy_BusId,u8 capy_u8PerId)  ;


// disable the clock at peripheral  
void RCC_voidDisableClock(u8 capy_BusId,u8 capy_u8PerId)   ;








#endif 