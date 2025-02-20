/*
 * Passenger.h
 *
 *  Created on: Feb 18, 2025
 *      Author: jiyongjeon
 */

#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>
using namespace std;

class Passenger {
private:
    string id;
    string firstName;
    string lastName;
    string address;
    string email;

public:
    // Constructors
    Passenger();
    Passenger(string id, string firstName, string lastName, string address, string email);
    Passenger(const Passenger &other); // Copy Constructor

    // Destructor
    ~Passenger();

    // Accessors
    string getId() const;
    string getFirstName() const;
    string getLastName() const;
    string getAddress() const;
    string getEmail() const;

    // Mutators
    void setId(string id);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setAddress(string address);
    void setEmail(string email);

    // Print Function
    void printInfo() const;
};

#endif /* PASSENGER_H */
