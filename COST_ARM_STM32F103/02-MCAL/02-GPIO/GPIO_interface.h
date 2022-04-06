/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  GPIO                                                     */
/*  version    :  V01                                                 */
/*  DATA       : 10/1/2022                                            */
/**************************************************************************/

#ifndef GPIO_INTERFACE_H 
#define GPIO_INTERFACE_H

/* the define name of port */
#define GPIO_PORTA        0
#define GPIO_PORTB        1
#define GPIO_PORTC        2

/*the define pin ID*/
#define     PIN0                     0
#define     PIN1                     1
#define     PIN2                     2 
#define     PIN3                     3
#define     PIN4                     4
#define     PIN5                     5
#define     PIN6                     6
#define     PIN7                     7
#define     PIN8                     8
#define     PIN9                     9
#define     PIN10                   10
#define     PIN11                   11
#define     PIN12                   12
#define     PIN13                   13
#define     PIN14                   14
#define     PIN15                   15

/* THE optaion pin output 
                         1-high  
						 2-low     */
						 
#define  HIGH   1
#define  LOW    0


/*THE define  mode of pin INPUT  */

#define   INPUT_ANALOGE           0b0000
#define   INPUT_FLOATING          0b0100
#define   INPUT_PULLUP_DOWN       0b1000

/*THE define mode  of pin output 2 MHZ*/
#define        OUTPUT_2MHZ_PUSH_PULL          0b0010
#define        OUTPUT_2MHZ_OPEN_DR            0b0110
#define        OUTPUT_2MHZ_AF_PUSH_PULL       0b1010
#define        OUTPUT_2MHZ_AF_OPEN_DR         0b1110

/*THE define mode  of pin output 10 MHZ*/
#define        OUTPUT_10MHZ_PUSH_PULL          0b0001
#define        OUTPUT_10MHZ_OPEN_DR            0b0101
#define        OUTPUT_10MHZ_AF_PUSH_PULL       0b1001
#define        OUTPUT_10MHZ_AF_OPEN_DR         0b1101

/*THE define mode  of pin output 50 MHZ*/
#define        OUTPUT_50MHZ_PUSH_PULL          0b0011
#define        OUTPUT_50MHZ_OPEN_DR            0b0111
#define        OUTPUT_50MHZ_AF_PUSH_PULL       0b1011
#define        OUTPUT_50MHZ_AF_OPEN_DR         0b1111

/* the funcation to set driction pin */
void MGPIO_voidSetPinDriction( u8 capy_u8Port ,u8 capy_u8PinId,u8 Capy_u8modePin);
/* the funcation to set value pin */
void MGPIO_voidSetPinValue( u8 capy_u8Port ,u8 capy_u8PinId,u8 Capy_u8modePin);
/* the funcation to get pin value  */
u8 MGPIO_u8GetPinValue( u8 capy_u8Port ,u8 capy_u8PinId);






#endif
