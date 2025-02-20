//Benjamin Gutman 40315265
//Jiyong Jeon 40314593

#ifndef AIRLINE_H_
#define AIRLINE_H_

#include <vector>
#include <string>
#include "Flight.h"
using namespace std;

class Airline {
private:
    string companyName;              // Name of the airline company
    string headquartersAddress;      // Address of the airline headquarters
    vector<Flight> flights;          // List of flights managed by the airline

public:
    // Constructor to initialize the airline with a name and address
    Airline(string name, string address);

    // Copy constructor
    Airline(const Airline& other);

    // Destructor
    ~Airline();

    // Adds a flight to the list of managed flights
    void addFlight( Flight flight);

    // Removes a flight from the list by flight ID
    void removeFlight( string flightId);

    // Searches for a flight by flight ID and returns true if found
    bool searchFlight( string flightId);

    // Displays all flights in the list
    void displayFlights();

    // Displays flights that match a specific departure and arrival city
    void displayFlightsFromTo( string from, string to);
};

#endif
