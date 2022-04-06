/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  GPIO                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 10/1/2022                                            */
/**************************************************************************/

#ifndef GPIO_PRIVATE_H 
#define GPIO_PRIVATE_H
/* THE MACRO to define the gpio port  offset */
#define  GPIO_PORTA_BASE_ADDRESS             0x40010800
#define  GPIO_PORTB_BASE_ADDRESS             0x40010C00
#define  GPIO_PORTC_BASE_ADDRESS             0x40011000

/* Define the register of GPIO port A */
#define GPIOA_CRL            *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x00))
#define GPIOA_CRH            *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x04))
#define GPIOA_IDR            *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x08))
#define GPIOA_ODR            *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x0C))
#define GPIOA_BSRR           *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x10))
#define GPIOA_BRR            *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x14))
#define GPIOA_LCKR           *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x18))
 

/* Define the register of GPIO port B */
#define GPIOB_CRL            *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x00))
#define GPIOB_CRH            *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x04))
#define GPIOB_IDR            *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x08))
#define GPIOB_ODR            *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x0C))
#define GPIOB_BSRR           *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x10))
#define GPIOB_BRR            *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x14))
#define GPIOB_LCKR           *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x18))

/* Define the register of GPIO port C */
#define GPIOC_CRL            *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x00))
#define GPIOC_CRH            *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x04))
#define GPIOC_IDR            *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x08))
#define GPIOC_ODR            *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x0C))
#define GPIOC_BSRR           *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x10))
#define GPIOC_BRR            *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x14))
#define GPIOC_LCKR           *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x18))


#endif
