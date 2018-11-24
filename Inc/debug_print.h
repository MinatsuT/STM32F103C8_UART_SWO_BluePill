/*
 * debug_print.h
 *
 *  Created on: 2018/05/04
 *      Author: minatsu
 */

#ifndef DEBUG_PRINT_H_
#define DEBUG_PRINT_H_

#include "stm32f1xx.h"

#ifdef DEBUG
#define DP(...) printf(__VA_ARGS__)
#endif

#endif /* DEBUG_PRINT_H_ */
