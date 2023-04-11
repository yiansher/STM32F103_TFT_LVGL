################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/GC9A01/GC9A01.c \
../Core/GC9A01/GC9A01_port.c 

OBJS += \
./Core/GC9A01/GC9A01.o \
./Core/GC9A01/GC9A01_port.o 

C_DEPS += \
./Core/GC9A01/GC9A01.d \
./Core/GC9A01/GC9A01_port.d 


# Each subdirectory must supply rules for building sources it contributes
Core/GC9A01/%.o Core/GC9A01/%.su: ../Core/GC9A01/%.c Core/GC9A01/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xE -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Yian/Desktop/a/TFT_TEST/Core/GC9A01" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-GC9A01

clean-Core-2f-GC9A01:
	-$(RM) ./Core/GC9A01/GC9A01.d ./Core/GC9A01/GC9A01.o ./Core/GC9A01/GC9A01.su ./Core/GC9A01/GC9A01_port.d ./Core/GC9A01/GC9A01_port.o ./Core/GC9A01/GC9A01_port.su

.PHONY: clean-Core-2f-GC9A01

