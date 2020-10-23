/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: retailCalculator.cpp
    Author: Dustin McClure
    Lab: Lab 3a - Retail Sales Calculator
    Modified Date: 10/22/2020

    The Class implementation for the gasMileage def
 //*/
#ifndef retailCalculator_h
#define retailCalculator_h

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <string>
#include <math.h>

class retailCalculator
{
public:
    retailCalculator(int prod_num, int quant, double cost, double total, double totalCost, double totalQuant)
    {
        number = prod_num;
        qtySold = quant;
    }
private:
    int qtySold{0};
    int number;
    double totalQuant[5] = {};
    double cost[5] = {};
    double total[5] = {};
    double totalCost[5] = {};
};

#endif
