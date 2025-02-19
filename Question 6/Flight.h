/*
 * Flight.h
 *
 *  Created on: Feb 12, 2025
 *      Author: benjamin
 */
#ifndef FLIGHT_H_
#define FLIGHT_H_

#include <iostream>
#include <vector>
#include <string>

#include "../Question 2/Passenger.h"
#include "../Question 1/Date.h"
using namespace std;

class Flight{
private:
	string flightId;
	string departureCity;
	string arrivalCity;
	Date departure;
	int duration;
	vector <Passenger> passengers;
	vector <Date> bookingDate;

public:
	Flight();
	Flight(string, string, string, Date, int);
	Flight(const Flight&);
	~Flight();


	void setId(string);
	void setDepartureCity(string);
	void setArrivalCity(string);
	void setDeparture(Date);
	void setDuration(int);

	string getId();
	string getDepartureCity();
	string getArrivalCity();
	Date getDeparture();
	int getDuration();

	void printFlightInfo();

	void addPassenger(const Passenger&, const Date& newPassengerDate);
	void removePassenger(string);
	bool searchPassenger(string);
	void displayPassengers();



};

#endif
