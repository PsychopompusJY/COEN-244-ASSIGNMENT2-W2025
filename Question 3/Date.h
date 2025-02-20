/*
 * Date.h
 *
 *  Created on: Feb 12, 2025
 *      Author: benjamin
 */

#ifndef DATE_H_
#define DATE_H_

#include "Time.h"

class Date {
   public:
      Date(int, int, int, int, int, int);   // sets day, month, year, hours, minutes, seconds
      void printDate() const;   	    // print date to the screen

   private:
      int day, month, year;
      Time time;   // a component object
};




#endif /* QUESTION_1_DATE_H_ */
