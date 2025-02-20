//Benjamin Gutman 40315265
//Jiyong Jeon 40314593

#include "../Question 1/Date.h"
#include "Flight.h"

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
	Flight flight1;
	Flight flight2(Id, departureCity, arrivalCity, departure, duration);
	Flight flight3(flight2);
	Passenger pass1("335477", "Benjamin", "Gutman", "243 Rue Saint Jacques", "Benjamin.Gutman@email.com");
	Passenger pass2("765498", "Jiyong", "Jeon", "553 6e Ave", "Jiyong.Jeon@email.com");
	Passenger pass3("445781", "Brianna", "Morrissette", "768 Maisonneuve", "Bri.Morr@.com");
	Date bookingDate1(14, 5, 2025, 0,0,0);
	Date bookingDate2(27, 12, 2024, 0,0,0);
	Date bookingDate3(1, 2, 2025, 0,0,0);


	//Use all three constructors.
	Flight flight1;
	Flight flight2(Id, departureCity, arrivalCity, departure, duration);
	Flight flight3(flight2);

	//Test the class mutators
	flight1.setId(Id);
	if (flight1.getId() == Id){
		cout << "Id test passed"<< endl;
	}

	flight1.setDepartureCity(departureCity);
	if (flight1.getDepartureCity() == departureCity){
		cout << "Departure City test passed"<< endl;
	}

	flight1.setArrivalCity(arrivalCity);
	if (flight1.getArrivalCity() == arrivalCity){
		cout << "Id test passed"<< endl;
	}


	// Test needs to be verified by user
	flight1.setDeparture(departure);
	(flight1.getDeparture()).printDate();

	flight1.setDuration(duration);
	if (flight1.getDuration() == duration){
		cout << "Duration Test Passed"<< endl;
	} else {
		cout << "Duration Test Failed"<< endl;
	}


	//Test the class copy constructor and the parameterized constructor
	if (flight2.getId() == flight3.getId()){
		cout << "Copy Id Test Passed"<< endl;
	} else {
		cout << "Copy Id Test Failed" << endl;
	}

	if (flight2.getDepartureCity() == flight3.getDepartureCity()){
		cout << "Copy Departure City Test Passed"<< endl;
	} else {
		cout << "Copy Departure City Test Failed" << endl;
	}

	if (flight2.getArrivalCity() == flight3.getArrivalCity()){
		cout << "Copy Arrival City Test Passed"<< endl;
	} else {
		cout << "Copy Arrival City Test Failed" << endl;
	}


	//Print both flight2 and flight 3 dates, must be verified by user
	flight2.getDeparture().printDate();
	flight3.getDeparture().printDate();



	if (flight2.getDuration() == flight3.getDuration()){
			cout << "Copy Duration Test Passed"<< endl;
		} else {
			cout << "Copy Duration Test Failed" << endl;
		}


	//Test printFlightInfo, must be verified by user
	flight1.printFlightInfo();

	//Test the functions related to passengers and bookingDate vectors

	flight1.addPassenger(pass1, bookingDate1);
	flight1.addPassenger(pass2, bookingDate2);
	flight1.addPassenger(pass3, bookingDate3);

	flight1.displayPassengers();
	if (flight1.searchPassenger("765498") == true){
		cout << "Search Passenger Test Passed" << endl;
	}

	if (flight1.searchPassenger("123456") == false){
		cout << "Search Passenger Fake ID Passed" << endl;
	}

	flight1.removePassenger("765498");
	if (flight1.searchPassenger("765498") ==false){
		cout<< "Remove Passenger Test Passed" << endl;
	}

	flight1.displayPassengers();

}


