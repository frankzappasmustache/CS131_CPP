/*
    Copyright 2020 <Dustin McClure>
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: recursiveExponentiation.cpp
    Author: Dustin McClure
    Lab: Lab 6b - Recursive Exponentiation
    Modified Date: 11/07/2020

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

int main() {
  // Declarations
  int raiseNumber{0};
  int raiseTo{0};
  recursiveExponentiation rExp;

  cout << "Dustin's Recursive Exponentiation Program!\n" << endl;
  cout << "============================================" << endl;
  cout << "\nEnter the base (The number to be raised):\n"
       << "===========================================\n";
  cin >> raiseNumber;
  cout << "\nEnter the exponent (The number to raise the base to):\n"
       << "=======================================================\n";
  cin >> raiseTo;
  cout << "--------------------------------------------------------\n"
       << endl;

  cout << raiseNumber << "^" << raiseTo <<
  " Represented Recursively Looks Like This: "
  << rExp.doRecursiveExp(raiseNumber, raiseTo) << endl;
  return 0;
};
