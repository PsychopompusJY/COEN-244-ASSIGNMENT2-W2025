////Benjamin Gutman 40315265
////Jiyong Jeon 40314593
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
//	//private data members
//	string flightId;
//	string departureCity;
//	string arrivalCity;
//	Date departure;
//	int duration;
//	vector <Passenger> passengers;
//
//public:
//
//	//class constructors
//	Flight();
//	Flight(string, string, string, Date, int);
//	Flight(const Flight&);
//
//	//class destructor
//	~Flight();
//
//	//class mutators
//	void setId(string);
//	void setDepartureCity(string);
//	void setArrivalCity(string);
//	void setDeparture(Date);
//	void setDuration(int);
//
//	//Obtain private class members
//	string getId();
//	string getDepartureCity();
//	string getArrivalCity();
//	Date getDeparture();
//	int getDuration();
//
//
//	//Class member functions
//
//	void printFlightInfo();
//
//
//	//Question 4 functions
//
//	//manipulators of the passengers vector
//	void addPassenger(const Passenger&);
//	void removePassenger(string);
//	bool searchPassenger(string);
//	void displayPassengers();
//
//
//
//};
//
//#endif
