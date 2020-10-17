/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: HeartRates.cpp
    Author: Dustin McClure
    Lab: Lab 2 - Target Heart-Rate Calculator
    Modified Date: 10/15/2020

    The implementation of the class HeartRates.
    Collects users first/last name, current month, and
    date of birth, and then uses these to calculate max
    heart rate and target heart rate
 //*/

#include <iostream>
#include <string>
#include "HeartRates.h"

using namespace std;

// function main begins program execution
int main()
{
      // Takes current date, users birth date, and full name.
      // Uses this information to calculate their current age,
      // and then output the max and target heartrates recommended
      // by the AHA for someone of that age.

      // Declarations
      string fName;      // String First Name
      string lName;      // String Last Name
      int bMonth;        // Integer Birth Month
      int bDay;          // Integer Birth Day
      int bYear;         // Integer Birth Year
      int month;         // integer month
      int day;           // integer day
      int year;          //integer year

      // Initialize new class object of type heartrate
      HeartRates myHR(fName, lName, bDay, bMonth, bYear);

      // prompt user for first name, store user input stream in fName string, and
      // call member function to set First Name with value stored in fName
      cout << "Please Enter your first name: " << endl;
      cin >> fName;
      myHR.setFirstName(fName);

      // prompt user for last name, store user input stream in lName string, and
      // call member function to set Last Name with value stored in lName
      cout << "Please enter your last name: " << endl;
      cin >> lName;
      myHR.setLastName(lName);

      // prompt user for current year and store input stream in year int
      cout << "\nEnter the current year in the format of YYYY(e.g. 2020): " << endl;
      cin >> year;

      // prompt user for current month and store input stream in month int
      cout << "\nEnter the current month in the format of MM(e.g. 02 for February): " << endl;
      cin >> month;

      // prompt user for current day and store input stream in day int
      cout << "\nEnter the current day in the format of DD(e.g 09 for the 9th of October:" << endl;
      cin >> day;

      // prompt user for birth year and store input stream in bYear int
      cout << "\nEnter your birth year in the format of YYYY(e.g. 2020): " << endl;
      cin >> bYear;
      myHR.setBirthYear(bYear);

      // prompt user for birth month and store input stream in bMonth int
      cout << "\nEnter your birth month in the format of MM(e.g. 02 for February): " << endl;
      cin >> bMonth;
      myHR.setBirthMonth(bMonth);

      // prompt user for birth year and store input stream in bYear int
      cout << "\nEnter your birth day in the format of DD(e.g 09 for the 9th of October:" << endl;
      cin >> bDay;
      myHR.setBirthDay(bDay);

      // output full name using the get member functions to get the values we just
      // set with the set member functions
      cout << "\nFull Name: " << myHR.getFirstName() << " " << myHR.getLastName() << endl;

      // output current date using the values we stored in month day and year
      cout << "\nToday is: " << month << "/" << day << "/" << year << endl;

      // output birthdate using the get member fucntions to get the values we just set
      // with the set member functions
      cout << "\nBirthday: " << myHR.getBirthMonth() << "/" << myHR.getBirthDay() << "/" << myHR.getBirthYear() << endl;

      // output users age by calling the getAge member function which prompts the user to input
      // the current date if none is set, and then calculates age by figuring time between
      // current date and birthdate
      cout << "Age: " << myHR.getAge() << endl;

      // output max suggested heartrate per AHA by calling get member function which
      // subtracts currently set age from 220
      cout << "\nThe maximum suggested heartrate for someone your age is: " << "\n";
      cout << myHR.getMaxHR() << endl;

      // output max suggested heartrate per AHA by calling get member function which
      // subtracts currently set age from 220
      cout << "\nThe suggested target heartrate for someone your age is: " << "\n";
      cout << myHR.getTargetHR() << endl;

      return 0;
};
