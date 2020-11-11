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

  double calculateCharges(int i = 0, double charge, double chargeHours[0]) {
    finalCharge = charge;
    if (chargeHours[i] >= 3) {
      charge = 2.00;
    } else {
      charge = 2.00 + (hours - 3.0) * 0.50;
    }
    return charge;
  }
 private:
    double finalCharge{0};
    double chargeHours[3] = {0, 0, 0};
};

#endif
