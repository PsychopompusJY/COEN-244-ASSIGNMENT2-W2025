/*
 * TestPassenger.cpp
 *
 *  Created on: Feb 18, 2025
 *      Author: jiyongjeon
 */

//#include "Passenger.h"
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    // Test Data
//    string id = "D001";
//    string firstName = "Jiyong";
//    string lastName = "Jeon";
//    string address = "6969 suka street";
//    string email = "jiyong_jeon@example.com";
//
//    // Default Constructor Test
//    Passenger p1;
//    cout << "Default Constructor Test:" << endl;
//    p1.printInfo();
//
//    // Parameterized Constructor Test
//    Passenger p2(id, firstName, lastName, address, email);
//    cout << "\nParameterized Constructor Test:" << endl;
//    p2.printInfo();
//
//    // Copy Constructor Test
//    Passenger p3(p2);
//    cout << "\nCopy Constructor Test:" << endl;
//    p3.printInfo();
//
//    // Mutator Tests
//    cout << "\nMutator Tests:" << endl;
//    p1.setId(id);
//    if (p1.getId() == id) {
//        cout << "ID Test Passed" << endl;
//    }
//
//    p1.setFirstName(firstName);
//    if (p1.getFirstName() == firstName) {
//        cout << "First Name Test Passed" << endl;
//    }
//
//    p1.setLastName(lastName);
//    if (p1.getLastName() == lastName) {
//        cout << "Last Name Test Passed" << endl;
//    }
//
//    p1.setAddress(address);
//    if (p1.getAddress() == address) {
//        cout << "Address Test Passed" << endl;
//    }
//
//    p1.setEmail(email);
//    if (p1.getEmail() == email) {
//        cout << "Email Test Passed" << endl;
//    }
//
//    // Verifying Copy Constructor Results
//    cout << "\nVerifying Copy Constructor Results:" << endl;
//    if (p2.getId() == p3.getId()) {
//        cout << "Copy ID Test Passed" << endl;
//    }
//    if (p2.getFirstName() == p3.getFirstName()) {
//        cout << "Copy First Name Test Passed" << endl;
//    }
//    if (p2.getLastName() == p3.getLastName()) {
//        cout << "Copy Last Name Test Passed" << endl;
//    }
//    if (p2.getAddress() == p3.getAddress()) {
//        cout << "Copy Address Test Passed" << endl;
//    }
//    if (p2.getEmail() == p3.getEmail()) {
//        cout << "Copy Email Test Passed" << endl;
//    }
//
//    // Final Output to Verify All Data
//    cout << "\nFinal Passenger Info Verification:" << endl;
//    p1.printInfo();
//
//    return 0;
//}
//
//
