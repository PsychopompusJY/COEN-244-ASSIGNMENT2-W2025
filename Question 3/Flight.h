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
#include "Date.h"
using namespace std;

class Flight{
private:
	string flightId;
	string departureCity;
	string arrivalCity;
	Date departure;
	int duration;

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

	string getId() const;
	string getDepartureCity() const;
	string getArrivalCity() const;
	Date getDeparture() const;
	int getDuration() const;

	void printFlightInfo() const;



};

#endif
