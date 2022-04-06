/*******************************************************/
/*	Author	:	maher								   */
/*	Date	:	25 oct	2021						   */
/*	Version	:	V02								 	   */
/*******************************************************/
#ifndef STD_TYPES_H
#define STD_TYPES_H

typedef unsigned char			u8 ;
typedef unsigned short int		u16;
typedef unsigned long  int		u32;

/* Boolean Data Type */
typedef unsigned char bool;

typedef unsigned char         uint8;          /*           0 .. 255             */
typedef signed char           sint8;          /*        -128 .. +127            */
typedef unsigned short        uint16;         /*           0 .. 65535           */
typedef signed short          sint16;         /*      -32768 .. +32767          */
typedef unsigned long         uint32;         /*           0 .. 4294967295      */
typedef signed long           sint32;         /* -2147483648 .. +2147483647     */
typedef unsigned long long    uint64;         /*       0..18446744073709551615  */
typedef signed long long      sint64;
typedef float                 float32;
typedef double                float64;

/* Boolean Values */
#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif

#define HIGH        (1u)
#define LOW         (0u)

#endif