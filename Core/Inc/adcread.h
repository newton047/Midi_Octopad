/*
 * adcread.h
 *
 *  Created on: Aug 31, 2024
 *      Author: Newton Nadar
 */

#ifndef INC_ADCREAD_H_
#define INC_ADCREAD_H_

#include <stdint.h>

#define NO_OF_ADCCHANNELS 6

void ADC_Update(uint32_t* ADCconv );
uint8_t getConvStatus();


#endif /* INC_ADCREAD_H_ */
