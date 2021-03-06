/*====================================================================================================*/
/*====================================================================================================*/
#include "drivers\stm32f4_system.h"

#include "smartimu.h"
/*====================================================================================================*/
/*====================================================================================================*/
void SIMU_Init( void )
{
  HAL_Init();
  SIMU_GPIO_Config();
}
/*====================================================================================================*/
/*====================================================================================================*/
void SIMU_Loop( void )
{
  while(1) {
    if(KEY_Read()) {
      LED_R_Reset();
      LED_G_Set();
      LED_B_Set();
      delay_ms(200);
      LED_R_Set();
      LED_G_Reset();
      LED_B_Set();
      delay_ms(200);
      LED_R_Set();
      LED_G_Set();
      LED_B_Reset();
      delay_ms(200);
      LED_R_Set();
      LED_G_Set();
      LED_B_Set();
    }
    else {
      LED_R_Toggle();
      LED_G_Toggle();
      LED_B_Toggle();
      delay_ms(200);
    }
  }
}
/*====================================================================================================*/
/*====================================================================================================*/
