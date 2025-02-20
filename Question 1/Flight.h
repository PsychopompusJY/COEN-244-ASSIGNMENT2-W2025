//Benjamin Gutman 40315265
//Jiyong Jeon 40314593


#ifndef FLIGHT_H_
#define FLIGHT_H_

#include <iostream>
#include <vector>
#include <string>
#include "Date.h"
using namespace std;

class Flight{
private:

	//Members of the class
	string flightId;
	string departureCity;
	string arrivalCity;
	Date departure;
	int duration;

public:

	//Class constructors
	Flight();
	Flight(string, string, string, Date, int);
	Flight(const Flight&);

	//Class Destructor
	~Flight();

	//Class mutators
	void setId(string);
	void setDepartureCity(string);
	void setArrivalCity(string);
	void setDeparture(Date);
	void setDuration(int);

	//Functions to obtain information about private members
	string getId();
	string getDepartureCity();
	string getArrivalCity();
	Date getDeparture();
	int getDuration();


	//Member functions
	void printFlightInfo();



};

#endif
