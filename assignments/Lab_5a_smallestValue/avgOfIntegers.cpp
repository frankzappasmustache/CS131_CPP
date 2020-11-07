/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: avgOfIntegers.cpp
    Author: Dustin McClure
    Lab: Lab 5a - Find average of between 3 and 5 integers
    Modified Date: 11/06/2020

    The class implementation of the class avgOfIntegers and its data
    member.Requests a number of integers to average between three and five,
    validates input in a do/while loop, uses a switch statement that asks for
    user input for numbers to average in a for loop based on numberCount,
    and validates the input to make sure it is not negative or above 100.
    The program calculates the average at the end of each successful for loop,
    and exits when 1 is entered.
*/
#include "avgOfIntegers.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


// function main begins program execution
int main()
{
  // Initialize new class object of type avgOfIntegers
  avgOfIntegers intAverage(int numberCount, double average, int number,
                           double sum);

  // Declarations
  int numberCount{0}; // number of integers to average
  double average{0.00}; // average of integers
  int number{0}; // numbers entered for sum to average
  double sum{0.00}; // sum of all numbers

  // do/while loop that averages 3-5 numbers while numberCount is
  // less than 100 and greater than 0
  do {

    // request user input for number of integers and store in numberCount
    cout << "Please enter a number of integers for which you would like to find"
         << " the average. You can calculate for 3, 4, or 5 integers. Please "
            "enter 1 to exit:\n";
    cin >> numberCount;

    // check if numberCount equals 1, and if so transfer execution back to
    // int main
    if (numberCount == 1) break;

    // execute case in switch statement based on value of numberCount
    switch (numberCount) {
      case 3:
        // ask for an integer the number of times stored in value numberCount
        for (int x = 0; x < numberCount; x++) {
          cout << "Please enter a number:\n" << endl;
          cin >> number;
          // validate number is not negative or above 100, if so decrement
          // x by 1 and prompt for new number, otherwise add number to sum
          if (number < 0 || number > 100) {
            cout << "Please start again, entering only numbers between 0 and "
                    "100.\n";
            x--;
            continue;
          } else {
            sum += number;
          }
        }
        // determine average by dividing sum by number of integers then
        // transfer execution to return --> do/while loop for calculation
        average = sum / 3;
        break;
      case 4:
        // ask for an integer the number of times stored in value numberCount
        for (int x = 0; x < numberCount; x++) {
          cout << "Please enter a number:\n" << endl;
          cin >> number;

          // validate number is not negative or above 100, if so decrement
          // x by 1 and prompt for new number, otherwise add number to sum
          if (number < 0 || number > 100) {
            cout << "Please start again, entering only numbers between 0 and "
                    "100.\n";
            x--;
            continue;
          } else {
            sum += number;
          }
        }
        // determine average by dividing sum by number of integers then
        // transfer execution to return --> do/while loop for calculation
        average = sum / 4;
        break;
      case 5:
        // ask for an integer the number of times stored in value numberCount
        for (int x = 0; x < numberCount; x++) {
          cout << "Please enter a number:\n" << endl;
          cin >> number;

          // validate number is not negative or above 100, if so decrement
          // x by 1 and prompt for new number, otherwise add number to sum
          if (number < 0 || number > 100) {
            cout << "Please start again, entering only numbers between 0 and "
                    "100.\n";
            x--;
            continue;
          } else {
            sum += number;
          }
        }
        // determine average by dividing sum by number of integers then
        // transfer execution to return --> do/while loop for calculation
        average = sum / 5;
        break;
        // return average int value for cout
        return average;
      default:
        // if no case for numberCount let user know their entry was invalid,
        // and send them back to prompt for number of integers
        cout << "The number you entered was not valid. Please enter try again.\n\n";
        continue;
    }
    // print average calculated for case, and then set sum back to 0 so we
    // don't keep a very large running total
    cout << "The average of the numbers you entered is: " << average << "\n";
    sum = 0;
  } while (numberCount > 3 || numberCount < 5);
  return 0;
};
