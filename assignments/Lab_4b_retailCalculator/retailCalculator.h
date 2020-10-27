/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: retailCalculator.h
    Author: Dustin McClure
    Lab: Lab 3b - Retail Sales Calculator
    Modified Date: 10/27/2020

    The class definition of the class retailCalculator,
    and it's data members.
    */
#ifndef retailCalculator_h
#define retailCalculator_h

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <string>
#include <math.h>

class retailCalculator // beginning of class def for retailCalculator
{
public:
    // constructor for class retailCalculator
    retailCalculator(int prod_num, int quant, double total)
    {
        number = prod_num;
        qtySold = quant;
        totalCost = total;
    }
private:
    int qtySold{0}; // class int data member initialized to 0
    int number{0}; // class int data member initialized to 0
    double totalCost{0.00}; // class double data member initialized to 0.00
};

#endif
