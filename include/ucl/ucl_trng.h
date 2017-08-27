/*============================================================================
 *
 *	ucl_trng.h
 *
 *==========================================================================*/
/*============================================================================
 *
 * Copyright (c) 2002-2006 Innova Card.
 * All Rights Reserved. Do not disclose.
 *
 * This software is the confidential and proprietary information of
 * Innova Card ("Confidential Information"). You shall not
 * disclose such Confidential Information and shall use it only in
 * accordance with the terms of the license agreement you entered
 * into with Innova Card.
 *
 * Innova Card makes no representations or warranties about the suitability of
 * the software, either express or implied, including but not limited to
 * the implied warranties of merchantability, fitness for a particular purpose,
 * or non-infrigement. Innova Card shall not be liable for any damages suffered
 * by licensee as the result of using, modifying or distributing this software
 * or its derivatives.
 *
 *==========================================================================*/
/*============================================================================
 *
 * Purpose :
 *
 *==========================================================================*/
#ifndef _UCL_TRNG_H_
#define _UCL_TRNG_H_

/** @file ucl_trng.h 
 * @defgroup UCL_TRNG USIP TRNG
 * USIP&reg; True Random Number Generation.
 *
 * @par Header:
 * @link ucl_trng.h ucl_trng.h @endlink
 * 
 * 
 * @ingroup UCL_RAND
 */


/** <b>TRNG Interface Option</b>.
 * The random output does not contain any null byte.
 *
 * @ingroup UCL_TRNG
 */
#define UCL_RAND_NO_NULL 1
/** <b>TRNG Interface Option</b>.
 * No constraint for the random output.
 *
 * @ingroup UCL_TRNG
 */
#define UCL_RAND_DEFAULT 0


/*============================================================================*/
/** <b>USIP&reg; TRNG Read</b>.
 * Read random octet string from USIP&reg; TRNG.
 *
 * @param[out]	rand			Random octet string
 * @param[in]	rand_byteLen	Random byte length
 * @param[in]	option			A value between:
 * 									@li #UCL_RAND_DEFAULT
 * 									@li #UCL_RAND_NO_NULL
 *
 * @return	Error code
 *
 * @retval	#UCL_OK					No error occurred
 * @retval	#UCL_INVALID_OUTPUT		@p rand is the pointer #NULL
 * @retval	#UCL_NOP				@p rand_byteLen = 0
 * @retval	#UCL_NO_TRNG_INTERFACE	No interface to the USIP&reg; TRNG
 *
 * @ingroup UCL_TRNG
 */
int ucl_trng_read(u8 *rand, u32 rand_byteLen, int option);


#endif /*_UCL_TRNG_H_*/