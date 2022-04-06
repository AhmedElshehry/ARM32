/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  SYS TICK                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 25/1/2022                                            */
/*********************************************************************/
#ifndef   STICK_INTERFACE_H
#define   STICK_INTERFACE_H


 
// the function  init the clock of systick from choise the file configration 
// Disable the sys tick system 
// Disable  interrupt the sys tick
void MSTICK_voidInit(void );

// the  synchonious function counter timer  the value that as  delay  
void MSTICK_voidSetBusyWait( u32 capy_u32Ticks );

// the  Asynchonious function counter timer  the value that as  delay by one shoot not repated
void MSTICK_voidSetIntervalSingle(u32 capy_u32Ticks, void (*capy_ptr)(void));

// the  Asynchonious function counter timer the value that as delay by repated
void MSTICK_voidSetIntervalPeriodic(u32 capy_u32Ticks, void (*capy_ptr)(void));
//the function to stop time 
void MSTICK_voidStopTimer(void);
// the funcation to get value of ticks elapsed form start 
u32  MSTICK_u32GetElapsedTime(void );
// the funcation to get value of ticks to action interrupt  flag 
u32  MSTICK_u32GetRemainingTime(void );

#endif 