/**
*  \file lib_math.h
*
*  \brief  library math.h
*
*  \author juvyoung <t.hwang@hotmail.com>
*
*/
#ifndef LIBMATH_H_INCLUDED
#define LIBMATH_H_INCLUDED

/*================================================[ public includes  ]================================================*/
#include <math.h>        //--- related C standard library
/**
 *             %%%%%%%%%%%%%%%%  Library description %%%%%%%%%%%%%%%%
 *
 *  The header <math.h> defines several mathematic functions.

[acos(x)]  \ Func :   Returns the arc cosine of x in radians.
           \ Range:   The value x must be within the range of [-1,+1]. The returned value is in the range of (0,pi)


 * */

#include "clibtest.h"

/*================================================[ public defines    ]================================================*/
#define  PI  3.14159265359

typedef enum
{
  ind_acos = 0,
//  ind_isalpha = 1,
//  ind_iscntrl = 2,
//  ind_isdigit = 3,
//  ind_isgraph = 4,
//  ind_islower = 5,
//  ind_isprint = 6,
//  ind_ispunct = 7,
//  ind_isspace = 8,
//  ind_isupper = 9,
//  ind_isxdigit = 10,
//  ind_tolower  = 11,
//  ind_toupper  = 12

}CLIB_MATH_ENUM;

/*================================================[ public data-types ]================================================*/
// Generic function pointer
typedef void (*use_math_func)(F64 fac);

typedef struct
{
	CLIB_MATH_ENUM indx;         /**> index of function in C library ctype.h */

	use_math_func math_func;    /**> C library: Ctype.h Function Callback.  */
    CH const* string;

}CLIB_MATH_STRUC;

/*================================================[ in-line functions ]================================================*/

/*================================================[ public functions  ]================================================*/
/**==========================================
		Call by clibtest.c
		Application function
----------------------------------------------*/
RC app_math_func( F64 fac, CLIB_MATH_ENUM func_name );

/**==================================================
 ************   @Sub-functions  ********************
=====================================================*/
/**==============================================================================
*                   Application function
*                < ctype.h >  -- isalnum()
*
*  This function is used to print the results of acos ,
*                                                isapha  ,  (A to Z or a to z)
*                                                iscntrl ,  Control character ( 0x00 - 0x1f or 0x7f )
*                                                isdigit ,  A digit (0 - 9)
*                                                isgraph ,  Any printing character except for the space character(0x21-0x7E)
*                                                islower ,  a lowercase letter( from a to z)
*                                                isprint ,  Any printing character( 0x20 to 0x7E )
*                                                ispunct ,  Any punctuation character
*                                                isspace ,  A whitespace character( space, tab ...)
*                                                isupper ,  An uppercase letter ( from A to Z )
*                                                isxdigit,  A hexadecimal digit ( 0-9, A-F, a-f )
*
*  In C standard library is used for check the passed character is [_sub_] or not
*
*  \param --- 'char' to be check
---------------------------------------------------------------------------------*/
void app_math_acos( F64 fac );

/*====================================================================================================================*/

#endif //LIBCTYPE_H_INCLUDED

/**----------------------------------------------------------
 *    End of file
 * -----------------------------------------------------------*/
