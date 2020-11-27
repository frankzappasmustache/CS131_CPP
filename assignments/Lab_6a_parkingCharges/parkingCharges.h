/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: parkingCharges.h
    Author: Dustin McClure
    Lab: Lab 6a - Parking Charges
    Modified Date: 11/26/2020

    The class definition of the parkingCharges class,
    and its data members.
*/
#ifndef PARKINGCHARGES_H_
#define PARKINGCHARGES_H_

#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

class parkingCharges // beginning of class definition for parkingCharges
{
public:
    // constructor for class avgOfIntegers
    parkingCharges() {}

    // member function that returns charge in double
    double calculateCharges(float hours)
    {
      chargeHours = hours; // initialize chargeHours data member
      // if elseif loop to calculate charge based on hours parked.
      if (hours <= 3) {
        charge = 2.00;
      } else if(hours >= 24) {
        charge = 10.00;
      } else if(hours <= 24 && hours >= 3) {
        charge = 2.00 + (hours - 3.00) * 0.50;
      }
      return charge;
    }

private:
    float chargeHours{0.00}; // float number of hours parked initialized to 0.00
    float charge{0.00}; // float charge initialized to 0.00
};
#endif
