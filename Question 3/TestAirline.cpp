/*
 * TestAirline.cpp
 *
 *  Created on: Feb 19, 2025
 *      Author: jiyongjeon
 */

#include "Airline.h"
#include "Flight.h"
#include "Date.h"
#include <iostream>

int main() {
    string airlineName = "CoenAir";
    string headquarters = "1234 Engineering Blvd";

    Airline airline(airlineName, headquarters);
    cout << "Airline created with name: " << airlineName << " and headquarters: " << headquarters << endl;

    // Define some flights
    Date departureDate1(15, 2, 2025, 10, 0, 0);
    Flight flight1("CA7754", "Montreal", "Moscow", departureDate1, 22);
    Date departureDate2(16, 2, 2025, 12, 30, 0);
    Flight flight2("CA8832", "New York", "London", departureDate2, 15);

    // Add flights to the airline
    airline.addFlight(flight1);
    airline.addFlight(flight2);
    cout << "Flights added to the airline." << endl;

    // Display all flights
    airline.displayFlights();

    // Search for a specific flight
    string searchFlightId = "CA7754";
    if (airline.searchFlight(searchFlightId)) {
        cout << "Search Test Passed: Flight " << searchFlightId << " found." << endl;
    } else {
        cout << "Search Test Failed: Flight " << searchFlightId << " not found." << endl;
    }

    // Remove a flight
    airline.removeFlight("CA7754");
    cout << "Flight CA7754 removed." << endl;

    // Try to find the removed flight
    if (!airline.searchFlight("CA7754")) {
        cout << "Removal Test Passed: Flight CA7754 not found after removal." << endl;
    } else {
        cout << "Removal Test Failed: Flight CA7754 still listed after removal." << endl;
    }

    // Display flights from New York to London
    cout << "Displaying flights from New York to London:" << endl;
    airline.displayFlightsFromTo("New York", "London");

    return 0;
}
