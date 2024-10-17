#include "stm32f4xx.h"                  // Device header

/*
4*4矩阵键盘

*/

int KEY_Scan(void)
{
	
int KEY_Return = 0;
/*====扫描第一列=====*/
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,1);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,0);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14,0);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_15,0);
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_2) == 1) KEY_Return = 1;
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_4) == 1) KEY_Return = 5;
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_5) == 1) KEY_Return = 9;
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_9) == 1) KEY_Return = 13;
	
/*====扫描第二列=====*/
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,0);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,1);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14,0);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_15,0);
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_2) == 1) KEY_Return = 2;
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_4) == 1) KEY_Return = 6;
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_5) == 1) KEY_Return = 10;
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_9) == 1) KEY_Return = 14;

/*====扫描第三列=====*/
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,0);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,0);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14,1);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_15,0);
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_2) == 1) KEY_Return = 3;
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_4) == 1) KEY_Return = 7;
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_5) == 1) KEY_Return = 11;
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_9) == 1) KEY_Return = 15;

/*====扫描第四列=====*/
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,0);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,0);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14,0);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_15,1);
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_2) == 1) KEY_Return = 4;
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_4) == 1) KEY_Return = 8;
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_5) == 1) KEY_Return = 12;
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_9) == 1) KEY_Return = 16;
//移植之后要注释掉
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,1);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,1);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14,1);
HAL_GPIO_WritePin(GPIOB,GPIO_PIN_15,1);
//特定代码
return KEY_Return;
}
