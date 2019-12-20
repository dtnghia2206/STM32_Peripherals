################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include startup/subdir.mk
-include UART/subdir.mk
-include Touch/subdir.mk
-include Src/subdir.mk
-include Middlewares/ST/STM32_USB_Host_Library/Core/Src/subdir.mk
-include Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Src/subdir.mk
-include Middlewares/FatFs/src/option/subdir.mk
-include Middlewares/FatFs/src/subdir.mk
-include Icons/subdir.mk
-include ILI9341/subdir.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Drivers/BSP/STM32F411E-Discovery/Src/subdir.mk
-include Drivers/BSP/Components/lsm303dlhc/subdir.mk
-include Drivers/BSP/Components/cs43l22/subdir.mk
-include Display/subdir.mk
-include Audio/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: STM32_Peripherals.elf

# Tool invocations
STM32_Peripherals.elf: $(OBJS) $(USER_OBJS) ../STM32F411VETx_FLASH.ld
	@echo 'Building target: $@'
	@echo 'Invoking: MCU GCC Linker'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -L"E:\Projects\STM32_Peripherals\Middlewares\ST\STM32_Audio\Addons\PDM\Lib"  -specs=nosys.specs -specs=nano.specs -u _printf_float -T"../STM32F411VETx_FLASH.ld" -Wl,-Map=output.map -Wl,--gc-sections -o "STM32_Peripherals.elf" @"objects.list" $(USER_OBJS) $(LIBS) -lm
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

post-build:
	-@echo 'Generating hex and Printing size information:'
	arm-none-eabi-objcopy -O ihex "STM32_Peripherals.elf" "STM32_Peripherals.hex"
	arm-none-eabi-size "STM32_Peripherals.elf"
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
