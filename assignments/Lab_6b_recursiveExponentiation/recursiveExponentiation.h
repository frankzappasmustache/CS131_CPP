/*
    Copyright 2020 <Dustin McClure>
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: recursiveExponentiation.h
    Author: Dustin McClure
    Lab: Lab 6b - Recursive Exponentiation
    Modified Date: 11/26/2020

    The class defition of the recursiveExponentiation class,
    and its data members.
*/

#ifndef RECURSIVEEXPONENTIATION_H_
#define RECURSIVEEXPONENTIATION_H_

#include <iostream>
#include <iomanip>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <string>

class recursiveExponentiation // beginning of class definition for recursiveExponentiation
{
public:
    // constructor for class recursiveExponentiation
    recursiveExponentiation() {};

    // member function to show recursive exponentiation that returns int
    int doRecursiveExp(int raiseNumber, int raiseTo)
    {
      baseNumber = raiseNumber; // initialize baseNumber data member
      power = raiseTo; // initialize power data member

      // if/else loop that prints an error message to cout if number is 0
      // otherwise it prints the raiseNumber + * until i equals the raiseTo number
      if(raiseTo == 0) {
        fprintf(stderr, "Please choose a number other than 0.\n");
        return 1;
      } else {
          for (int i = 1; i <= raiseTo; i++) {
              if (i == raiseTo) {
                std::cout << raiseNumber;
              } else {
                std::cout << raiseNumber << " * ";
              }
          }
          std::cout << "\n";
          std::cout << "=======================================================\n";
      }

      // after loop the result of the actual equation is stored in result, and
      // printed in the form of It Is Equal to: result
      double result = pow(raiseNumber, raiseTo);
      std::cout << std::setiosflags(std::ios::fixed | std::ios::showpoint) << std::setprecision(2)
      << "It Is Equal To: " << result;
  }

 private:
  int baseNumber{0};  // int base number initialized to 0
  int power{0};  // int power number initialized to 0
};

#endif
