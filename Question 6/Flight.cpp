//Benjamin Gutman 40315265
//Jiyong Jeon 40314593


#include "Flight.h"

//All constructors use initializer list for departure since class Date does not contain a default constructor

//Default constructor
Flight::Flight():departure(0,0,0,0,0,0){
	flightId = "";
	departureCity = "";
	arrivalCity = "";
	duration = 0;
}


//Parameterized constructor
Flight :: Flight (string flightId, string departureCity, string arrivalCity,Date departureDay, int duration): departure(departureDay){
	this-> flightId = flightId;
	this-> departureCity = departureCity;
	this-> arrivalCity = arrivalCity;
	this-> duration = duration;

}

//This is a copy constructor. This is used to copy one object onto the other
Flight :: Flight (const Flight& anotherFlight): departure(anotherFlight.departure){
	flightId = anotherFlight.flightId;
	departureCity = anotherFlight.departureCity;
	arrivalCity = anotherFlight.arrivalCity;
	duration = anotherFlight.duration;
}


//Class destructor. Not very useful to create since there are no dynamically allocated items
Flight :: ~Flight(){
	cout << "Flight Destructor Executed" << endl;
}


//class mutators
void Flight :: setId(string Id){
	flightId = Id;
}

void Flight :: setDepartureCity(string departureCity){
	this -> departureCity = departureCity;
}

void Flight :: setArrivalCity(string arrivalCity){
	this -> arrivalCity = arrivalCity;
}

void Flight :: setDeparture(Date departure){
	this-> departure = departure;
}

void Flight :: setDuration(int duration){
	this-> duration = duration;
}

//Class Getters
string Flight :: getId(){
	return flightId;
}

string Flight :: getDepartureCity(){
	return departureCity;
}

string Flight :: getArrivalCity(){
	return arrivalCity;

}

Date Flight :: getDeparture(){
	return departure;
}

int Flight :: getDuration(){
	return duration;
}



//original member functions

//This function prints the information abut the flight stored in the class.
void Flight :: printFlightInfo(){
	cout << "Flight Id: " << flightId << endl;
	cout << "Departure: " << departureCity << " ";
	departure.printDate();
	cout << "Arrival: " << arrivalCity << endl;
	cout << "Duration: " << duration << endl;
}

// Question 4 member functions


//adds a passenger to the passengers vector. Takes the input as a const reference so the passenger cannot be changed in the function
//Now adds the date the person who booked the flight
void Flight :: addPassenger(const Passenger& newPassenger, const Date& newPassengerDate){
	passengers.push_back(newPassenger);
	bookingDate.push_back(newPassengerDate);
}

//Removes a passenger from the passengers vector with the passenger Id as an input\
//Now removes booking date associated with the passenger being removed
void Flight:: removePassenger(string passengerId){
	for (int i = 0; i < passengers.size(); i++){
		if (passengers[i].getId() == passengerId){
			passengers.erase(passengers.begin() + i);
			bookingDate.erase(bookingDate.begin() + i);
			break;
		}
	}
}


//Takes a passenger id and returns true or false based on if the passenger exists
bool Flight :: searchPassenger(string passengerId){
	for (int i = 0; i < passengers.size(); i++){
		if (passengers[i].getId() == passengerId){
			return true;
		}
	}
	return false;
}


//prints out all the passengers and their data in a flight.
// Now prints the date that the passenger booked the flight
void Flight :: displayPassengers(){
	for (int i = 0; i < passengers.size(); i++){
		passengers[i].printInfo();
		cout << "Booking Date: ";
		bookingDate[i].printDate();
		cout << endl;
	}
}




