///*
// * Flight.h
// *
// *  Created on: Feb 12, 2025
// *      Author: benjamin
// */
//#ifndef FLIGHT_H_
//#define FLIGHT_H_
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//#include "../Question 2/Passenger.h"
//#include "../Question 1/Date.h"
//using namespace std;
//
//class Flight{
//private:
//
//	//Private Data Members
//	string flightId;
//	string departureCity;
//	string arrivalCity;
//	Date departure;
//	int duration;
//	vector <Passenger> passengers;
//	vector <Date> bookingDate;
//
//public:
//
//	//Class constructors
//	Flight();
//	Flight(string, string, string, Date, int);
//	Flight(const Flight&);
//
//	//Class Destructor
//	~Flight();
//
//	//Class mutators
//	void setId(string);
//	void setDepartureCity(string);
//	void setArrivalCity(string);
//	void setDeparture(Date);
//	void setDuration(int);
//
//	//Functions to obtain information about private members
//	string getId();
//	string getDepartureCity();
//	string getArrivalCity();
//	Date getDeparture();
//	int getDuration();
//
//
//	//Member functions
//	void printFlightInfo();
//
//	//Question 4 functions
//
//	//manipulators of the passengers vector, now includes the booking date
//	void addPassenger(const Passenger&, const Date& newPassengerDate);
//	void removePassenger(string);
//	bool searchPassenger(string);
//	void displayPassengers();
//
//
//
//};
//
//#endif
