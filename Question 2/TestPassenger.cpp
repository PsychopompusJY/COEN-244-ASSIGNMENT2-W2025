/*
 * TestPassenger.cpp
 *
 *  Created on: Feb 18, 2025
 *      Author: jiyongjeon
 */

#include <iostream>

#include "../Question 2/Passenger.h"

using namespace std;

int main() {
    // Testing default constructor
    Passenger p1;
    cout << "Default Constructor Test:" << endl;
    p1.printInfo();

    // Testing parameterized constructor
    Passenger p2("D001", "Jiyong", "Jeon", "6969 suka street", "jiyong_jeon@example.com");
    cout << "\nParameterized Constructor Test:" << endl;
    p2.printInfo();

    // Testing copy constructor
    Passenger p3 = p2;
    cout << "\nCopy Constructor Test:" << endl;
    p3.printInfo();

    // Testing mutators
    p1.setId("D002");
    p1.setFirstName("Benjamin");
    p1.setLastName("Gutman");
    p1.setAddress("69 hak teuh street, gok town");
    p1.setEmail("benjamin_gutman@example.com");
    cout << "\nMutator Test:" << endl;
    p1.printInfo();

    return 0;
}



