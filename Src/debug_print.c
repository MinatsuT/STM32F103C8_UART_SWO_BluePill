/*
 * debug_print.c
 *
 *  Created on: 2018/05/04
 *      Author: minatsu
 */
#include "debug_print.h"

/*
 * Redirect to SWV/SWO
 */
int _write(int32_t file, uint8_t *ptr, int32_t len) {
	for (int i = 0; i < len; i++)
		ITM_SendChar((*ptr++));
	return len;
}
