/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f1xx_hal.h"
#include "i2c-lcd.h"
#include "device.h"
#include "sensor.h"
#include "hardwareinit.h"


int main(void)
{
  System_Init();
  MX_TIM4_Init(2);

  HAL_TIM_Base_Start_IT(&htim4);
  lcd_init();

  while (1)
  {
	  //isi looping kosong
  }

}

