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
#ifndef SIEVEOFERATOSTHENES_H_
#define SIEVEOFERATOSTHENES_H_

#include <stddef.h>
#include <stdio.h>

#include <array>
#include <cmath>
#include <iomanip>

class sieveOfErastosthenes {
 public:
  sieveOfErastosthenes() {}

  void eratosthenes(int primeArray[0]) {
    const size_t SIZE = 1000;
    prime[0] = &primeArray[0];
    primeArray[0] = 1;
    for (size_t i{0}; i < SIZE; i++) {
      if (primeArray[i] == 1 && i != 1) {
        for (size_t j = i; j <= SIZE / i; j++) primeArray[j] = 0;
      } else {
        continue;
      }
    }
  }

 private:
  int *prime[0];
};
#endif
