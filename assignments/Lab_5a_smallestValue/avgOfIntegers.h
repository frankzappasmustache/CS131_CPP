/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: avgOfIntegers.h
    Author: Dustin McClure
    Lab: Lab 5a - Find average of between 3 and 5 integers
    Modified Date: 10/27/2020

    The class definition of the avgOfIntegers class
*/
#ifndef avgOfIntegers_h
#define avgOfIntegers_h

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <numeric>

class avgOfIntegers
{
public:
    avgOfIntegers(int numberCount, double average, int numOne, int numTwo, int numThree, int numFour, int numFive)
    {
        count = numberCount;
        avg = average;
        one = numOne;
        two = numTwo;
        three = numThree;
        four = numFour;
        five = numFive;
    }
private:
    int count{0};
    double avg{0};
    int one{0};
    int two{0};
    int three{0};
    int four{0};
    int five{0};
};

#endif
