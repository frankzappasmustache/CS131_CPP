/*
    Copyright 2020 <Dustin McClure>
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: TortiseAndHare.cpp
    Author: Dustin McClure
    Lab: Lab 7 - The Tortise and The Hare
    Modified Date: 12/15/2020

    The class implementation of the TortiseAndHare class,
    and its data members.
*/
#include "TortoiseAndHare.h"
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

using namespace std;

const int FINISH = 70;
void slowAndSteady(int *const tPtr)
{
    mt19937 gen;
    int x = uniform_int_distribution<int>{1, 10}(gen); // random number 1-10

    if (x >= 1 && x <= 5) // fast plod
        *tPtr += 3;
    else if (x == 6 || x == 7) // slip
        *tPtr -= 6;
    else // slow plod
        ++(*tPtr);

    if (*tPtr < 1)
        *tPtr = 1;
    else if (*tPtr > FINISH)
        *tPtr = FINISH;
} // end function slowAndSteady

// progress for the bunny
void hastily(int *const hPtr)
{
    mt19937 gen;
    int y = uniform_int_distribution<int>{1, 10}(gen); // random number 1-10

    if (y == 3 || y == 4) // big hop
        *hPtr += 9;
    else if (y == 5) // big slip
        *hPtr -= 12;
    else if (y >= 6 && y <= 8) // small hop
        ++(*hPtr);
    else if (y > 8) // small slip
        *hPtr -= 2;

    if (*hPtr < 1)
        *hPtr = 1;
    else if (*hPtr > FINISH)
        *hPtr = FINISH;
} // end function hastily

// display new position
void gps(const int *const turtleTurtle, const int *const marchHare)
{
    if (*turtleTurtle == *marchHare)
        cout << setw(*marchHare) << "OUCH!!!";
    else if (*turtleTurtle < *marchHare)
        cout << setw(*marchHare) << 'H' << setw(*turtleTurtle - *marchHare) << 'T';
    else
        cout << setw(*turtleTurtle) << 'T' << setw(*marchHare - *turtleTurtle) << 'H';

    cout << '\n';
} // end function gps

void start(int raceTimer)
{
    &mrT = mrT;
    &mrH = mrH;

    srand(time(0));

    cout << "ON YOUR MARK, GET SET\nBANG               !!!!"
         << "\nAND THEY'RE OFF    !!!!\n";

    while (mrT != FINISH && mrH != FINISH)
    {
        slowAndSteady(&mrT);
        hastily(&mrH);

        gps(&mrH, &mrT);
        raceTimer++;
        cout << "TIME ELAPSED = " << raceTimer << " seconds" << endl;
        if (mrT == FINISH)
        {
            cout << "\nTORTOISE WINS!!! YAY!!!\n";
        }
        else if (mrH == FINISH)
        {
            cout << "Hare wins. Yuch.\n";
        }
        else
        {
            continue;
        }
    }
}

// progress for the tortoise
int main()
{
    int mrT{1};
    int mrH{1};
    int raceTimer{0};

    TortoiseAndHare(int &mrT, int &mrH);
    start(raceTimer);
}
