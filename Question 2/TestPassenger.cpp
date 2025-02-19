/*
 * TestPassenger.cpp
 *
 *  Created on: Feb 18, 2025
 *      Author: jiyongjeon
 */

#include <iostream>
#include "Passenger.h"

using namespace std;

int main() {
    // Testing default constructor
    Passenger p1;
    cout << "Default Constructor Test:" << endl;
    p1.printInfo();

    // Testing parameterized constructor
    Passenger p2("P001", "John", "Doe", "123 Main St, Anytown", "john.doe@example.com");
    cout << "\nParameterized Constructor Test:" << endl;
    p2.printInfo();

    // Testing copy constructor
    Passenger p3 = p2;
    cout << "\nCopy Constructor Test:" << endl;
    p3.printInfo();

    // Testing mutators
    p1.setId("P002");
    p1.setFirstName("Jane");
    p1.setLastName("Smith");
    p1.setAddress("456 Oak St, Othertown");
    p1.setEmail("jane.smith@example.com");
    cout << "\nMutator Test:" << endl;
    p1.printInfo();

    return 0;
}



