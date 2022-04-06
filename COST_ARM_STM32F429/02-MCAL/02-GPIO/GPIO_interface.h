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
#define GPIO_PORTD        3
#define GPIO_PORTE        4
#define GPIO_PORTF        5
#define GPIO_PORTG        6
#define GPIO_PORTH        7
#define GPIO_PORTI        8
#define GPIO_PORTJ        9
#define GPIO_PORTK        10


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

/*the define AF pin */
#define     AF0                     0b0000
#define     AF1                     0b0001
#define     AF2                     0b0010
#define     AF3                     0b0011
#define     AF4                     0b0100
#define     AF5                     0b0101
#define     AF6                     0b0110
#define     AF7                     0b0111
#define     AF8                     0b1000
#define     AF9                     0b1001
#define     AF10                    0b1010
#define     AF11                    0b1011
#define     AF12                    0b1100
#define     AF13                    0b1101
#define     AF14                    0b1110
#define     AF15                    0b1111

/* THE optaion pin output 
                         1-high  
						 2-low     */
						 
#define  HIGH   1
#define  LOW    0


/*THE define Driction  mode of pin */

#define   INPUT_MODE                          0b00
#define   OUTPYT_MODE                         0b01
#define   AF_MODE                             0b10
#define   ANALOGE_MODE                        0b11

/*THE define of pin  output mode */

#define        OUTPUT_PUSH_PULL                0
#define        OUTPUT_OPEN_DR                  1


/*THE define mode  of pin output speed*/

#define        OUTPUT_LOW_SPEED                0b00
#define        OUTPUT_MEDIUME                  0b01
#define        OUTPUT_HIGH_SPEED               0b10
#define        OUTPUT_VERY_HIGH_SPEED          0b11


/*THE define  pin  PULL_UP and PULL_DOWN and FOLLATING */

#define        FOLLATING                      0b00
#define        PULL_UP                        0b01
#define        PULL_DOWN                      0b10
 
 


/* the function to set driction pin  output and AF*/
void MGPIO_voidSetPinDrictionOutAf( u8 capy_u8Port ,u8 capy_u8PinId,u8 Capy_u8modePin, u8 Capy_u8modeoutput,u8 Capy_u8speedmode );

//the function set driction  mode pin
void MGPIO_voidSetPinDrictionMode( u8 capy_u8Port ,u8 capy_u8PinId,u8 Capy_u8modePin) ;
 
/* the function to active PULL UP and PULL down OR not at  pin */
void MGPIO_voidActivePullUpPullDown( u8 capy_u8Port ,u8 capy_u8PinId,u8 Capy_u8pullup_down_floating);
/* the function to set value pin */
void MGPIO_voidSetPinValue( u8 capy_u8Port ,u8 capy_u8PinId,u8 Capy_u8ValuePin);

/* the function to get pin value  */
u8 MGPIO_u8GetPinValue( u8 capy_u8Port ,u8 capy_u8PinId);

void MGPIO_voidSetAfPeripier( u8 capy_u8Port ,u8 capy_u8PinId,u8 Capy_u8modeAFPin) ;




#endif
