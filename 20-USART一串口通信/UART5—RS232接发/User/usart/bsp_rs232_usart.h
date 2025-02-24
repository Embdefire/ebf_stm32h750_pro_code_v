#ifndef __RS232_USART_H
#define	__RS232_USART_H

#include "stm32h7xx.h"
#include <stdio.h>



//引脚定义
/*******************************************************/
#define RS232_USART                             UART5
#define RS232_USART_CLK_ENABLE()                __UART5_CLK_ENABLE();

#define RCC_PERIPHCLK_UARTx               			RCC_PERIPHCLK_UART5
#define RCC_UARTxCLKSOURCE_SYSCLK         			RCC_USART234578CLKSOURCE_D2PCLK1

#define RS232_USART_RX_GPIO_PORT                GPIOB
#define RS232_USART_RX_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOB_CLK_ENABLE()
#define RS232_USART_RX_PIN                      GPIO_PIN_12
#define RS232_USART_RX_AF                       GPIO_AF14_UART5


#define RS232_USART_TX_GPIO_PORT                GPIOB
#define RS232_USART_TX_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOB_CLK_ENABLE()
#define RS232_USART_TX_PIN                      GPIO_PIN_13
#define RS232_USART_TX_AF                       GPIO_AF14_UART5

#define RS232_USART_IRQHandler                  UART5_IRQHandler
#define RS232_USART_IRQ                 				UART5_IRQn
/************************************************************/


//串口波特率
#define RS232_USART_BAUDRATE                    115200

void Usart_SendString(uint8_t *str);
void RS232_USART_Config(void);

extern UART_HandleTypeDef UartHandle;
#endif /* __USART1_H */
