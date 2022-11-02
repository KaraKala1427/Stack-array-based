################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../stack.c \
../stack_test.c \
../stack_time.c 

C_DEPS += \
./stack.d \
./stack_test.d \
./stack_time.d 

OBJS += \
./stack.o \
./stack_test.o \
./stack_time.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./stack.d ./stack.o ./stack_test.d ./stack_test.o ./stack_time.d ./stack_time.o

.PHONY: clean--2e-

