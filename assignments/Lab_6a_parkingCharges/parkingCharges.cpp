/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: parkingCharges.cpp
    Author: Dustin McClure
    Lab: Lab 6a - Parking Charges
    Modified Date: 11/26/2020

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
using namespace std;

// function main begins program execution
int main()
{
    // Initialize new class object of type parkingCharges
    parkingCharges parkingCalc;

    // Declarations
    float time1{0.00};  // float first customer time
    float time2{0.00};  // float second customer time
    float time3{0.00};  // float third customer time
    float hours{0.0};   // float hours parked

    // print program name to cout
    cout << "------------Parking Charge Calculator----------\n" << endl;
    cout << "=======================================================\n\n" << endl;

    // print tabular style headers for car, hours, and charge; setting
    // input output stream flags for fixed point and showpoint
    cout << "Car" << "\t\t\t" << "Hours" << "\t\t\t" << "Charge" << endl;
    cout << "=======================================================" << endl;
    cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);

    // for loop that starts at i = 1 for first customer, and increments for each
    // time through if/elif/else loop until it reaches 4
    for (int i = 1; i < 4; i++)
    {
      // ask how many hours customer i (1-3) was parked, and store input in hours
      cout << "How many hours was customer " << i << " parked?: ";
      cin >> hours;

      // if i is equal to 1, 2, or 3 charge is calculated as hours charged for
      // customer 1, 2, or 4 using calculateCharges member function
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

    // total is printed using calculateCharges member function to add all 3
    // calculated charges for the day
    cout << "\nTOTAL" << "\t\t\t\t\t\t" << "$"
         << parkingCalc.calculateCharges(time1) +
            parkingCalc.calculateCharges(time2) +
            parkingCalc.calculateCharges(time3)
         << setw(10) << endl;
    return 0;
};
