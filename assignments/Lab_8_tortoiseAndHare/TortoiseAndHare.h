/*
    Copyright 2020 <Dustin McClure>
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: TortiseAndHare.h
    Author: Dustin McClure
    Lab: Lab 7 - The Tortise and The Hare
    Modified Date: 12/15/2020

    The class defition of the TortiseAndHare class,
    and its data members.
*/
#ifndef TortoiseAndHare_h
#define TortoiseAndHare_h

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>
#include <string>
#include <vector>

class TortoiseAndHare
{
  public:
    TortoiseAndHare(int &mrT, int &mrH)
    {
        turtle = &mrT;
        hare = &mrH;
    }
    void start(int);

  private:
    int *turtle;
    int *hare;
    int timer;
    std::mt19937 gen;

    void slowAndSteady(const int *const);
    void hastily(const int *const);
    void gps(const int *const, const int *const);
};

#endif // TortoiseAndHare_hpp
