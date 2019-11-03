/*
 * sensor.h
 *
 *  Created on: Nov 2, 2018
 *      Author: wahyuarifin97
 */

#ifndef SENSOR_H_
#define SENSOR_H_

void tombolrunstop(void);
void tombolreset(void);
void sensor1(void);
void sensor2(void);
void sensor3(void);
void kirim_lcd(void);
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

#endif /* SENSOR_H_ */
