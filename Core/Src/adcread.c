/*
 * adcread.c
 *
 * This module is used to read ADC values using DMA.The functions are called to read and update ADC value
 * in a global structure
 *
 *  Created on: Aug 31, 2024
 *      Author: Newton Nadar
 */

#include "main.h"
#include "adcread.h"

uint32_t ADCvals[NO_OF_ADCCHANNELS];

int convCompleted=0; /*global flag to denote that conversion is complete*/

/*
 * Brief : The ADC channels are read using DMA. This function will start the DMA conversion
 *
 * Input:ADCvals Global value of ADC where DMA will store the results
 *
 *
 * Output None
 *
 * */
void ADC_Update(uint32_t* ADCconv ){

	convCompleted=0;   /*Conversion is not complete. This is set to one in DMA IRQ*/
	HAL_ADC_Start_DMA(&hadc1,ADCconv,NO_OF_ADCCHANNELS); /*Start DMA for ADC read*/


}



/*
 * Brief: This function gives the current state on conversion of DMA
 * Input:None
 * Output 1: Conversion complete
 * 		  0:Conversion not complteted
 * */
uint8_t getConvStatus(){

	return convCompleted; /*1 means completed*/
}


/*
 * Brief Callback function which is triggered from DMA conversion is completed
 * Input :- ADC Handle
 * Output :- None
 * */
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc){

	convCompleted=1;   /*DMA conversion is completed*/
	HAL_ADC_Stop_DMA(&hadc1); /*Stop DMA Conversion*/
}



