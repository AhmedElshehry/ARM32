/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  GPIO                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 10/1/2022                                            */
/**************************************************************************/

#ifndef GPIO_PRIVATE_H 
#define GPIO_PRIVATE_H





/* THE MACRO to define the gpio port  offset */
#define  GPIO_PORTA_BASE_ADDRESS             0x40020000
#define  GPIO_PORTB_BASE_ADDRESS             0x40020400
#define  GPIO_PORTC_BASE_ADDRESS             0x40020800
#define  GPIO_PORTD_BASE_ADDRESS             0x40020C00
#define  GPIO_PORTE_BASE_ADDRESS             0x40021000
#define  GPIO_PORTF_BASE_ADDRESS             0x40021400
#define  GPIO_PORTG_BASE_ADDRESS             0x40021800
#define  GPIO_PORTH_BASE_ADDRESS             0x40021C00
#define  GPIO_PORTI_BASE_ADDRESS             0x40022000
#define  GPIO_PORTJ_BASE_ADDRESS             0x40022400
#define  GPIO_PORTK_BASE_ADDRESS             0x40022800

/* Define the register of GPIO port A */
#define GPIOA_MODER             *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x00))
#define GPIOA_OTYPER            *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x04))
#define GPIOA_OSPEEDR           *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x08))
#define GPIOA_PUPDR             *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x0C))
#define GPIOA_IDR               *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x10))
#define GPIOA_ODR               *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x14))
#define GPIOA_BSRR              *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x18))
#define GPIOA_LCKR              *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x1C))
#define GPIOA_AFRL              *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x20))
#define GPIOA_AFRH              *((u32 * )(GPIO_PORTA_BASE_ADDRESS+0x24))
 

/* Define the register of GPIO port B */
#define GPIOB_MODER             *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x00))
#define GPIOB_OTYPER            *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x04))
#define GPIOB_OSPEEDR           *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x08))
#define GPIOB_PUPDR             *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x0C))
#define GPIOB_IDR               *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x10))
#define GPIOB_ODR               *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x14))
#define GPIOB_BSRR              *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x18))
#define GPIOB_LCKR              *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x1C))
#define GPIOB_AFRL              *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x20))
#define GPIOB_AFRH              *((u32 * )(GPIO_PORTB_BASE_ADDRESS+0x24))

/* Define the register of GPIO port C */
#define GPIOC_MODER             *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x00))
#define GPIOC_OTYPER            *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x04))
#define GPIOC_OSPEEDR           *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x08))
#define GPIOC_PUPDR             *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x0C))
#define GPIOC_IDR               *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x10))
#define GPIOC_ODR               *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x14))
#define GPIOC_BSRR              *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x18))
#define GPIOC_LCKR              *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x1C))
#define GPIOC_AFRL              *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x20))
#define GPIOC_AFRH              *((u32 * )(GPIO_PORTC_BASE_ADDRESS+0x24))


/* Define the register of GPIO port D */
#define GPIOD_MODER             *((u32 * )(GPIO_PORTD_BASE_ADDRESS+0x00))
#define GPIOD_OTYPER            *((u32 * )(GPIO_PORTD_BASE_ADDRESS+0x04))
#define GPIOD_OSPEEDR           *((u32 * )(GPIO_PORTD_BASE_ADDRESS+0x08))
#define GPIOD_PUPDR             *((u32 * )(GPIO_PORTD_BASE_ADDRESS+0x0C))
#define GPIOD_IDR               *((u32 * )(GPIO_PORTD_BASE_ADDRESS+0x10))
#define GPIOD_ODR               *((u32 * )(GPIO_PORTD_BASE_ADDRESS+0x14))
#define GPIOD_BSRR              *((u32 * )(GPIO_PORTD_BASE_ADDRESS+0x18))
#define GPIOD_LCKR              *((u32 * )(GPIO_PORTD_BASE_ADDRESS+0x1C))
#define GPIOD_AFRL              *((u32 * )(GPIO_PORTD_BASE_ADDRESS+0x20))
#define GPIOD_AFRH              *((u32 * )(GPIO_PORTD_BASE_ADDRESS+0x24))


/* Define the register of GPIO port F */
#define GPIOF_MODER             *((u32 * )(GPIO_PORTF_BASE_ADDRESS+0x00))
#define GPIOF_OTYPER            *((u32 * )(GPIO_PORTF_BASE_ADDRESS+0x04))
#define GPIOF_OSPEEDR           *((u32 * )(GPIO_PORTF_BASE_ADDRESS+0x08))
#define GPIOF_PUPDR             *((u32 * )(GPIO_PORTF_BASE_ADDRESS+0x0C))
#define GPIOF_IDR               *((u32 * )(GPIO_PORTF_BASE_ADDRESS+0x10))
#define GPIOF_ODR               *((u32 * )(GPIO_PORTF_BASE_ADDRESS+0x14))
#define GPIOF_BSRR              *((u32 * )(GPIO_PORTF_BASE_ADDRESS+0x18))
#define GPIOF_LCKR              *((u32 * )(GPIO_PORTF_BASE_ADDRESS+0x1C))
#define GPIOF_AFRL              *((u32 * )(GPIO_PORTF_BASE_ADDRESS+0x20))
#define GPIOF_AFRH              *((u32 * )(GPIO_PORTF_BASE_ADDRESS+0x24))

/* Define the register of GPIO port E */
#define GPIOE_MODER             *((u32 * )(GPIO_PORTE_BASE_ADDRESS+0x00))
#define GPIOE_OTYPER            *((u32 * )(GPIO_PORTE_BASE_ADDRESS+0x04))
#define GPIOE_OSPEEDR           *((u32 * )(GPIO_PORTE_BASE_ADDRESS+0x08))
#define GPIOE_PUPDR             *((u32 * )(GPIO_PORTE_BASE_ADDRESS+0x0C))
#define GPIOE_IDR               *((u32 * )(GPIO_PORTE_BASE_ADDRESS+0x10))
#define GPIOE_ODR               *((u32 * )(GPIO_PORTE_BASE_ADDRESS+0x14))
#define GPIOE_BSRR              *((u32 * )(GPIO_PORTE_BASE_ADDRESS+0x18))
#define GPIOE_LCKR              *((u32 * )(GPIO_PORTE_BASE_ADDRESS+0x1C))
#define GPIOE_AFRL              *((u32 * )(GPIO_PORTE_BASE_ADDRESS+0x20))
#define GPIOE_AFRH              *((u32 * )(GPIO_PORTE_BASE_ADDRESS+0x24))

/* Define the register of GPIO port G */
#define GPIOG_MODER             *((u32 * )(GPIO_PORTG_BASE_ADDRESS+0x00))
#define GPIOG_OTYPER            *((u32 * )(GPIO_PORTG_BASE_ADDRESS+0x04))
#define GPIOG_OSPEEDR           *((u32 * )(GPIO_PORTG_BASE_ADDRESS+0x08))
#define GPIOG_PUPDR             *((u32 * )(GPIO_PORTG_BASE_ADDRESS+0x0C))
#define GPIOG_IDR               *((u32 * )(GPIO_PORTG_BASE_ADDRESS+0x10))
#define GPIOG_ODR               *((u32 * )(GPIO_PORTG_BASE_ADDRESS+0x14))
#define GPIOG_BSRR              *((u32 * )(GPIO_PORTG_BASE_ADDRESS+0x18))
#define GPIOG_LCKR              *((u32 * )(GPIO_PORTG_BASE_ADDRESS+0x1C))
#define GPIOG_AFRL              *((u32 * )(GPIO_PORTG_BASE_ADDRESS+0x20))
#define GPIOG_AFRH              *((u32 * )(GPIO_PORTG_BASE_ADDRESS+0x24))

/* Define the register of GPIO port H */
#define GPIOH_MODER             *((u32 * )(GPIO_PORTH_BASE_ADDRESS+0x00))
#define GPIOH_OTYPER            *((u32 * )(GPIO_PORTH_BASE_ADDRESS+0x04))
#define GPIOH_OSPEEDR           *((u32 * )(GPIO_PORTH_BASE_ADDRESS+0x08))
#define GPIOH_PUPDR             *((u32 * )(GPIO_PORTH_BASE_ADDRESS+0x0C))
#define GPIOH_IDR               *((u32 * )(GPIO_PORTH_BASE_ADDRESS+0x10))
#define GPIOH_ODR               *((u32 * )(GPIO_PORTH_BASE_ADDRESS+0x14))
#define GPIOH_BSRR              *((u32 * )(GPIO_PORTH_BASE_ADDRESS+0x18))
#define GPIOH_LCKR              *((u32 * )(GPIO_PORTH_BASE_ADDRESS+0x1C))
#define GPIOH_AFRL              *((u32 * )(GPIO_PORTH_BASE_ADDRESS+0x20))
#define GPIOH_AFRH              *((u32 * )(GPIO_PORTH_BASE_ADDRESS+0x24))

/* Define the register of GPIO port I */
#define GPIOI_MODER             *((u32 * )(GPIO_PORTI_BASE_ADDRESS+0x00))
#define GPIOI_OTYPER            *((u32 * )(GPIO_PORTI_BASE_ADDRESS+0x04))
#define GPIOI_OSPEEDR           *((u32 * )(GPIO_PORTI_BASE_ADDRESS+0x08))
#define GPIOI_PUPDR             *((u32 * )(GPIO_PORTI_BASE_ADDRESS+0x0C))
#define GPIOI_IDR               *((u32 * )(GPIO_PORTI_BASE_ADDRESS+0x10))
#define GPIOI_ODR               *((u32 * )(GPIO_PORTI_BASE_ADDRESS+0x14))
#define GPIOI_BSRR              *((u32 * )(GPIO_PORTI_BASE_ADDRESS+0x18))
#define GPIOI_LCKR              *((u32 * )(GPIO_PORTI_BASE_ADDRESS+0x1C))
#define GPIOI_AFRL              *((u32 * )(GPIO_PORTI_BASE_ADDRESS+0x20))
#define GPIOI_AFRH              *((u32 * )(GPIO_PORTI_BASE_ADDRESS+0x24))

/* Define the register of GPIO port J */
#define GPIOJ_MODER             *((u32 * )(GPIO_PORTJ_BASE_ADDRESS+0x00))
#define GPIOJ_OTYPER            *((u32 * )(GPIO_PORTJ_BASE_ADDRESS+0x04))
#define GPIOJ_OSPEEDR           *((u32 * )(GPIO_PORTJ_BASE_ADDRESS+0x08))
#define GPIOJ_PUPDR             *((u32 * )(GPIO_PORTJ_BASE_ADDRESS+0x0C))
#define GPIOJ_IDR               *((u32 * )(GPIO_PORTJ_BASE_ADDRESS+0x10))
#define GPIOJ_ODR               *((u32 * )(GPIO_PORTJ_BASE_ADDRESS+0x14))
#define GPIOJ_BSRR              *((u32 * )(GPIO_PORTJ_BASE_ADDRESS+0x18))
#define GPIOJ_LCKR              *((u32 * )(GPIO_PORTJ_BASE_ADDRESS+0x1C))
#define GPIOJ_AFRL              *((u32 * )(GPIO_PORTJ_BASE_ADDRESS+0x20))
#define GPIOJ_AFRH              *((u32 * )(GPIO_PORTJ_BASE_ADDRESS+0x24))

/* Define the register of GPIO port K */
#define GPIOK_MODER             *((u32 * )(GPIO_PORTK_BASE_ADDRESS+0x00))
#define GPIOK_OTYPER            *((u32 * )(GPIO_PORTK_BASE_ADDRESS+0x04))
#define GPIOK_OSPEEDR           *((u32 * )(GPIO_PORTK_BASE_ADDRESS+0x08))
#define GPIOK_PUPDR             *((u32 * )(GPIO_PORTK_BASE_ADDRESS+0x0C))
#define GPIOK_IDR               *((u32 * )(GPIO_PORTK_BASE_ADDRESS+0x10))
#define GPIOK_ODR               *((u32 * )(GPIO_PORTK_BASE_ADDRESS+0x14))
#define GPIOK_BSRR              *((u32 * )(GPIO_PORTK_BASE_ADDRESS+0x18))
#define GPIOK_LCKR              *((u32 * )(GPIO_PORTK_BASE_ADDRESS+0x1C))
#define GPIOK_AFRL              *((u32 * )(GPIO_PORTK_BASE_ADDRESS+0x20))
#define GPIOK_AFRH              *((u32 * )(GPIO_PORTK_BASE_ADDRESS+0x24))

#endif
