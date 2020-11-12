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

#include <cstdio>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstring>
#include <cstddef>
#include <valarray>
#include <iostream>
using namespace std;

// function main begins program execution
int main()
{
  parkingCharges parkingCalc;

  // Declarations
  double time1; // double first customer time
  double time2; // double second customer time
  double time3; // double third customer time
  double chargeHours[3] = {time1, time2, time3};
  double customerCharge{0};
  double dayTotal{0};

  cout << "Parking Charge Calculator\n"
       << endl;
  cout << "=========================\n"
       << endl;

  for (int i = 0; i < 3; i++)
  {
    chargeHours[i] = 0;
    for (int x = 0; x < 3; ++x)
    {
      cout << "How many hours was the customer parked?\n";
      cin >> chargeHours[x];

      cout << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;
      cout << "====================" << endl;
      cout << setprecision(2);
      cout << "1" << setw(3) << chargeHours[x] << setw(6) << "$"
           << parkingCalc.calculateCharges(chargeHours, customerCharge) << endl;
    }
  }
  return dayTotal;

  cout << "TOTAL" << setw(13) << chargeHours[0] + chargeHours[1] + chargeHours[2]
       << setw(10) << "$" << dayTotal << endl;
  return 0;
}
