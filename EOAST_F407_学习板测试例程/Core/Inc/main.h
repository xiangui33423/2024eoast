/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_2_Pin GPIO_PIN_13
#define LED_2_GPIO_Port GPIOC
#define LED_1_Pin GPIO_PIN_2
#define LED_1_GPIO_Port GPIOA
#define KEY_X1_IN_Pin GPIO_PIN_2
#define KEY_X1_IN_GPIO_Port GPIOB
#define KEY_Y1_OUT_Pin GPIO_PIN_12
#define KEY_Y1_OUT_GPIO_Port GPIOB
#define KEY_Y2_OUT_Pin GPIO_PIN_13
#define KEY_Y2_OUT_GPIO_Port GPIOB
#define KEY_Y3_OUT_Pin GPIO_PIN_14
#define KEY_Y3_OUT_GPIO_Port GPIOB
#define KEY_Y4_OUT_Pin GPIO_PIN_15
#define KEY_Y4_OUT_GPIO_Port GPIOB
#define MODE_2_Pin GPIO_PIN_8
#define MODE_2_GPIO_Port GPIOA
#define KEY_X2_IN_Pin GPIO_PIN_4
#define KEY_X2_IN_GPIO_Port GPIOB
#define KEY_X3_IN_Pin GPIO_PIN_5
#define KEY_X3_IN_GPIO_Port GPIOB
#define MODE_1_Pin GPIO_PIN_8
#define MODE_1_GPIO_Port GPIOB
#define KEY_X4_IN_Pin GPIO_PIN_9
#define KEY_X4_IN_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
