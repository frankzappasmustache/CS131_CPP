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
#ifndef retailCalculator_h
#define retailCalculator_h

class parkingCharges {
 public:
  double parkingCharges(double start, double min, double afterThree,
                        double max) {
    startingHours = start;
    feeMin = min;
    excessOfThree = afterThree;
    feeMax = max;
  }

 private:
  double startingHours = 3.0f;
  double feeMin = 2.0f;
  double excessOfThree = 0.5f;
  double feeMax = 10.0f;
};

#endif
