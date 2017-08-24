/**
*  \file lib_ctype.h
*
*  \brief  library ctype.h
*
*  \author juvyoung <t.hwang@hotmail.com>
*
*/
#ifndef LIBCTYPE_H_INCLUDED
#define LIBCTYPE_H_INCLUDED

/*================================================[ public includes  ]================================================*/
#include <ctype.h>        //--- related C standard library
/**
 *             %%%%%%%%%%%%%%%%  Library description %%%%%%%%%%%%%%%%
 *
 *  The header <ctype.h> declares functions for testing characters.
 *  The functions return non-zero(True) if the argument c satisfies the condition described, and zero if not.

*  This function is used to print the results of isalnum ,  (A to Z or a to z) or a digit (0 -9)
*                                                isapha  ,  (A to Z or a to z)
*                                                iscntrl ,  Control character ( 0x00 - 0x1f[US] or 0x7f[DEL] )
*                                                isdigit ,  A digit (0 - 9)
*                                                isgraph ,  Any printing character except for the space character(0x21-0x7E)
*                                                islower ,  a lowercase letter( from a to z)
*                                                isprint ,  Any printing character( 0x20 to 0x7E )
*                                                ispunct ,  Any punctuation character
*                                                isspace ,  A whitespace character( space, tab ...)
*                                                isupper ,  An uppercase letter ( from A to Z )
*                                                isxdigit,  A hexadecimal digit ( 0-9, A-F, a-f )
 * */

#include "clibtest.h"

/*================================================[ public defines    ]================================================*/
typedef enum
{
  ind_isalnum = 0,
  ind_isalpha = 1,
  ind_iscntrl = 2,
  ind_isdigit = 3,
  ind_isgraph = 4,
  ind_islower = 5,
  ind_isprint = 6,
  ind_ispunct = 7,
  ind_isspace = 8,
  ind_isupper = 9,
  ind_isxdigit = 10,
  ind_tolower  = 11,
  ind_toupper  = 12

}CLIB_CTYPE_ENUM;

/*================================================[ public data-types ]================================================*/
// Generic function pointer
typedef void (*test_ctype_func)(CH arg);

typedef struct
{
	CLIB_CTYPE_ENUM indx;         /**> index of function in C library ctype.h */

	test_ctype_func ctype_func;    /**> C library: Ctype.h Function Callback.  */
    CH const* string;

}CLIB_CTYPE_STRUC;

/*================================================[ in-line functions ]================================================*/

/*================================================[ public functions  ]================================================*/
/**==========================================
		Call by clibtest.c
		Application function
----------------------------------------------*/
RC app_ctype_func( CH cha, CLIB_CTYPE_ENUM func_name );

/**==================================================
 ************   @Sub-functions  ********************
=====================================================*/
/**==============================================================================
*                   Application function
*                < ctype.h >  -- isalnum()
*
*  This function is used to print the results of isalnum ,  (A to Z or a to z) or a digit (0 -9)
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
void app_ctype_isalnum( CH cha );
void app_ctype_isalpha( CH cha );
void app_ctype_iscntrl( CH cha );
void app_ctype_isdigit( CH cha );
void app_ctype_isgraph( CH cha );
void app_ctype_islower( CH cha );
void app_ctype_isprint( CH cha );
void app_ctype_ispunct( CH cha );
void app_ctype_isspace( CH cha );
void app_ctype_isupper( CH cha );
void app_ctype_isxdigit( CH cha );
void app_ctype_tolower( CH cha );
void app_ctype_toupper( CH cha );

/*====================================================================================================================*/

#endif //LIBCTYPE_H_INCLUDED

/**----------------------------------------------------------
 *    End of file
 * -----------------------------------------------------------*/
