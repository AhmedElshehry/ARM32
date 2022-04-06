/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  RCC                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 28/1/2022                                            */
/*********************************************************************/
#ifndef   RCC_INTERFACE_H
#define   RCC_INTERFACE_H
// macro the type bus can enable 
#define    AHB1        0
#define    AHB2        1
#define    AHB3        2
#define    APB1        3
#define    APB2        4


// fun to initalition the clook and select the clock system
void RCC_voidInitSysClock(void) ;

// enable the clock at peripheral  
void RCC_voidEnableClock(u8 capy_BusId,u8 capy_u8PerId)  ;


// disable the clock at peripheral  
void RCC_voidDisableClock(u8 capy_BusId,u8 capy_u8PerId)   ;


// the function to read stutes the initalation clock sys 
void RCC_voidStutesInitSysClock(void);


// the function reset register at peripheral depended Bus 
void RCC_voidResetClockPer(u8 capy_BusId,u8 capy_u8PerId)  ;



#endif 
