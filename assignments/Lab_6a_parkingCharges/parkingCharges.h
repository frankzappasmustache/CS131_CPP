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
#ifndef parkingCharges_h
#define parkingCharges_h

#include <cmath>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <string>
#include <valarray>

class parkingCharges {
 public:
  parkingCharges() {}

  double calculateCharges(double chargeHours[0]) {
    for (int i = 0; i < 3; i++) {
      chargeHours[i] = 0;
        if (double chargeHours[] >= 3) {
          charge = 2.00;
        } else if (chargeHours[] >= 24) {
          charge = 10.00;
        } else {
          charge = 2.00 + (chargeHours[] - 3.0) * 0.50;
        }
        return charge;
      }
    }

 private:
  double charge{0};
  static const int arraySize = 3;
  double chargeHours[arraySize];
};

#endif
