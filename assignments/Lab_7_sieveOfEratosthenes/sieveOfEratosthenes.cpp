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

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    sieveOfErastosthenes sOE;
    bool arrPrime[] = {};
    sOE.sieve(arrPrime);
    return 0;
};
