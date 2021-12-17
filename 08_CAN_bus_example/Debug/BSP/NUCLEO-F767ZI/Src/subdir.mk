################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BSP/NUCLEO-F767ZI/Src/nucleo_stm32f767xx_can.c \
../BSP/NUCLEO-F767ZI/Src/nucleo_stm32f767xx_gpio.c \
../BSP/NUCLEO-F767ZI/Src/nucleo_stm32f767xx_rcc.c \
../BSP/NUCLEO-F767ZI/Src/nucleo_stm32f767xx_uart.c 

OBJS += \
./BSP/NUCLEO-F767ZI/Src/nucleo_stm32f767xx_can.o \
./BSP/NUCLEO-F767ZI/Src/nucleo_stm32f767xx_gpio.o \
./BSP/NUCLEO-F767ZI/Src/nucleo_stm32f767xx_rcc.o \
./BSP/NUCLEO-F767ZI/Src/nucleo_stm32f767xx_uart.o 

C_DEPS += \
./BSP/NUCLEO-F767ZI/Src/nucleo_stm32f767xx_can.d \
./BSP/NUCLEO-F767ZI/Src/nucleo_stm32f767xx_gpio.d \
./BSP/NUCLEO-F767ZI/Src/nucleo_stm32f767xx_rcc.d \
./BSP/NUCLEO-F767ZI/Src/nucleo_stm32f767xx_uart.d 


# Each subdirectory must supply rules for building sources it contributes
BSP/NUCLEO-F767ZI/Src/%.o: ../BSP/NUCLEO-F767ZI/Src/%.c BSP/NUCLEO-F767ZI/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"D:/STM32F767zi_tutorials/08_CAN_bus_example/App/Inc" -I"D:/STM32F767zi_tutorials/08_CAN_bus_example/CMSIS/Core" -I"D:/STM32F767zi_tutorials/08_CAN_bus_example/BSP/NUCLEO-F767ZI/Inc" -I"D:/STM32F767zi_tutorials/08_CAN_bus_example/CMSIS/Device" -I"D:/STM32F767zi_tutorials/08_CAN_bus_example/HAL_DRIVERS/STM32F7xx_HAL_Driver/Inc" -I"D:/STM32F767zi_tutorials/08_CAN_bus_example/HAL_DRIVERS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

