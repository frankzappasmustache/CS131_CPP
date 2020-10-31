/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: avgOfIntegers.cpp
    Author: Dustin McClure
    Lab: Lab 5a - Find average of between 3 and 5 integers
    Modified Date: 10/27/2020

    The class implementation of the avgOfIntegers class
*/

#include "avgOfIntegers.h"

#include <math.h>

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  avgOfIntegers intAverage(int numberCount, double average, int numOne,
                           int numTwo, int numThree, int numFour, int numFive);
  // Declarations
  int numberCount{0};
  double average{0};
  int numOne{0};
  int numTwo{0};
  int numThree{0};
  int numFour{0};
  int numFive{0};

  while (numberCount != 10) {
    cout << "Please enter a number of integers for which you would like to find"
         << " the average. You can calculate for 3, 4, or 5 integers. Please "
            "enter 10 to exit:\n";
    cin >> numberCount;

    if (numberCount == 10) break;

    switch (numberCount) {
      case 3:
        cout << "Please enter first number:\n";
        cin >> numOne;
        cout << "Please enter second number:\n";
        cin >> numTwo;
        cout << "Please enter third number:\n";
        cin >> numThree;
        if (0 <= numOne && numTwo && numThree >= 100) {
          average = (numOne + numTwo + numThree) / 3;
          return average;
        } else {
          cout << "Please enter a number between 0 and 100\n";
          break;
        }
        break;
      case 4:
        cout << "Please enter first number:\n";
        cin >> numOne;
        cout << "Please enter second number:\n";
        cin >> numTwo;
        cout << "Please enter third number:\n";
        cin >> numThree;
        cout << "Please enter fourth number:\n";
        cin >> numFour;
        if (0 <= numOne && numTwo && numThree && numFour >= 100) {
          average = (numOne + numTwo + numThree + numFour) / 4;
          return average;
        } else {
          cout << "Please enter a number between 0 and 100\n";
          break;
        }
        break;
      case 5:
        cout << "Please enter first number:\n";
        cin >> numOne;
        cout << "Please enter second number:\n";
        cin >> numTwo;
        cout << "Please enter third number:\n";
        cin >> numThree;
        cout << "Please enter fourth number:\n";
        cin >> numFour;
        cout << "Please enter fifth number:\n";
        cin >> numFive;
        if (0 <= numOne && numTwo && numThree && numFour && numFive >= 100) {
          average = (numOne + numTwo + numThree + numFour + numFive) / 5;
          return average;
        } else {
          cout << "Please enter a number between 0 and 100\n";
          break;
        }
        break;
    }
  cout << "The average of the numbers you entered is: " << average << endl;
}
return 0;
}
;
