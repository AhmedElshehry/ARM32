/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  RCC                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 8/1/2022                                            */
/*********************************************************************/
#ifndef   RCC_CONFIG_H
#define   RCC_CONFIG_H

/*  Options:    RCC_HSE_CRYSTAL
                RCC_HSE_RC     
                RCC_HSI        
                RCC_PLL  */ 
				
#define RCC_CLOCK_TYPE   RCC_HSE_CRYSTAL
   	 
 
 
 /* optaion:  RCC_PLL_IN_HSE_DEV/2 
              RCC_PLL_IN_HSE 
			  RCC_PLL_IN_HSI_DEV/2      */
			  
/* select value only if you choose PLL as input */			  
#if  RCC_CLOCK_TYPE==RCC_PLL

#define  RCC_PLL_INPUT    RCC_PLL_IN_HSI_DEV/2

// select the muiltaple vector option 1  ---------------->16
#define RCC_PLL_muLitaplaction_vector         2 


#endif





#endif















