/*
 * transmit_abs.c
 *
 *  Created on: Dec 23, 2024
 *      Author: Newton Nadar
 */


#include "transmit_abs.h"
#include "main.h"


#if MIDI_OVER_USB
#include "usbd_hid.h"
extern USBD_HandleTypeDef hUsbDeviceFS;

#endif


#if MIDI_OVER_UART

void SendMessage(uint8_t* msg, uint32_t len){

	HAL_UART_Transmit(&huart2, msg, len, HAL_MAX_DELAY);

}

#elif MIDI_OVER_USB

void SendMessage(uint8_t* msg, uint32_t len){

	while( ((USBD_HID_HandleTypeDef *) hUsbDeviceFS.pClassData)->state == USBD_HID_BUSY );
	USBD_HID_SendReport(&hUsbDeviceFS, msg, len);

}

#endif
