/*
 * device.h
 *
 *  Created on: Nov 2, 2018
 *      Author: wahyuarifin97
 */

#ifndef DEVICE_H_
#define DEVICE_H_

I2C_HandleTypeDef hi2c2;
TIM_HandleTypeDef htim2;
TIM_HandleTypeDef htim4;
UART_HandleTypeDef huart1;

#define User_LED_Pin GPIO_PIN_13
#define User_LED_GPIO_Port GPIOC
#define Buzzer_Pin GPIO_PIN_12
#define Buzzer_GPIO_Port GPIOB
#define Button_RunStop_Pin GPIO_PIN_6
#define Button_RunStop_GPIO_Port GPIOA
#define Button_Reset_Pin GPIO_PIN_7
#define Button_Reset_GPIO_Port GPIOA
#define Sensor1_Pin GPIO_PIN_3
#define Sensor1_GPIO_Port GPIOB
#define Sensor2_Pin GPIO_PIN_4
#define Sensor2_GPIO_Port GPIOB
#define Sensor3_Pin GPIO_PIN_5
#define Sensor3_GPIO_Port GPIOB

#endif /* DEVICE_H_ */
