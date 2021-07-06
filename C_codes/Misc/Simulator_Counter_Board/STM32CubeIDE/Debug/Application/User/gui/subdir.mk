################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
D:/GIT/Codeblocks/C_codes/Misc/Simulator_Counter_Board/TouchGFX/gui/src/common/FrontendApplication.cpp \
D:/GIT/Codeblocks/C_codes/Misc/Simulator_Counter_Board/TouchGFX/gui/src/main_screen/MainPresenter.cpp \
D:/GIT/Codeblocks/C_codes/Misc/Simulator_Counter_Board/TouchGFX/gui/src/main_screen/MainView.cpp \
D:/GIT/Codeblocks/C_codes/Misc/Simulator_Counter_Board/TouchGFX/gui/src/model/Model.cpp 

OBJS += \
./Application/User/gui/FrontendApplication.o \
./Application/User/gui/MainPresenter.o \
./Application/User/gui/MainView.o \
./Application/User/gui/Model.o 

CPP_DEPS += \
./Application/User/gui/FrontendApplication.d \
./Application/User/gui/MainPresenter.d \
./Application/User/gui/MainView.d \
./Application/User/gui/Model.d 


# Each subdirectory must supply rules for building sources it contributes
Application/User/gui/FrontendApplication.o: D:/GIT/Codeblocks/C_codes/Misc/Simulator_Counter_Board/TouchGFX/gui/src/common/FrontendApplication.cpp Application/User/gui/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DSTM32H750xx -DUSE_HAL_DRIVER -DVECT_TAB_QSPI -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/target/generated -I../../Drivers/BSP/STM32H750B-DK -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/BSP/Components/Common -I../../TouchGFX/gui/include -I../../TouchGFX/generated/texts/include -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../TouchGFX/generated/images/include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../TouchGFX/generated/fonts/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"Application/User/gui/FrontendApplication.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Application/User/gui/MainPresenter.o: D:/GIT/Codeblocks/C_codes/Misc/Simulator_Counter_Board/TouchGFX/gui/src/main_screen/MainPresenter.cpp Application/User/gui/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DSTM32H750xx -DUSE_HAL_DRIVER -DVECT_TAB_QSPI -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/target/generated -I../../Drivers/BSP/STM32H750B-DK -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/BSP/Components/Common -I../../TouchGFX/gui/include -I../../TouchGFX/generated/texts/include -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../TouchGFX/generated/images/include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../TouchGFX/generated/fonts/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"Application/User/gui/MainPresenter.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Application/User/gui/MainView.o: D:/GIT/Codeblocks/C_codes/Misc/Simulator_Counter_Board/TouchGFX/gui/src/main_screen/MainView.cpp Application/User/gui/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DSTM32H750xx -DUSE_HAL_DRIVER -DVECT_TAB_QSPI -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/target/generated -I../../Drivers/BSP/STM32H750B-DK -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/BSP/Components/Common -I../../TouchGFX/gui/include -I../../TouchGFX/generated/texts/include -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../TouchGFX/generated/images/include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../TouchGFX/generated/fonts/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"Application/User/gui/MainView.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Application/User/gui/Model.o: D:/GIT/Codeblocks/C_codes/Misc/Simulator_Counter_Board/TouchGFX/gui/src/model/Model.cpp Application/User/gui/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DSTM32H750xx -DUSE_HAL_DRIVER -DVECT_TAB_QSPI -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/target/generated -I../../Drivers/BSP/STM32H750B-DK -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/BSP/Components/Common -I../../TouchGFX/gui/include -I../../TouchGFX/generated/texts/include -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../TouchGFX/generated/images/include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../TouchGFX/generated/fonts/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"Application/User/gui/Model.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

