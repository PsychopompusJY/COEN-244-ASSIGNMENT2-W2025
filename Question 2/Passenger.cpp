/*
 * Passenger.cpp
 *
 *  Created on: Feb 18, 2025
 *      Author: jiyongjeon
 */

#include "../Question 2/Passenger.h"

#include <iostream>

using namespace std;

// Default Constructor
Passenger::Passenger() : id(""), firstName(""), lastName(""), address(""), email("") {}

// Parameterized Constructor
Passenger::Passenger(string id, string firstName, string lastName, string address, string email)
    : id(id), firstName(firstName), lastName(lastName), address(address), email(email) {}

// Copy Constructor
Passenger::Passenger(const Passenger &other)
    : id(other.id), firstName(other.firstName), lastName(other.lastName), address(other.address), email(other.email) {}

// Destructor
Passenger::~Passenger() {}

// Accessor Methods
string Passenger::getId() const { return id; }
string Passenger::getFirstName() const { return firstName; }
string Passenger::getLastName() const { return lastName; }
string Passenger::getAddress() const { return address; }
string Passenger::getEmail() const { return email; }

// Mutator Methods
void Passenger::setId(string id) { this->id = id; }
void Passenger::setFirstName(string firstName) { this->firstName = firstName; }
void Passenger::setLastName(string lastName) { this->lastName = lastName; }
void Passenger::setAddress(string address) { this->address = address; }
void Passenger::setEmail(string email) { this->email = email; }

// Print Information
void Passenger::printInfo() const {
    cout << "Passenger ID: " << id << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Address: " << address << endl;
    cout << "Email: " << email << endl;
}



