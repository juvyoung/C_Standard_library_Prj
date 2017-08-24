/*
 ============================================================================
 Name        : main.c

 /version: 1.0
 /author : juvyoung <t.hwang@hotmail.com>

                 =====  Module test project  =====
           1-->  C standard library test

 log     : [2017_08_22]: C standard library <ctype.h> module created;

 ============================================================================*/
/*===============================================[ private includes  ]================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <time.h>

#include "../cfg/prj.h"
#include "../clib_sub/clibtest.h"
/*===============================================[ private defines   ]================================================*/

/*===============================================[ private variables ]================================================*/

/*===============================================[ private functions ]================================================*/
static void test_print( CH const* string );

/*================================================
    **********  Main function  **************
 =================================================*/
int main(void)
{
	/** ======= Testing Date & Time =======    */
    time_t timer;
    timer = time(NULL);
    printf(" @ The current time is %s", asctime(localtime(&timer)) );

    /** ======= Pre-define and testing area =======    */
	printf("\n========== C library Testing start ==============\n");

	{
		test_print(" C Standard library reference \n\n");
		C_lib_reference();
	}

	printf("\n========== End of C library Testing ==============\n");

	return EXIT_SUCCESS;
}

/**==============================================================================
*                 Print function prototype
*
*  This function is used to print the results of the unittest.
*  It can be used in embedded system to redirect the test results to an terminal.
*
*  \param text Const pointer to a null terminated string
---------------------------------------------------------------------------------*/
static void test_print( CH const* string )
{
	printf("%s",string );
}

/**----------------------------------------------------------
 *    End of file
 * -----------------------------------------------------------*/

