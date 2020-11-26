/*
    Copyright 2020 <Dustin McClure>
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: recursiveExponentiation.cpp
    Author: Dustin McClure
    Lab: Lab 6b - Recursive Exponentiation
    Modified Date: 11/26/2020

    The class implementation of the recursiveExponentiation class,
    and its data members.
*/
#include "recursiveExponentiation.h"
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

// function main begins program execution
int main()
{
    // Declarations
    int raiseNumber{0};  // int base number initialized to 0
    int raiseTo{0};  // int power number initialized to 0

    // Initialize new class object of type recursiveExponentiation
    recursiveExponentiation rExp;

    // print program name to cout
    cout << "Dustin's Recursive Exponentiation Program!\n" << endl;
    cout << "============================================" << endl;

    // ask for base number and store in raiseNumber
    cout << "\nEnter the base (The number to be raised):\n"
         << "===========================================\n";
    cin >> raiseNumber;
    // ask for exponent and store in raiseTo
    cout << "\nEnter the exponent (The number to raise the base to):\n"
         << "=======================================================\n";
    cin >> raiseTo;
    cout << "--------------------------------------------------------\n"
         << endl;

    // print thre recursive representation of this using the doRecursiveExp
    // member function
    cout << raiseNumber << "^" << raiseTo <<
    " Represented Recursively Looks Like This: "
    << rExp.doRecursiveExp(raiseNumber, raiseTo) << endl;
    return 0;
};
