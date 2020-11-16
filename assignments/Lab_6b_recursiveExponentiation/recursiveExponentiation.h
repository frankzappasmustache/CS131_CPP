/*
    Copyright 2020 <Dustin McClure>
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: recursiveExponentiation.h
    Author: Dustin McClure
    Lab: Lab 6b - Recursive Exponentiation
    Modified Date: 11/07/2020

    The class defition of the recursiveExponentiation class,
    and its data members.
*/

#ifndef RECURSIVEEXPONENTIATION_H_
#define RECURSIVEEXPONENTIATION_H_

#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <iostream>
#include <string>

class recursiveExponentiation {
 public:
    recursiveExponentiation() {};

  int doRecursiveExp(int raiseNumber, int raiseTo) {
    baseNumber = raiseNumber;
    power = raiseTo;

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
    int result = (raiseNumber * pow(raiseNumber, raiseTo -1));
    std::cout << "It Is Equal To: " << result;
  }

 private:
  int baseNumber;
  int power;
};

#endif
