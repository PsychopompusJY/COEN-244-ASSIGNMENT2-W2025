//Benjamin Gutman 40315265
//Jiyong Jeon 40314593

#include "Flight.h"
#include "Date.h"

int main(){

	//Setting variables used to test the class functions
	string Id = "CoenAir 7754";
	string departureCity = "Montreal";
	string arrivalCity = "Moscow";
	int day = 15;
	int month = 2;
	int year = 2025;
	int duration = 22;
	Date departure (day, month, year, 0,0,0);


	//Use all three constructors.
	Flight flight1;
	Flight flight2(Id, departureCity, arrivalCity, departure, duration);
	Flight flight3(flight2);

	//Test the class mutators
	flight1.setId(Id);
	if (flight1.getId() == Id){
		cout << "Id Test Passed"<< endl;
	} else {
		cout << "Id Test Failed" << endl;
	}

	flight1.setDepartureCity(departureCity);
	if (flight1.getDepartureCity() == departureCity){
		cout << "Departure City Test Passed"<< endl;
	} else{
		cout << 'Departure City Test Failed' << endl;
	}

	flight1.setArrivalCity(arrivalCity);
	if (flight1.getArrivalCity() == arrivalCity){
		cout << "Arrival City Test Passed"<< endl;
	} else {
		cout << "Arrival City Test Failed" << endl;
	}

	//Must be verified by user
	flight1.setDeparture(departure);
	(flight1.getDeparture()).printDate();


	flight1.setDuration(duration);
	if (flight1.getDuration() == duration){
		cout << "Duration Test Passed"<< endl;
	} else{
		cout << "Duration Test Failed" << endl;
	}



	//Test the class copy constructor and the parameterized constructor
	if (flight2.getId() == flight3.getId()){
		cout << "Copy Id Test Passed"<< endl;
	} else{
		cout << "Copy Id Test Failed" << endl;
	}

	if (flight2.getDepartureCity() == flight3.getDepartureCity()){
		cout << "Copy Departure City Test Passed"<< endl;
	} else {
		cout << "Copy Departure City Test Failed"<< endl;
	}

	if (flight2.getArrivalCity() == flight3.getArrivalCity()){
		cout << "Copy Arrival City Test Passed"<< endl;
	} else {
		cout << "Copy Arrival City Test Failed"<< endl;
	}


	//Print both flight2 and flight 3 dates, must be verified by user
	flight2.getDeparture().printDate();
	flight3.getDeparture().printDate();



	if (flight2.getDuration() == flight3.getDuration()){
		cout << "Copy Duration Test Passed"<< endl;
	} else {
		cout << "Copy Duration Test Failed"<< endl;
	}


	//Test printFlightInfo, must be verified by user
	flight1.printFlightInfo();
}


