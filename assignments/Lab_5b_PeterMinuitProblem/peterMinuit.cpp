/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: peterMinuit.cpp
    Author: Dustin McClure
    Lab: Lab 5b - Peter Minuit Problem
    Modified Date: 11/06/2020

    Modification of the compound interest calculator in 5.6 that varies interest
    rates and compounds for every year until 2020.
*/
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

// function main begins program execution
int main()
{
    // Set input/output stream flags for floating point number format
    cout << fixed << setprecision(2);

    // Declarations
    double amount;  // amount after interest is compounded
    double principal{24.0f};  // initial amount before interest

    // for loop to calculate varied compound interest from 5% and 10%
    for (double rate = 0.05; rate <= 0.10; rate++) {
        // display headers
        cout << "Interest rate: " << rate << "%\n" << endl;
        cout << "Year" << setw(25) << "Amount on deposit" << endl;

        // for loop to calculate the amount on deposit each year between
        // 1636 and 2020
        for (int year = 1; year <= 394; year++) {
            // amount is equal to original principal * interest rate raised
            // to the power of the difference between current year and 1626
            amount = principal * pow(1.0f + rate, year);
            cout << setw(4) << year << setw(19) << amount << endl;
        }
    }
    return 0;
}
