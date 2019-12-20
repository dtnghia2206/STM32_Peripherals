#include "UART_Debug.h"

UART_HandleTypeDef huart1;

/* USART1 Initialize function */
void DEBUG_Init(void)
{

	  huart1.Instance 			= USART1;
	  huart1.Init.BaudRate 		= 115200;
	  huart1.Init.WordLength 	= UART_WORDLENGTH_8B;
	  huart1.Init.StopBits 		= UART_STOPBITS_1;
	  huart1.Init.Parity 		= UART_PARITY_NONE;
	  huart1.Init.Mode 			= UART_MODE_TX_RX;
	  huart1.Init.HwFlowCtl 	= UART_HWCONTROL_NONE;
	  huart1.Init.OverSampling 	= UART_OVERSAMPLING_16;
	  if (HAL_UART_Init(&huart1) != HAL_OK)
	  {

	  }

}

int8_t printLog(char * content)
{
	HAL_UART_Transmit(&huart1, (uint8_t *)content, strlen(content), 1000);

	return 0;
}
