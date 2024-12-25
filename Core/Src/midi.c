/*
 * midi.c
 *
 *  Created on: Aug 31, 2024
 *      Author: Newton Nadar
 */

#include <string.h>
#include "main.h"
#include "midi.h"
#include "transmit_abs.h"



void NoteON(uint8_t Note,uint8_t channel,uint8_t velocity){
	uint8_t buffer[3];
	memset(buffer,0,3);
#if MIDI_OVER_UART
	buffer[0] = (NOTE_ON<<4);
	buffer[0] |= (channel & 0xF0);
	buffer[1] = Note;
	buffer[2] = velocity;
	SendMessage( buffer, 3);
#elif MIDI_OVER_USB

	buffer[0]  = (NOTE_ON);
	buffer[1] |= ((NOTE_ON<<4)|(channel & 0xF0));
	buffer[2]  = Note;
	buffer[3]  = velocity;
	SendMessage( buffer, 4);
#endif




}


void NoteOFF(uint8_t Note,uint8_t channel,uint8_t velocity){
	uint8_t buffer[3];
	memset(buffer,0,3);
#if MIDI_OVER_UART
	buffer[0] = (NOTE_OFF<<4);
	buffer[0] |= (channel & 0xF0);
	buffer[1] = Note;
	buffer[2] = velocity;
	SendMessage( buffer, 3);
#elif MIDI_OVER_USB
	buffer[0]  = (NOTE_OFF);
	buffer[1]  |= ((NOTE_OFF<<4)|(channel & 0xF0));
	buffer[2]  = Note;
	buffer[3]  = velocity;
	SendMessage( buffer, 4);
#endif




}
