/*
    Copyright 2020 <Dustin McClure>
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: sieveOfEratosthenes.h
    Author: Dustin McClure
    Lab: Lab 6b - The Sieve of Eratosthenes
    Modified Date: 11/16/2020

    The class defition of the sieveOfEratosthenes class,
    and its data members.
*/
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cmath>
#include <ctime>
#include <vector>
#include <algorithm>

class sieveOfErastosthenes {
 public:
  sieveOfErastosthenes(){}

  void sieve(bool arrPrime[], const int *arrSz = &arraySize) {
    primeArray[*arrSz] = arrPrime[*arrSz];
  //initialize to be true (ignore the first two elements).
  for (progress = 2; progress < arraySize; progress++ ){
    primeArray[progress] = true;
  }

  for (progress = 2; progress < arraySize; progress++){
    //check if false, then next.
    if (primeArray[progress] == false)
      continue;
    //otherwise, use the number as a factor to turn off the other integers that is divisible by it.
    for (numtemp = 2* progress ; numtemp < arraySize; numtemp += progress )
      primeArray[numtemp] = false;
  }//end 1st for

  //print all primes between 2 and 999
  int count = 0;
  for (int numtemp = 0; numtemp < arraySize; numtemp++){
    if (primeArray[numtemp] == true){
      std::cout << std::setw(8) << numtemp;
      count++;
      if (count % 10 == 0)
        std::cout << std::endl;
    }//end 1st if.
  }//end for loop
  std::cout << "\nthere are " << count << " prime numbers between in [0,"<< arraySize << "] in total" << std::endl;
}

 private:
  static const int arraySize{1000};
  int numtemp{0};
  int progress{0};
  bool primeArray[arraySize];
};
