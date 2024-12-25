/*
 * transmit_abs.h
 *
 *  Created on: Dec 23, 2024
 *      Author: Newton Nadar
 */

#ifndef TRANSMIT_ABS_H_
#define TRANSMIT_ABS_H_

#include <stdint.h>

#define MIDI_OVER_UART  0
#define MIDI_OVER_USB   1

void SendMessage(uint8_t* msg, uint32_t len);
#endif /* TRANSMIT_ABS_H_ */
