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
  parkingCalc(double time1, double time2, double time3, double hours[]) {
  double time1{0.0f};  // double first customer time
  double time2{0.0f};  // double second customer time
  double time3{0.0f};  // double third customer time
  double hours[3]{time1, time2, time3};
}
  // Declarations

  cout << "Parking Charge Calculator\n" << endl;
  cout << "=========================\n" << endl;
  for (int i = 0; i < 3; i++) {
    cout << "How many hours was the customer parked?\n";
    cin >> hours[i];

    cout << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;
    cout << "====================" << endl;
    cout << setprecision(2);
    cout << "1" << setw(3) << i << setw(6) << "$"
         << parkingCalc.calculateCharges(i) << endl;
  }
  cout << "TOTAL" << setw(13) << "$" << hours[0] + hours[1] + hours[2]
       << setw(10) << endl;
  return 0;
};
