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
  parkingCharges(double time1, double time2, double time3, double hours[]) {
    tOne = time1;
    tTwo = time2;
    tThree = time3;
    chargeHours[3] = hours[3];
  }

  inline double calculateCharges(int i) {
    double customerCharge{0.0};
    if (i >= 3) {
      customerCharge = 2.00;
    } else if (i >= 24) {
      customerCharge = 10.00;
    } else {
      customerCharge = 2.00 + (chargeHours[i] - 3.0) * 0.50;
    }
    return customerCharge;
  }

 private:
      double chargeHours[];
      double tOne{0.0};
      double tTwo{0.0};
      double tThree{0.0};
};

#endif
