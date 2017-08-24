/**
*  \file lib_ctype.c
*
*  \brief   C library test
*
*  \author juvyoung <t.hwang@hotmail.com>
*
*/

/**
 *                        %%%%%%%%%%%%%%%% C Library description %%%%%%%%%%%%%%%%
 *
 *  The C standard library or libc is the standard library for the C programming language, as specified in the ANSI C standard.
 *  It was developed at the same time as the C library POSIX specification, which is a superset of it.
 *  Since ANSI C was adopted by the International Organization for Standardization,the C standard library is also called the ISO C library.

 *--> The C standard library provides macros, type definitions
 *    and functions for tasks such as string handling, mathematical computations,
 *    input/output processing, memory management, and several other operating system services.
 *
 * */
/*===============================================[ private includes  ]================================================*/
#include <stdio.h>
#include <stdlib.h> /* exit() */

#include "clibtest.h"
#include "lib_ctype.h"
/*===============================================[ private defines   ]================================================*/

/*===============================================[ private data types ]================================================*/
CH test_item[] = {
				   'A' ,   // isalnum()
				   'C' ,   // isalpha()
					5  ,   // Control character ( 0x00 - 0x1f[US] or 0x7f[DEL] )
				   '4' ,   // A digit (0 - 9)
				   '[' ,   // printing character except 'space'
				   'f' ,   // is it lower case?
				   '{' ,   // printing character
				   'd' ,   // printing char except 'space' or isalnum
				   '1' ,   // whitespace char
				   'A' ,   // is it upper case?
				   'a' ,   // hexadecimal digit  ( 0-9, A-F, a-f )

				   'G' ,   // lower case
				   'y'     // upper case
};
/*===============================================[ private variables ]================================================*/

/*===============================================[ public variables  ]================================================*/

/*===============================================[ private functions ]================================================*/
//static void print_u32( U32 value );
//static void Init_C_lib_ref( void );
/**==================================================
 ************   @Sub-functions  ********************
=====================================================*/

void C_lib_reference( void )
{
	app_ctype_func( test_item[ind_isalnum] , ind_isalnum );
	app_ctype_func( test_item[ind_isalpha] , ind_isalpha );
	app_ctype_func( test_item[ind_iscntrl] , ind_iscntrl );
	app_ctype_func( test_item[ind_isdigit] , ind_isdigit );
	app_ctype_func( test_item[ind_isgraph] , ind_isgraph );
	app_ctype_func( test_item[ind_islower] , ind_islower );
	app_ctype_func( test_item[ind_isprint] , ind_isprint );
	app_ctype_func( test_item[ind_ispunct] , ind_ispunct );
	app_ctype_func( test_item[ind_isspace] , ind_isspace );
	app_ctype_func( test_item[ind_isupper] , ind_isupper );
	app_ctype_func( test_item[ind_isxdigit] , ind_isxdigit );

	app_ctype_func( test_item[ind_tolower] , ind_tolower );
	app_ctype_func( test_item[ind_toupper] , ind_toupper );
}

/**----------------------------------------------------------
 *    End of file
 * -----------------------------------------------------------*/
