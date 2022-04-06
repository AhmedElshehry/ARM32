/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  SYS TICK                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 25/1/2022                                            */
/*********************************************************************/
#ifndef   TIMER_PRIVATE_H
#define   TIMER_PRIVETE_H

// the  base address  0x40010000
typedef struct 
{    
	  volatile   u32        CR1   ;
	  volatile	 u32        CR2   ;
	  volatile	 u32        SMCR  ;
	  volatile	 u32        DIER  ;
	  volatile	 u32        SR    ;
	  volatile	 u32        EGR   ;
	  volatile	 u32        CCMR1 ;
	  volatile	 u32        CCMR2 ;
	  volatile	 u32        CCER  ;
	  volatile	 u32        CNT   ;
	  volatile	 u32        PSC   ;
	  volatile	 u32        ARR   ;
	  volatile	 u32        RCR   ;
	  volatile	 u32        CCR1  ;
	  volatile	 u32        CCR2  ;
	  volatile	 u32        CCR3  ;
	  volatile	 u32        CCR4  ;
	  volatile	 u32        BDTR  ;
	  volatile	 u32        DCR   ;
	  volatile	 u32        DMAR  ;
}TIMER_I ;
//pointer to object sturct STICK_I of time 1
#define     TIMER_1     ((TIMER_I *)0x40010000)



//pointer to object sturct STICK_I of time 8
#define     TIMER_8     ((TIMER_I *)0x40010400)
//pointer to object sturct STICK_I of time 9
#define     TIMER_9     ((TIMER_I *)0x40014000 )

#define     TIMER_4    ((TIMER_I *)0x40000800)
#define         CLOCK_EXTERNAL            15999
#define         CLOCK_INTERNAL            7999


#endif
