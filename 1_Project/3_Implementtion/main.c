#include "MyStm32f407xx.h"
#include<stdio.h>
#define ButtonPress ENABLE

void Doors_Lock();
void Doors_Unlock();
void Alarm_Act_Dct();
void Approach_light();
void delayf(void);
void delay(void);

void Doors_Lock()
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

void Doors_Unlock()
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

void Alarm_Act_Dct()
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

void Approach_light()
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
 case 1: Doors_Lock();
  break;
 case 2: Doors_Unlock();
  break;
 case 3: Alarm_Act_Dct();
  break;
 case 4: Approach_light();
  break;
 default:
  break;
 }

}
