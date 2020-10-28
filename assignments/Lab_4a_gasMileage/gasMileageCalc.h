/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: gasMileageCalc.h
    Author: Dustin McClure
    Lab: Lab 3a - Gas Mileage Calculator
    Modified Date: 10/27/2020

    The class definition for class gasMileageCalc
    and its data members.
 //*/

#ifndef gasMileageCalc_h
#define gasMileageCalc_h


class gasMileageCalc // beginning of class def for gasMileageCalc
{
public:
    // constructor for class gasMileageCalc
    gasMileageCalc(int tripMiles, int tripGallons, double singleMPG, double allMPG, double grandTotal)
    {
        miles = tripMiles; // initialize miles data member
        gallons = tripGallons; // initialize gallons data member
        tripMPG = singleMPG; // initialize tripMPG data member
        totalMPG = allMPG; // initialize totalMPG data member
        totalTotal = grandTotal; // initialize totalTotal data member
    }

private:
    int miles{0}; // class int data member initialized to 0
    int gallons{0}; // class int data member initialized to 0
    double tripMPG{0}; // class double data member initialized to 0
    double totalMPG{0}; // class double data member initialized to 0
    double totalTotal{0}; // class double data member initialized to 0
};

#endif
