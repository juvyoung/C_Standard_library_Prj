/**
*  \brief types.
*
*  \file  types.h
*
*  \author juvyoung <t.hwang@hotmail.com>
*
*/

#ifndef TYPES_H_INCLUDED
#define TYPES_H_INCLUDED

/*================================================[ public data-types ]================================================*/

typedef unsigned char U8;
#define U8_CONST(arg) ((U8) arg##U)
#define U8_MIN U8_CONST(0)
#define U8_MAX U8_CONST(255)

typedef signed char S8;
#define S8_CONST(arg) ((S8) arg)
#define S8_MIN S8_CONST(-128)
#define S8_MAX S8_CONST(127)

typedef unsigned char UX8;
#define UX8_CONST(arg) ((UX8) arg##U)
#define UX8_MIN UX8_CONST(0)
#define UX8_MAX UX8_CONST(255)

typedef signed char SX8;
#define SX8_CONST(arg) ((SX8) arg)
#define SX8_MIN SX8_CONST(-128)
#define SX8_MAX SX8_CONST(127)

typedef unsigned short U16;
#define U16_CONST(arg) ((U16) arg##U)
#define U16_MIN U16_CONST(0)
#define U16_MAX U16_CONST(65535)

typedef signed short S16;
#define S16_CONST(arg) ((S16) arg)
#define S16_MIN S16_CONST(-32768)
#define S16_MAX S16_CONST(32767)

typedef unsigned short UX16;
#define UX16_CONST(arg) ((UX16) arg##U)
#define UX16_MIN UX16_CONST(0)
#define UX16_MAX UX16_CONST(65535)

typedef signed short SX16;
#define SX16_CONST(arg) ((SX16) arg)
#define SX16_MIN SX16_CONST(-32768)
#define SX16_MAX SX16_CONST(32767)

typedef unsigned long U32;
#define U32_CONST(arg) ((U32) arg##UL)
#define U32_MIN U32_CONST(0)
#define U32_MAX U32_CONST(4294967295)

typedef signed long S32;
#define S32_CONST(arg) ((S32) arg##L)
#define S32_MIN S32_CONST(-2147483648)
#define S32_MAX S32_CONST(2147483647)

typedef unsigned long UX32;
#define UX32_CONST(arg) ((UX32) arg##UL)
#define UX32_MIN UX32_CONST(0)
#define UX32_MAX UX32_CONST(4294967295)

typedef signed long SX32;
#define SX32_CONST(arg) ((SX32) arg##L)
#define SX32_MIN SX32_CONST(-2147483648)
#define SX32_MAX SX32_CONST(2147483647)

typedef char CH;
#define CH_CONST(arg) ((CH) arg)
#define CH_MIN CH_CONST(-128)
#define CH_MAX CH_CONST(127)

typedef unsigned int UP;
#define UP_CONST(arg) ((UP) arg##U)
#define UP_MIN UP_CONST(0)
#define UP_MAX UP_CONST(4294967295)

typedef float F32;
#define F32_CONST(arg )   ((F32)arg##F )

typedef double F64;
#define F64_CONST(arg )   ((F64)arg##L )

typedef unsigned char BO;

typedef void VO;

#ifndef FALSE
   #define FALSE 0
#endif

#ifndef TRUE
   #define TRUE  (!FALSE)
#endif

typedef enum
{
   RC_SUCCESS                    =  0,  /**< Function was successfully completed.                         */
   RC_ERROR                      = -1,  /**< Non specific error.                                          */
   RC_ERROR_NULL                 = -2,  /**< A pointer was NULL when a non-NULL pointer was expected.     */
}RC;

/*====================================================================================================================*/

#endif //TYPES_H_INCLUDED

/**----------------------------------------------------------
 *    End of file
 * -----------------------------------------------------------*/
