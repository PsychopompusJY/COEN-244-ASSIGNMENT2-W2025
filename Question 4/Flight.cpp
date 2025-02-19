///*
// * Flight.cpp
// *
// *  Created on: Feb 12, 2025
// *      Author: benjamin
// */
//
//
//#include "Flight.h"
//
//
//Flight::Flight():departure(0,0,0,0,0,0){
//	flightId = "";
//	departureCity = "";
//	arrivalCity = "";
//	duration = 0;
//}
//
//Flight :: Flight (string flightId, string departureCity, string arrivalCity,Date departureDay, int duration): departure(departureDay){
//	this-> flightId = flightId;
//	this-> departureCity = departureCity;
//	this-> arrivalCity = arrivalCity;
//	this-> duration = duration;
//}
//
//
//Flight :: Flight (const Flight& anotherFlight): departure(anotherFlight.departure){
//	flightId = anotherFlight.flightId;
//	departureCity = anotherFlight.departureCity;
//	arrivalCity = anotherFlight.arrivalCity;
//	duration = anotherFlight.duration;
//}
//
//
//Flight :: ~Flight(){
//	cout << "Flight Destructor Executed" << endl;
//}
//
//void Flight :: setId(string Id){
//	flightId = Id;
//}
//
//void Flight :: setDepartureCity(string departureCity){
//	this -> departureCity = departureCity;
//}
//
//void Flight :: setArrivalCity(string arrivalCity){
//	this -> arrivalCity = arrivalCity;
//}
//
//void Flight :: setDeparture(Date departure){
//	this-> departure = departure;
//}
//
//void Flight :: setDuration(int duration){
//	this-> duration = duration;
//}
//
//string Flight :: getId(){
//	return flightId;
//}
//
//string Flight :: getDepartureCity(){
//	return departureCity;
//}
//
//string Flight :: getArrivalCity(){
//	return arrivalCity;
//
//}
//
//Date Flight :: getDeparture(){
//	return departure;
//}
//
//int Flight :: getDuration(){
//	return duration;
//}
//
//
//
//void Flight :: printFlightInfo(){
//	cout << "Flight Id: " << flightId << endl;
//	cout << "Departure: " << departureCity << " ";
//	departure.printDate();
//	cout << "Arrival: " << arrivalCity << endl;
//	cout << "Duration: " << duration << endl;
//	cout << "\n";
//}
//
//
//
//void Flight :: addPassenger(const Passenger& newPassenger){
//	passengers.push_back(newPassenger);
//}
//
//void Flight:: removePassenger(string passengerId){
//	for (int i = 0; i < passengers.size(); i++){
//		if (passengers[i].getId() == passengerId){
//			passengers.erase(passengers.begin() + i);
//			break;
//		}
//	}
//}
//
//bool Flight :: searchPassenger(string passengerId){
//	for (int i = 0; i < passengers.size(); i++){
//		if (passengers[i].getId() == passengerId){
//			return true;
//		}
//	}
//	return false;
//}
//
//void Flight :: displayPassengers(){
//	for (int i = 0; i < passengers.size(); i++){
//		passengers[i].printInfo();
//		cout << endl;
//	}
//}
//
//
