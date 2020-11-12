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

class parkingCharges
{
public:
    parkingCharges() {}

    double calculateCharges(double chargeHours[0], double customerCharge)
    {
        charge = customerCharge;
        for (int i = 0; i < 3; i++)
        {
            chargeHours = 0;
            if (chargeHours[i] >= 3)
            {
                customerCharge = 2.00;
            }
            else if (chargeHours[i] >= 24)
            {
                customerCharge = 10.00;
            }
            else
            {
                customerCharge = 2.00 + (chargeHours[i] - 3.0) * 0.50;
            }
            return customerCharge;
        }
    }

private:
    double charge{0};
    static const int arraySize = 3;
    double chargeHours[arraySize];
};

#endif
