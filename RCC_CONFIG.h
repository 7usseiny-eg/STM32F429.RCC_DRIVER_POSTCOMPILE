/********************************************** 
* Module: RCC CONFIGURATION OPTIONS
*
* File Name: RCC_CONFIG.h
*
* Description: RCC Configuration options
*
* LAYER: MCAL
*
* Author: Omar El Hussein

**********************************************/

#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_
#include "STD_TYPES.h"
typedef enum{
	AHB1 = 0,
	AHB2,
	AHB3,
	APB1,
	APB2
} busName_t;

typedef enum{
	HSE = 0,
	HSI,
	PLL
	
} clkSrcName_t;

typedef enum{
	HSE_Crystal = 0,
	HSE_RC
} HSESrcName_t;

typedef enum{
	PLL_HSE = 0,
	PLL_HSI
} PLLSrcName_t;

typedef enum{
	AHB_Pre1=0,
	AHB_Pre2,
	AHB_Pre4,
	AHB_Pre8,
	AHB_Pre16,
	AHB_Pre64,
	AHB_Pre128,
	AHB_Pre256,
	AHB_Pre512
} AHBPreValue_t;

typedef enum{
	APB1_Pre1 = 0,
	APB1_Pre2,
	APB1_Pre4,
	APB1_Pre8,
	APB1_Pre16
} APB1_PreValue_t;

typedef enum{
	APB2_Pre1 = 0,
	APB2_Pre2,
	APB2_Pre4,
	APB2_Pre8,
	APB2_Pre16
} APB2_PreValue_t;

#endif
