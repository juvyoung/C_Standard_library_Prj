/**
*  \file clibtest.h
*
*  \brief   C library test head file
*
*  \author juvyoung <t.hwang@hotmail.com>
*
*
*/
#ifndef CLIB_TEST_H_INCLUDED
#define CLIB_TEST_H_INCLUDED

/*================================================[ public includes  ]================================================*/
#include "../cfg/prj.h"
#include "../pal/types.h"

/*================================================[ public defines   ]================================================*/
/** Function pointer of a generic print function. */
typedef void(*test_print_function_t)( CH const* string );

/*================================================[ public data-types ]================================================*/

/*================================================[ public variables ]================================================*/

/*================================================[ public functions ]================================================*/
/**==============================================================================
*                   Application function
*                < ctype.h >  -- isalnum()
*
* C library reference function: Call in sub-function module of C standard library
---------------------------------------------------------------------------------*/
void C_lib_reference( void );

/*====================================================================================================================*/

#endif  //CLIB_TEST_H_INCLUDED

/**----------------------------------------------------------
 *    End of file
 * -----------------------------------------------------------*/
