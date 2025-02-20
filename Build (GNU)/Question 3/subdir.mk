################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Question\ 3/Airline.cpp \
../Question\ 3/Date.cpp \
../Question\ 3/Flight.cpp \
../Question\ 3/TestAirline.cpp \
../Question\ 3/Time.cpp 

CPP_DEPS += \
./Question\ 3/Airline.d \
./Question\ 3/Date.d \
./Question\ 3/Flight.d \
./Question\ 3/TestAirline.d \
./Question\ 3/Time.d 

OBJS += \
./Question\ 3/Airline.o \
./Question\ 3/Date.o \
./Question\ 3/Flight.o \
./Question\ 3/TestAirline.o \
./Question\ 3/Time.o 


# Each subdirectory must supply rules for building sources it contributes
Question\ 3/Airline.o: ../Question\ 3/Airline.cpp Question\ 3/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"Question 3/Airline.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Question\ 3/Date.o: ../Question\ 3/Date.cpp Question\ 3/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"Question 3/Date.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Question\ 3/Flight.o: ../Question\ 3/Flight.cpp Question\ 3/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"Question 3/Flight.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Question\ 3/TestAirline.o: ../Question\ 3/TestAirline.cpp Question\ 3/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"Question 3/TestAirline.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Question\ 3/Time.o: ../Question\ 3/Time.cpp Question\ 3/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"Question 3/Time.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-Question-20-3

clean-Question-20-3:
	-$(RM) ./Question\ 3/Airline.d ./Question\ 3/Airline.o ./Question\ 3/Date.d ./Question\ 3/Date.o ./Question\ 3/Flight.d ./Question\ 3/Flight.o ./Question\ 3/TestAirline.d ./Question\ 3/TestAirline.o ./Question\ 3/Time.d ./Question\ 3/Time.o

.PHONY: clean-Question-20-3

