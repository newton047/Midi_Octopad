/*
 * module_options.h
 *
 *  Created on: Dec 25, 2024
 *      Author: Newton Nadar
 */

#ifndef INC_MODULE_OPTIONS_H_
#define INC_MODULE_OPTIONS_H_



#define MIDI_OVER_UART  0   /*Send MIDI frame over UART, needs a software which would convert this to MIDI port on laptop*/
#define MIDI_OVER_USB   1   /*Sends MIDI signal over USB protocol*/

#define ENABLE_TEST_MODE 0 /*Periodically transmits MIDI signals*/
#endif /* INC_MODULE_OPTIONS_H_ */
