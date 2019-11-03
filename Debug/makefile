################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include startup/subdir.mk
-include Src/subdir.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
rizqi.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
rizqi.list \

OBJCOPY_HEX += \
rizqi.hex \


# All Target
all: rizqi.elf secondary-outputs

# Tool invocations
rizqi.elf: $(OBJS) $(USER_OBJS) ../STM32F103C8Tx_FLASH.ld
	arm-none-eabi-gcc -o "rizqi.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"../STM32F103C8Tx_FLASH.ld" --specs=nosys.specs -Wl,-Map="rizqi.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

rizqi.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "rizqi.list"
	@echo 'Finished building: $@'
	@echo ' '

rizqi.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "rizqi.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
