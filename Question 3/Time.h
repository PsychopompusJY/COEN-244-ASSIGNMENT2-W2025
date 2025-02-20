/*
 * Time.h
 *
 *  Created on: Feb 12, 2025
 *      Author: benjamin
 */

#ifndef QUESTION_1_TIME_H_
#define QUESTION_1_TIME_H_


// Class composition: Class Date uses an object of class Time.

#include <iostream>
using namespace std;

class Time {
  public:
    Time();
    void setTime( int, int ,int );
    void printTime() const;

 private:
    int hour, minute, second;
};



#endif /* QUESTION_1_TIME_H_ */
