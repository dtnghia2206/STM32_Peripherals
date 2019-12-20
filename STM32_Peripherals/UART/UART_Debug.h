#ifndef MODULES_DEBUG_UART_H_
#define MODULES_DEBUG_UART_H_

#include "stm32f4xx_hal.h"
#include <stdarg.h>

void DEBUG_Init(void);

int8_t printLog(char * content);

#endif /* MODULES_UART_H_ */

/**
 * @}
 * @}
 */
