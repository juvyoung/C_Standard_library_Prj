/**
*  \file cfg.h
*
*  \brief Global configuration.
*
*  \author juvyoung <t.hwang@hotmail.com>
*
*  Global configuration to control program generation. This is the right place to
*  add additional switches to control debug, trace or management of variants.
*
*/

#ifndef CFG_H_INCLUDED
#define CFG_H_INCLUDED

/*================================================[ public defines   ]================================================*/

/** Inline.
 *
 * Wraper for the inline keyword. The keyword inline is defined in ANSI 99 but
 * various (non ANSI 99) compiler support this feature, but sometimes with an
 * other notation.
 */
#define STATIC_INLINE static inline


/** Unreferenced
 *
 *  The UNREFERENCED macro have to be used to indicate that the variable or parameter
 *  is unused and is not refereced. The use of this macro can also prevent compiler
 *  warnings.
 */
#define UNREFERENCED(arg)   ((void)arg)

/*====================================================================================================================*/

#endif /* CFG_H_INCLUDED */

/**----------------------------------------------------------
 *    End of file
 * -----------------------------------------------------------*/
