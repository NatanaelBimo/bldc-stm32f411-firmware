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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define HALL_U_Pin GPIO_PIN_0
#define HALL_U_GPIO_Port GPIOA
#define HALL_U_EXTI_IRQn EXTI0_IRQn
#define HALL_V_Pin GPIO_PIN_1
#define HALL_V_GPIO_Port GPIOA
#define HALL_V_EXTI_IRQn EXTI1_IRQn
#define HALL_W_Pin GPIO_PIN_2
#define HALL_W_GPIO_Port GPIOA
#define HALL_W_EXTI_IRQn EXTI2_IRQn
#define THROTTLE_Pin GPIO_PIN_7
#define THROTTLE_GPIO_Port GPIOA
#define WL_Pin GPIO_PIN_13
#define WL_GPIO_Port GPIOB
#define VL_Pin GPIO_PIN_14
#define VL_GPIO_Port GPIOB
#define UL_Pin GPIO_PIN_15
#define UL_GPIO_Port GPIOB
#define WH_Pin GPIO_PIN_8
#define WH_GPIO_Port GPIOA
#define VH_Pin GPIO_PIN_9
#define VH_GPIO_Port GPIOA
#define UH_Pin GPIO_PIN_10
#define UH_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
