/*
    Copyright 2020 <Dustin McClure>
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: sieveOfEratosthenes.cpp
    Author: Dustin McClure
    Lab: Lab 6 - The Sieve of Eratosthenes
    Modified Date: 11/16/2020

    The class implementation of the sieveOfEratosthenes class,
    and its data members.
*/
#include "sieveOfEratosthenes.h"

#include <stddef.h>
#include <stdio.h>

#include <array>
#include <cmath>
#include <iomanip>

using namespace std;

const size_t SIZE = 1000;

int main() {
  sieveOfErastosthenes sOE;

    array<int&, SIZE> primeArray;
    int count = 0;

  sOE.eratosthenes(*primeArray[0]);
  return 0;
};
