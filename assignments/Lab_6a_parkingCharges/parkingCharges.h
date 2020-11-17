/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: parkingCharges.h
    Author: Dustin McClure
    Lab: Lab 6a - Parking Charges
    Modified Date: 11/03/2020

    The class definition of the parkingCharges class,
    and its data members.
*/
#ifndef PARKINGCHARGES_H_
#define PARKINGCHARGES_H_

#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <valarray>

class parkingCharges {
 public:
  parkingCharges() {}

  double calculateCharges(float hours) {
    chargeHours = hours;
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
    float chargeHours{0.00};
    float charge{0.00};
  };
#endif
