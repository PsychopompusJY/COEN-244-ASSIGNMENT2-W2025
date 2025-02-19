################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Question\ 4/Flight.cpp \
../Question\ 4/TestFlight.cpp 

CPP_DEPS += \
./Question\ 4/Flight.d \
./Question\ 4/TestFlight.d 

OBJS += \
./Question\ 4/Flight.o \
./Question\ 4/TestFlight.o 


# Each subdirectory must supply rules for building sources it contributes
Question\ 4/Flight.o: ../Question\ 4/Flight.cpp Question\ 4/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"Question 4/Flight.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Question\ 4/TestFlight.o: ../Question\ 4/TestFlight.cpp Question\ 4/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"Question 4/TestFlight.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-Question-20-4

clean-Question-20-4:
	-$(RM) ./Question\ 4/Flight.d ./Question\ 4/Flight.o ./Question\ 4/TestFlight.d ./Question\ 4/TestFlight.o

.PHONY: clean-Question-20-4

