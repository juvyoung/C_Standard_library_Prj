/**
*  \file lib_math.c
*
*  \brief
*
*  \author juvyoung <t.hwang@hotmail.com>
*
*/

/*=============================================== [ private includes  ]===============================================*/
#include <stdio.h>
#include "lib_math.h"
/*=============================================== [ private defines   ]================================================*/

/*=============================================== [ private datatypes ]================================================*/
// Structure Array of ctype functions
CLIB_MATH_STRUC lib_math_table[] =
{
		{ ind_acos,   app_math_acos,  "Testing math library: acos(). \n"  },
//		{ ind_isalpha,   app_ctype_isalpha,  "Testing ctype library: isalpha(). \n"  },
//		{ ind_iscntrl,   app_ctype_iscntrl,  "Testing ctype library: iscntrl(). \n"  },
//		{ ind_isdigit,   app_ctype_isdigit,  "Testing ctype library: isdigit(). \n"  },
//		{ ind_isgraph,   app_ctype_isgraph,  "Testing ctype library: isgraph(). \n"  },
//		{ ind_islower,   app_ctype_islower,  "Testing ctype library: islower(). \n"  },
//		{ ind_isprint,   app_ctype_isprint,  "Testing ctype library: isprint(). \n"  },
//		{ ind_ispunct,   app_ctype_ispunct,  "Testing ctype library: ispunct(). \n"  },
//		{ ind_isspace,   app_ctype_isspace,  "Testing ctype library: isspace(). \n"  },
//		{ ind_isupper,   app_ctype_isupper,  "Testing ctype library: isupper(). \n"  },
//		{ ind_isxdigit,  app_ctype_isxdigit, "Testing ctype library: isxdigit(). \n" },
//		{ ind_tolower,   app_ctype_tolower,  "Testing ctype library: tolower(). \n"  },
//		{ ind_toupper,   app_ctype_toupper,  "Testing ctype library: toupper(). \n"  },
};

/*=============================================== [ private variables ]================================================*/
static use_math_func  current_func;
static CLIB_MATH_STRUC me;
/*=============================================== [ private functions ]================================================*/
static RC init_math_para( CLIB_MATH_STRUC *math, CLIB_MATH_ENUM ind);

/*================================================[ in-line functions ]================================================*/

/*================================================[ public functions  ]================================================*/

/*=============================================== [ private functions ]================================================*/
RC app_math_func( F64 fac, CLIB_MATH_ENUM func_name  )
{
	init_math_para( &me, func_name);

	printf( "%s",  lib_math_table[me.indx].string   );   /** Notes for sub-function */
	current_func = lib_math_table[me.indx].math_func;   /** individual function running */
	(*current_func)(fac);

	return RC_SUCCESS;
}

/**==================================================
  ************   @Sub-functions  ********************
  ===================================================*/
static RC init_math_para( CLIB_MATH_STRUC *math, CLIB_MATH_ENUM ind )
{
    math->indx = ind;

    math->math_func = (void*)(0);
    math->string    = (void*)(0);

	return RC_SUCCESS;
}
//
void app_math_acos( F64 fac )
{
	F64 radians;
	F64 tv;

	printf( " The input degree is : %6.3f  \n", fac);

	{
		radians = fac*((F64)(PI/180));
	}
	printf( " The input radians is: %6.12f  \n", radians);

	// Get related cosine value
	{
		tv = cos(radians);
	}
	printf( " Corresponding     cosine value is: %6.9f \n", tv);

	// arc-cosine is the reverse of cosine
	{
		tv = acos(tv);
	}
	printf( " Corresponding arc-cosine value is: %6.12f \n", tv);

	{
		tv = tv*(180/PI);
	}
	printf( " Corresponding degree is: %6.9f \n", tv);

	printf("\n");

}



/**----------------------------------------------------------
 *    End of file
 * -----------------------------------------------------------*/
