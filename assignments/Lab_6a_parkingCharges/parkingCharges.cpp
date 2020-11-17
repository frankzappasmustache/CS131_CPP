/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: parkingCharges.cpp
    Author: Dustin McClure
    Lab: Lab 6a - Parking Charges
    Modified Date: 11/03/2020

    The class implementation of the parkingCharges class,
    and its data members.
*/
#include "parkingCharges.h"

#include <math.h>
#include <stddef.h>
#include <stdio.h>

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
#include <valarray>
using namespace std;

// function main begins program execution
int main() {
  parkingCharges parkingCalc;
  // Declarations
  float time1{0.00};  // double first customer time
  float time2{0.00};  // double second customer time
  float time3{0.00};  // double third customer time
  float hours{0.0};

  cout << "------------Parking Charge Calculator----------\n" << endl;
  cout << "=======================================================\n\n" << endl;

  cout << "Car" << "\t\t\t" << "Hours" << "\t\t\t" << "Charge" << endl;
  cout << "=======================================================" << endl;
  cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);

  for (int i = 1; i < 4; i++) {
    cout << "How many hours was customer " << i << " parked?: ";
    cin >> hours;

    if (i == 1) {
      time1 = hours;
      cout << "\n1" << "\t\t\t" << time1 << "\t\t\t" << "$"
           << parkingCalc.calculateCharges(time1) << "\n" << endl;
    } else if (i == 2) {
      time2 = hours;
      cout << "\n2" << "\t\t\t" << time2 << "\t\t\t" << "$"
           << parkingCalc.calculateCharges(time2) << "\n" << endl;
    } else {
      time3 = hours;
      cout << "\n3" << "\t\t\t" << time3 << "\t\t\t" << "$"
           << parkingCalc.calculateCharges(time3) << "\n" << endl;
    }
  }
  cout << "\nTOTAL" << "\t\t\t\t\t\t" << "$"
       << parkingCalc.calculateCharges(time1) +
              parkingCalc.calculateCharges(time2) +
              parkingCalc.calculateCharges(time3)
       << setw(10) << endl;
  return 0;
};
