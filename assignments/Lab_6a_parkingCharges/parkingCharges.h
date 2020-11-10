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

class parkingCharges {
 public:
  parkingCharges()
  {

  }

  double calculateCharges(double hours, double charge) {
    int i{0};
    chargeHours = hours;
    finalCharge = charge;
    const double STARTING_HOURS = 3.0f;
    const double FEEMIN = 2.0f;
    const double EXCESS_OF_THREE = 0.5f;
    const double FEEMAX = 10.0f;

    if (i >= 24) {
      return FEEMAX;
    } else if (i <= STARTING_HOURS) {
      return FEEMIN;
    } else {
      return charge;
    }
  }
 private:
    double finalCharge{0};
    double chargeHours{};
};

#endif
