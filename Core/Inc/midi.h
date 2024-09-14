/*
 * midi.h
 *
 *  Created on: Aug 31, 2024
 *      Author: Newton Nadar
 */

#ifndef INC_MIDI_H_
#define INC_MIDI_H_


#define NOTE_ON 		0x9
#define NOTE_OFF 		0x8


/*Standard octave*/
#define MIDI_C3   60
#define MIDI_D3 62
#define MIDI_E3 64
#define MIDI_F3 65
#define MIDI_G3 67
#define MIDI_A3 69
#define MIDI_B3 71
#define MIDI_C4 72



void NoteON(uint8_t Note,uint8_t channel,uint8_t velocity);
void NoteOFF(uint8_t Note,uint8_t channel,uint8_t velocity);

#endif /* INC_MIDI_H_ */
