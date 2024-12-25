################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Transmit_ABS/transmit_abs.c 

OBJS += \
./Transmit_ABS/transmit_abs.o 

C_DEPS += \
./Transmit_ABS/transmit_abs.d 


# Each subdirectory must supply rules for building sources it contributes
Transmit_ABS/%.o Transmit_ABS/%.su Transmit_ABS/%.cyclo: ../Transmit_ABS/%.c Transmit_ABS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/HID/Inc -I"D:/Newton/Courses/Mastering STM32/MainProject/MIDI_Upgrage/MIDI_OCTOPAD/Transmit_ABS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Transmit_ABS

clean-Transmit_ABS:
	-$(RM) ./Transmit_ABS/transmit_abs.cyclo ./Transmit_ABS/transmit_abs.d ./Transmit_ABS/transmit_abs.o ./Transmit_ABS/transmit_abs.su

.PHONY: clean-Transmit_ABS

