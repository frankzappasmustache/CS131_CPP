/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: retailCalculator.cpp
    Author: Dustin McClure
    Lab: Lab 3b - Retail Sales Calculator
    Modified Date: 10/27/2020

    The class implementation of the retailCalculator class,
    and its data members. Uses a sentinel controlled while loop
    that executes until the user enters 10 (the sentinel value),
    and then passes execution outside of the while loop where
    the total is calculated.
*/
#include "retailCalculator.h"
#include <math.h>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// function main begins program execution
int main()
{

   // Initialize new class object of type retailCalculator
   retailCalculator rCalc(int prod_num, int quant, double total);
   {
    // Declarations
     int prod_num{0}; // initialize int prod_num to 0
     int quant{0}; // initialize int quant to 0
     double total{0.00}; // initialize double total to 0.00

     // Begin sentinel controlled while loop that executes while true
     // that prod_num does not equal 10
     while (prod_num != 10)
     {
        // prompt user for product number and store input
        // in prod_num
        cout << "Please enter the product number (1-5)."
        << "If you would like to exit enter 10:\n";
        cin >> prod_num;

        // if prod_num equals 10 do not ask for quantity and
        // pass execution to totals calculator
        if (prod_num == 10)
          break;

        // if prod_num does not equal 10 ask for quantity and
        // store input in quant
        cout << "Please enter the product quantity:\n";
        cin >> quant;

        // Begin switch statement taking prod_num as an
        // argument variable for which case to execute.
        // Multiply quantity by product price, adding the
        // result to a running total stored in the total variable.
        // If no case matches then go to default and prompt
        // user for new product number input.
        switch (prod_num)
        {
          case 1:
              total += quant * 2.98;
              break;

          case 2:
              total += quant * 4.50;
              break;

          case 3:
              total += quant * 9.98;
              break;

          case 4:
              total += quant * 4.49;
              break;

          case 5:
              total += quant * 6.87;
              break;

          default:
              cout << "\n**THIS IS NOT A VALID PRODUCT NUMBER.**\n\n";
              break;
        }
     }
          // Print total. Setting precision to 2 decimals, input/output
          // stream flags to write ouput values in fixed-point notation
          // and show the decimal point even for values ending in .00
          cout << setiosflags(ios::fixed | ios::showpoint)
          << "\n\nThe total retail value of all products is:" << setprecision(2)
          << total << endl;
    }
        return 0;
};
