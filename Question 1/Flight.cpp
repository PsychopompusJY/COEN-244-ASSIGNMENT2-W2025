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


//Class destructor. Not very useful to create sincde there are no dynamically allocated items
Flight :: ~Flight(){
	cout << "Flight Destructor Executed" << endl;
}


//class mustators
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














