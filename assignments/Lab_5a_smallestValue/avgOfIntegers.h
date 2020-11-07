/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: avgOfIntegers.h
    Author: Dustin McClure
    Lab: Lab 5a - Find average of between 3 and 5 integers
    Modified Date: 11/06/2020

    The class definition of the class avgOfIntegers and its data members.
*/
#ifndef avgOfIntegers_h
#define avgOfIntegers_h

#include <iostream>
#include <cstdlib>
#include <string>

class avgOfIntegers // beginning of class definition for avgOfIntegers
{
public:
    // constructor for class avgOfIntegers
    avgOfIntegers(int numberCount, double average, int number, double sum)
    {
        count = numberCount; // initialize count data member
        avg = average; // initialize avg data member
        num = number; // initialize num data member
        add = sum; // initialize add data member
    }
private:
    int count{0}; // class int data member initialized to 0
    double avg{0.0}; // class int data member initialized to 0
    int num{0}; // class int data member initialized to 0
    double add{0.00}; // class int data member initialized to 0
};

#endif
