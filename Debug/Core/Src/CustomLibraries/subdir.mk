################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/Src/CustomLibraries/ReadBlueButtonClass.cpp 

OBJS += \
./Core/Src/CustomLibraries/ReadBlueButtonClass.o 

CPP_DEPS += \
./Core/Src/CustomLibraries/ReadBlueButtonClass.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/CustomLibraries/ReadBlueButtonClass.o: ../Core/Src/CustomLibraries/ReadBlueButtonClass.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m3 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DSTM32F103xB -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I"/home/presmanes3/STM32CubeIDE/workspace_1.3.0/STM_Basics/Core/Src/CustomLibraries" -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"Core/Src/CustomLibraries/ReadBlueButtonClass.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

