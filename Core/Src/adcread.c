/*
 * adcread.c
 *
 *  Created on: Aug 31, 2024
 *      Author: Newton Nadar
 */

#include "main.h"
#include "adcread.h"

uint32_t ADCvals[NO_OF_ADCCHANNELS];

int convCompleted=0;


void ADC_Update(uint32_t* ADCconv ){

	convCompleted=0;
	HAL_ADC_Start_DMA(&hadc1,ADCconv,NO_OF_ADCCHANNELS);


}


uint8_t getConvStatus(){

	return convCompleted; /*1 means completed*/
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc){

	convCompleted=1;
	HAL_ADC_Stop_DMA(&hadc1);
}



