################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/STM32F411E-Discovery/Src/stm32f411e_discovery.c \
../Drivers/BSP/STM32F411E-Discovery/Src/stm32f411e_discovery_accelerometer.c \
../Drivers/BSP/STM32F411E-Discovery/Src/stm32f411e_discovery_audio.c 

OBJS += \
./Drivers/BSP/STM32F411E-Discovery/Src/stm32f411e_discovery.o \
./Drivers/BSP/STM32F411E-Discovery/Src/stm32f411e_discovery_accelerometer.o \
./Drivers/BSP/STM32F411E-Discovery/Src/stm32f411e_discovery_audio.o 

C_DEPS += \
./Drivers/BSP/STM32F411E-Discovery/Src/stm32f411e_discovery.d \
./Drivers/BSP/STM32F411E-Discovery/Src/stm32f411e_discovery_accelerometer.d \
./Drivers/BSP/STM32F411E-Discovery/Src/stm32f411e_discovery_audio.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/STM32F411E-Discovery/Src/%.o: ../Drivers/BSP/STM32F411E-Discovery/Src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DUSE_HAL_DRIVER -DSTM32F411xE -I"E:/Projects/STM32_Peripherals/Inc" -I"E:/Projects/STM32_Peripherals/Drivers/CMSIS/Include" -I"E:/Projects/STM32_Peripherals/Drivers/STM32F4xx_HAL_Driver/Inc" -I"E:/Projects/STM32_Peripherals/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy" -I"E:/Projects/STM32_Peripherals/Drivers/STM32F4xx_HAL_Driver/Src" -I"E:/Projects/STM32_Peripherals/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"E:/Projects/STM32_Peripherals/Drivers/BSP/Components/cs43l22" -I"E:/Projects/STM32_Peripherals/Drivers/BSP/Components/Common" -I"E:/Projects/STM32_Peripherals/Drivers/BSP/Components/lsm303dlhc" -I"E:/Projects/STM32_Peripherals/Middlewares/FatFs/src" -I"E:/Projects/STM32_Peripherals/Middlewares/FatFs/src/drivers" -I"E:/Projects/STM32_Peripherals/Middlewares/FatFs/src/option" -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Core/Src -I"E:/Projects/STM32_Peripherals/Middlewares/ST/STM32_USB_Host_Library/Core/Inc" -I"E:/Projects/STM32_Peripherals/Middlewares/ST/STM32_USB_Host_Library/Core/Src" -I"E:/Projects/STM32_Peripherals/Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc" -I"E:/Projects/STM32_Peripherals/Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Src" -I"E:/Projects/STM32_Peripherals/Middlewares/ST/STM32_Audio/Addons/PDM/Inc" -I"E:/Projects/STM32_Peripherals/Drivers/BSP/STM32F411E-Discovery/Inc" -I"E:/Projects/STM32_Peripherals/Drivers/BSP/STM32F411E-Discovery/Src" -I../GPS -I"E:/Projects/STM32_Peripherals/UART" -I"E:/Projects/STM32_Peripherals/Icons" -I"E:/Projects/STM32_Peripherals/Icons/icons_collection" -I"E:/Projects/STM32_Peripherals/Audio" -I"E:/Projects/STM32_Peripherals/Touch" -I"E:/Projects/STM32_Peripherals/Images" -I"E:/Projects/STM32_Peripherals/ILI9341" -I../Temperature -I../SystemFunctions/ScreenGPS -I../SystemFunctions/ScreenText -I../SystemFunctions/ScreenMenu -I../SystemFunctions/ScreenMusic -I../SystemFunctions/ScreenImage -I../SystemFunctions/ScreenCompass -I"E:/Projects/STM32_Peripherals/Display"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


