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

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

// function main begins program execution
int main() {
  parkingCharges parkingCalc;

  // Declarations
  double calculateCharges(double);
  double time1{0.0f};  // double first customer time
  double time2{0.0f};  // double second customer time
  double time3{0.0f};  // double third customer time
  double hours{[time1,time2,time3]};
  int arrSize = sizeof(hours);
  const double STARTING_HOURS = 3.0f;
  const double FEEMIN = 2.0f;
  const double EXCESS_OF_THREE = 0.5f;
  const double FEEMAX = 10.0f;
  int i{0};
  double charge = FEEMIN + (hours[i] - STARTING_HOURS) * EXCESS_OF_THREE;
  double dayTotal{0};

  cout << "Parking Charge Calculator\n" << endl;
  cout << "=========================\n" << endl;

  for(int i = 0; i < 2; i++) {
    cout << "How many hours was the customer parked?\n";
    cin >> hours[i];
    dayTotal+= parkingCalc.calculateCharges(hours[i], charge);
    return hours[i];
    continue;
    } return dayTotal;

    cout << "Car" << setw(10) << "Hours" << setw(10) << "Charge" << endl;
    cout << "====================" << endl;
    cout << setprecision(2);
    cout << "1" << setw(3)
    << hours[i] << setw(6)
    << "$" << parkingCalc.calculateCharges(hours[i], charge) << endl;

    dayTotal+=
        cout << "TOTAL" << setw(13)
        << hours[0] + hours[1] + hours[2] << setw(10)
        << "$" << dayTotal << endl;
  return 0;
}
