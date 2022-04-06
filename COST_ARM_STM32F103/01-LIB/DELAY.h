/*******************************************************/
/*	Author	:	Ahmed								   */
/*	Date	:	25 / 1/	2021						   */
/*	Version	:	V01								 	   */
/*******************************************************/
#ifndef DELAY_H
#define DELAY_H
 
void delay (int value_delay)
 { for(int i = 0 ; i < value_delay ; i++ )
   {
   for(int j = 0 ; j < value_delay; j++ )
      {
	asm("NOP");
      }
   }
}
#endif