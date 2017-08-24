/**
*  \file lib_ctype.c
*
*  \brief
*
*  \author juvyoung <t.hwang@hotmail.com>
*
*/

/*=============================================== [ private includes  ]===============================================*/
#include <stdio.h>
#include "lib_ctype.h"
/*=============================================== [ private defines   ]================================================*/

/*=============================================== [ private datatypes ]================================================*/
// Structure Array of ctype functions
CLIB_CTYPE_STRUC Ctype_table[] =
{
		{ ind_isalnum,   app_ctype_isalnum,  "Testing ctype library: isalnum(). \n"  },
		{ ind_isalpha,   app_ctype_isalpha,  "Testing ctype library: isalpha(). \n"  },
		{ ind_iscntrl,   app_ctype_iscntrl,  "Testing ctype library: iscntrl(). \n"  },
		{ ind_isdigit,   app_ctype_isdigit,  "Testing ctype library: isdigit(). \n"  },
		{ ind_isgraph,   app_ctype_isgraph,  "Testing ctype library: isgraph(). \n"  },
		{ ind_islower,   app_ctype_islower,  "Testing ctype library: islower(). \n"  },
		{ ind_isprint,   app_ctype_isprint,  "Testing ctype library: isprint(). \n"  },
		{ ind_ispunct,   app_ctype_ispunct,  "Testing ctype library: ispunct(). \n"  },
		{ ind_isspace,   app_ctype_isspace,  "Testing ctype library: isspace(). \n"  },
		{ ind_isupper,   app_ctype_isupper,  "Testing ctype library: isupper(). \n"  },
		{ ind_isxdigit,  app_ctype_isxdigit, "Testing ctype library: isxdigit(). \n" },
		{ ind_tolower,   app_ctype_tolower,  "Testing ctype library: tolower(). \n"  },
		{ ind_toupper,   app_ctype_toupper,  "Testing ctype library: toupper(). \n"  },
};

/*=============================================== [ private variables ]================================================*/
static test_ctype_func  current_func;
static CLIB_CTYPE_STRUC me;
/*=============================================== [ private functions ]================================================*/
static RC init_ctype_para( CLIB_CTYPE_STRUC *ctype, CLIB_CTYPE_ENUM ind);

/*================================================[ in-line functions ]================================================*/

/*================================================[ public functions  ]================================================*/

/*=============================================== [ private functions ]================================================*/
RC app_ctype_func( CH cha, CLIB_CTYPE_ENUM func_name )
{
	init_ctype_para( &me, func_name);

	printf( "%s",  Ctype_table[me.indx].string   );   /** Notes for sub-function */
	current_func = Ctype_table[me.indx].ctype_func;   /** individual function running */
	(*current_func)(cha);

	return RC_SUCCESS;
}

/**==================================================
  ************   @Sub-functions  ********************
  ===================================================*/
static RC init_ctype_para( CLIB_CTYPE_STRUC *ctype, CLIB_CTYPE_ENUM ind )
{
    ctype->indx = ind;

    ctype->ctype_func = (void*)(0);
    ctype->string     = (void*)(0);

	return RC_SUCCESS;
}

void app_ctype_isalnum( CH cha )
{
	if( isalnum(cha) )
	{
		printf( "%c is alphanumeric.\n", cha);
	}
	else
	{
		printf( "%c is not alphanumeric.\n", cha);
	}
	printf("\n");
}

void app_ctype_isalpha( CH cha )
{
	if( isalpha(cha) )
	{
		printf( "%c is a letter.\n", cha);
	}
	else
	{
		printf( "%c is not a letter.\n", cha);
	}
	printf("\n");
}

void app_ctype_iscntrl( CH cha )
{
	if( iscntrl(cha) )
	{
		printf( "%c is a control char.\n", cha);
	}
	else
	{
		printf( "%c is not a control char.\n", cha);
	}
	printf("\n");
}

void app_ctype_isdigit( CH cha )
{
	if( isdigit(cha) )
	{
		printf( "%c is a digit.\n", cha);
	}
	else
	{
		printf( "%c is not a digit.\n", cha);
	}
	printf("\n");
}

void app_ctype_isgraph( CH cha )
{
	if( isgraph(cha) )
	{
		printf( "%c is a printing character without space.\n", cha);
	}
	else
	{
		printf( "%c is not a printing character without space.\n", cha);
	}
	printf("\n");
}

void app_ctype_islower( CH cha )
{
	if( islower(cha) )
	{
		printf( "%c is a lowercase letter.\n", cha);
	}
	else
	{
		printf( "%c is not a lowercase letter.\n", cha);
	}
	printf("\n");
}

void app_ctype_isprint( CH cha )
{
	if( isprint(cha) )
	{
		printf( "%c is a printing character.\n", cha);
	}
	else
	{
		printf( "%c is not a printing character.\n", cha);
	}
	printf("\n");
}

void app_ctype_ispunct( CH cha )
{
	if( ispunct(cha) )
	{
		printf( "%c is a punctuation char.\n", cha);
	}
	else
	{
		printf( "%c is not a punctuation char.\n", cha);
	}
	printf("\n");
}

void app_ctype_isspace( CH cha )
{
	if( isspace(cha) )
	{
		printf( "%c is a white space char.\n", cha);
	}
	else
	{
		printf( "%c is not a white space char.\n", cha);
	}
	printf("\n");
}

void app_ctype_isupper( CH cha )
{
	if( isupper(cha) )
	{
		printf( "%c is a uppercase letter.\n", cha);
	}
	else
	{
		printf( "%c is not a uppercase letter.\n", cha);
	}
	printf("\n");
}

void app_ctype_isxdigit( CH cha )
{
	if( isxdigit(cha) )
	{
		printf( "%c is a hexadecimal digit.\n", cha);
	}
	else
	{
		printf( "%c is not a hexadecimal digit.\n", cha);
	}
	printf("\n");
}

void app_ctype_tolower( CH cha )
{
	CH tv;

	printf( "The original Character is: %c \n", cha);
	{
		tv = tolower(cha);
	}
	printf( " Convert to lower case is: %c \n", tv);

	printf("\n");

}

void app_ctype_toupper( CH cha )
{
	CH tv;

	printf( "The original Character is: %c \n", cha);
	{
		tv = toupper(cha);
	}
	printf( " Convert to upper case is: %c \n", tv);

	printf("\n");

}

/**----------------------------------------------------------
 *    End of file
 * -----------------------------------------------------------*/
