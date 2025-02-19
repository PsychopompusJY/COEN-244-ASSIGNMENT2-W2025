################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Question\ 6/Flight.cpp \
../Question\ 6/TestFlight.cpp 

CPP_DEPS += \
./Question\ 6/Flight.d \
./Question\ 6/TestFlight.d 

OBJS += \
./Question\ 6/Flight.o \
./Question\ 6/TestFlight.o 


# Each subdirectory must supply rules for building sources it contributes
Question\ 6/Flight.o: ../Question\ 6/Flight.cpp Question\ 6/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"Question 6/Flight.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Question\ 6/TestFlight.o: ../Question\ 6/TestFlight.cpp Question\ 6/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"Question 6/TestFlight.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-Question-20-6

clean-Question-20-6:
	-$(RM) ./Question\ 6/Flight.d ./Question\ 6/Flight.o ./Question\ 6/TestFlight.d ./Question\ 6/TestFlight.o

.PHONY: clean-Question-20-6

