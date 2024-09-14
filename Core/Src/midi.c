/*
 * midi.c
 *
 *  Created on: Aug 31, 2024
 *      Author: Newton Nadar
 */

#include <string.h>
#include "main.h"
#include "midi.h"



void NoteON(uint8_t Note,uint8_t channel,uint8_t velocity){
	uint8_t buffer[3];
	memset(buffer,0,3);

	buffer[0] = (NOTE_ON<<4);
	buffer[0] |= (channel & 0xF0);
	buffer[1] = Note;
	buffer[2] = velocity;

	HAL_UART_Transmit(&huart2, buffer, 3, HAL_MAX_DELAY);


}


void NoteOFF(uint8_t Note,uint8_t channel,uint8_t velocity){
	uint8_t buffer[3];
	memset(buffer,0,3);

	buffer[0] = (NOTE_OFF<<4);
	buffer[0] |= (channel & 0xF0);
	buffer[1] = Note;
	buffer[2] = velocity;

	HAL_UART_Transmit(&huart2, buffer, 3, HAL_MAX_DELAY);


}
