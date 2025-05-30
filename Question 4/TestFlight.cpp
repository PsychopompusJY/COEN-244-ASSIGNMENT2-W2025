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
	Passenger pass1("335477", "Benjamin", "Gutman", "243 Rue Saint Jacques", "Benjamin.Gutman@email.com");
	Passenger pass2("765498", "Jiyong", "Jeon", "553 6e Ave", "Jiyong.Jeon@email.com");
	Passenger pass3("445781", "Brianna", "Morrissette", "768 Maisonneuve", "Bri.Morr@.com");


	//Use all three constructors.
	Flight flight1;
	Flight flight2(Id, departureCity, arrivalCity, departure, duration);
	Flight flight3(flight2);

	//Test the class mutators
	flight1.setId(Id);
	if (flight1.getId() == Id){
		cout << "Id Test Passed"<< endl;
	} else {
		cout << "Id Test Failed"<< endl;
	}

	flight1.setDepartureCity(departureCity);
	if (flight1.getDepartureCity() == departureCity){
		cout << "Departure City Test Passed"<< endl;
	} else {
		cout << "Departure City Test Failed"<< endl;
	}

	flight1.setArrivalCity(arrivalCity);
	if (flight1.getArrivalCity() == arrivalCity){
		cout << "Id Test Passed"<< endl;
	} else {
		cout << "Id Test Failed"<< endl;
	}

	// Needs to be verifid by user
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
		cout << "Copy Duration Test Failed"<< endl;
	}


	//Test printFlightInfo, must be verified by user
	flight1.printFlightInfo();


	//Test the functions associated with the passengers list

	flight1.addPassenger(pass1);
	flight1.addPassenger(pass2);
	flight1.addPassenger(pass3);


	cout << "\n\nNow Testing Passenger Functions: " << endl;
	//Tests the display passengers before removePassenger is called

	flight1.displayPassengers();


	//Search the passengers with a real and fake Id
	if (flight1.searchPassenger("765498") == true){
		cout << "Search Passenger Test Passed" << endl;
	} else {
		cout << "Search Passenger Test Failed" << endl;
	}

	if (flight1.searchPassenger("123456") == false){
		cout << "Search Passenger Fake ID Passed" << endl;
	} else {
		cout << "Search Passenger Fake ID Failed" << endl;
	}

	//remove a passenger and check with the search to test if the passenger was properly removed
	flight1.removePassenger("765498");

	//Call remove when the passenger does not exist
	flight1.removePassenger("765498");


	if (flight1.searchPassenger("765498") ==false){
		cout<< "Remove Passenger Test Passed" << endl;
	} else {
		cout<< "Remove Passenger Test Failed" << endl;
	}


	//Display passengers now that one has been removed from the list, requires user verification
	flight1.displayPassengers();

	flight1.printFlightInfo();
}


