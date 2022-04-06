/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  SYS TICK                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 25/1/2022                                            */
/*********************************************************************/
#ifndef   STICK_PRIVATE_H
#define   STICK_PRIVETE_H

// the  base address  0xE000ED00
typedef struct 
{    
	  volatile   u32 STK_CTRL  ;
	  volatile	 u32 STK_LOAD  ;
	  volatile	 u32 STK_VAL   ;
	  volatile	 u32 STK_CALIB ;
}STICK_I ;
//pointer to sturct STICK_I
#define     STICK    ((STICK_I *)0xE000E010)



//the macro choise opation of clock sys tick 
#define   STICK_AHB             0
#define   STICK_AHB_DIV_8       1

// the micro of mode Interval  1- Singal 2-Periodic

#define     STICk_ModeIntervalSingal         0
#define     STICk_ModeIntervalPeriodic       1

#endif 