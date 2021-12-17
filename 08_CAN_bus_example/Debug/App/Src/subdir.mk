################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App/Src/main.c \
../App/Src/printf_redirect.c \
../App/Src/stm32f7xx_it.c \
../App/Src/stm32f7xx_msp.c \
../App/Src/system_stm32f7xx.c 

OBJS += \
./App/Src/main.o \
./App/Src/printf_redirect.o \
./App/Src/stm32f7xx_it.o \
./App/Src/stm32f7xx_msp.o \
./App/Src/system_stm32f7xx.o 

C_DEPS += \
./App/Src/main.d \
./App/Src/printf_redirect.d \
./App/Src/stm32f7xx_it.d \
./App/Src/stm32f7xx_msp.d \
./App/Src/system_stm32f7xx.d 


# Each subdirectory must supply rules for building sources it contributes
App/Src/%.o: ../App/Src/%.c App/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F767xx -c -I"D:/STM32F767zi_tutorials/08_CAN_bus_example/App/Inc" -I"D:/STM32F767zi_tutorials/08_CAN_bus_example/CMSIS/Core" -I"D:/STM32F767zi_tutorials/08_CAN_bus_example/BSP/NUCLEO-F767ZI/Inc" -I"D:/STM32F767zi_tutorials/08_CAN_bus_example/CMSIS/Device" -I"D:/STM32F767zi_tutorials/08_CAN_bus_example/HAL_DRIVERS/STM32F7xx_HAL_Driver/Inc" -I"D:/STM32F767zi_tutorials/08_CAN_bus_example/HAL_DRIVERS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

