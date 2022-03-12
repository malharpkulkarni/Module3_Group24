#include "MyStm32f407xx.h"
#include<stdio.h>
#define ButtonPress ENABLE

void window_status();
void alarm_status();
void battery_info();
void door_status();
void delayf(void);
void delay(void);

void window_status()
{
 while(1)
  {
   if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == ButtonPress)
   {
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
    delayf();
   }
  }
}

void alarm_status()
{
 while(1)
  {
   if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == ButtonPress)
   {
     GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
     GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
     GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
     GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
     delayf();
   }
  }
}

void battery_info()
{
 while(1)
 {
  if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == ButtonPress)
  {
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
    delay();
    GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
    delayf();
  }
 }
}

void door_status()
{
 while(1)
  {
   if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == ButtonPress)
   {
     GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
     delay();
     GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
     delay();
     GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
     delay();
     GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
     delayf();
   }
  }
}

void delayf(void)
{
 for(unsigned long i=0;i<1000000000;i++);
}

void delay(void)
{
 for(unsigned long k=0;k<100000000;k++);
}


int main(void)
{
 GPIO_Handle_t GpioGreenLed,GpioOrangeLed,GpioRedLed,GpioBlueLed,GPIOBtn;
 GpioGreenLed.pGPIOx = GPIOD;
 GpioOrangeLed.pGPIOx = GPIOD;
 GpioRedLed.pGPIOx = GPIOD;
 GpioBlueLed.pGPIOx = GPIOD;

 GpioGreenLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
 GpioGreenLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
 GpioGreenLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
 GpioGreenLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
 GPIO_PeriClockControl(GPIOD, ENABLE);
 GPIO_Init(&GpioGreenLed);

 GpioOrangeLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
 GpioOrangeLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
 GpioOrangeLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
 GpioOrangeLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
 GPIO_PeriClockControl(GPIOD, ENABLE);
 GPIO_Init(&GpioOrangeLed);

 GpioRedLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
 GpioRedLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
 GpioRedLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
 GpioRedLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
 GPIO_PeriClockControl(GPIOD, ENABLE);
 GPIO_Init(&GpioRedLed);

 GpioBlueLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
 GpioBlueLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
 GpioBlueLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
 GpioBlueLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
 GPIO_PeriClockControl(GPIOD, ENABLE);
 GPIO_Init(&GpioBlueLed);

 GPIOBtn.pGPIOx = GPIOA;
 GPIOBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
 GPIOBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
 GPIOBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
 GPIOBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
 GPIO_PeriClockControl(GPIOA, ENABLE);
 GPIO_Init(&GPIOBtn);

 int counter= ButtonPress;
 switch(counter)
 {
 case 1: window_status();
  break;
 case 2: alarm_status();
  break;
 case 3: battery_info();
  break;
 case 4: door_status();
  break;
 default:
  break;
 }

}
