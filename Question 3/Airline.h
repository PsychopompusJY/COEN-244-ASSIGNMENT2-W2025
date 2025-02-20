/*
 * Airline.h
 *
 *  Created on: Feb 19, 2025
 *      Author: jiyongjeon
 */

#ifndef AIRLINE_H_
#define AIRLINE_H_

#include <vector>
#include <string>
#include "Flight.h"

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
    void addFlight(const Flight& flight);

    // Removes a flight from the list by flight ID
    void removeFlight(const string& flightId);

    // Searches for a flight by flight ID and returns true if found
    bool searchFlight(const string& flightId) const;

    // Displays all flights in the list
    void displayFlights() const;

    // Displays flights that match a specific departure and arrival city
    void displayFlightsFromTo(const string& from, const string& to) const;
};

#endif
