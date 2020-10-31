/*
	Project Name: CS131_CPP
	Sub-project: Labs
	File Name: gasMileageCalc.cpp
	Author: Dustin McClure
	Lab: Lab 3a - Gas Mileage Calculator
	Modified Date: 10/27/2020

    The Class implementation of the gasMileageCalc class and its
    data members. Uses a while loop to ask user for mile travelled
    and gallons of gas used in each trip, and calculates the average
    MPG for that trip and for all trips. Exits when user enters 01.
 //*/
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include "gasMileageCalc.h"
using namespace std;

// function main begins program execution
int main()
{
	// Initialize new class object of type gasMileageCalc
	gasMileageCalc gmCalc(int tripMiles, int tripGallons, double singleMPG, double allMPG);

    // Declarations
    double tripMiles{0}; // double tripMiles
	double tripGallons{0}; // double tripGallons
	int counter{1}; // counter to track trips added
	double singleMPG{0}; // double quotient of tripMiles and tripGallons
	double allMPG{0}; // double running total of singleMPG
	double grandTotal{0}; // double quotient of allMPG / counter

    // Begin while loop that executes while trip miles does
    // not equal 01
	while (tripMiles != 01)
	{
		// Prompt user for miles driven in 1st trip and store input in
		// tripMiles
		cout << "Enter miles driven for this trip in the format'0.00',\n"
		<< "or enter 01 to exit:\n";
		cin >> tripMiles;

        // if tripMiles equals 01 pass execution to return of int main
		if (tripMiles == 01)
			break;

        // if trip miles does not equal 01 ask for tripGallons
        // and store in tripGallons
		cout << "Enter the gallons used that you  have\n"
		<< "recorded in your log-book for this trip in\n"
		<< "the format '0.00':\n";
		cin >> tripGallons;

        // store average mpg in singleMPG and print average for trip
		singleMPG = tripMiles / tripGallons;
		cout << setiosflags(ios::fixed | ios::showpoint)
		<< "Your average MPG for this trip was: " << setprecision(2) << singleMPG << endl;

        // add each single trip average to allMPG
		allMPG += singleMPG;

		// calculate grand total by storing quotient of allMPG divided
		// by counter, and print average MPG for all trips entered
		grandTotal = allMPG / counter;
		cout << setiosflags(ios::fixed | ios::showpoint)
		<<"Your Total MPG for all trips entered is: " << setprecision(2) << grandTotal << endl;
		counter++;
	}

return 0;
};
