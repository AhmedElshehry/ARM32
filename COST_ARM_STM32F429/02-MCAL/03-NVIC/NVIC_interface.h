/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  NVIC                                                    */
/*  version    :  V01                                                 */
/*  DATA       : 16/1/2022                                            */
/**************************************************************************/

#ifndef NVIC_INTERFACE_H 
#define NVIC_INTERFACE_H
// the function to enable  interrupt peripheral at NVIC
 void MNVIC_voidEnableInterrupt    (u8 capy_u8IntNumber);
 // the function to Disable   interrupt peripheral at NVIC
 void MNVIC_voidDisableInterrupt   (u8 capy_u8IntNumber);
 // the function to enable  pending flag  peripheral at NVIC
 void MNVIC_voidSetPendingFalg     (u8 capy_u8IntNumber);
 // the function to disable  pending flag  peripheral at NVIC
 void MNVIC_voidClearPendingFalg   (u8 capy_u8IntNumber);
 // the function to read  active flag  peripheral at NVIC to cheek the interrupt in running out
 u8   MNVIC_u8GetActiveFalg        (u8 capy_u8IntNumber);
 
 
 
 //the function to set priority group and sub priority
 void MNVIC_voidSetPrioirty(u8 capy_u8IntID ,u8 capy_u8GroupPirorty,u8 capy_u8SubPirorty ); 
 
 
#endif 
