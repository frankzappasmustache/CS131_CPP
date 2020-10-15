/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: HeartRates.cpp
    Author: Dustin McClure
    Lab: Lab 2 - Target Heart-Rate Calculator
    Modified Date: 10/15/2020
 //*/

#include <iostream>
#include <string>
#include "HeartRates.h"

using namespace std;

int main()
{
      string fName;
      string lName;
      int bMonth;
      int bDay;
      int bYear;
      HeartRates myHR(fName, lName, bDay, bMonth, bYear);

      int month;
      int day;
      int year;

      cout << "Please Enter your first name: " << endl;
      cin >> fName;
      myHR.setFirstName(fName);

      cout << "Please enter your last name: " << endl;
      cin >> lName;
      myHR.setLastName(lName);

      cout << "\nEnter the current year in the format of YYYY(e.g. 2020): " << endl;
      cin >> year;

      cout << "\nEnter the current month in the format of MM(e.g. 02 for February): " << endl;
      cin >> month;

      cout << "\nEnter the current day in the format of DD(e.g 09 for the 9th of October:" << endl;
      cin >> day;

      cout << "\nEnter your birth year in the format of YYYY(e.g. 2020): " << endl;
      cin >> bYear;
      myHR.setBirthYear(bYear);

      cout << "\nEnter your birth month in the format of MM(e.g. 02 for February): " << endl;
      cin >> bMonth;
      myHR.setBirthMonth(bMonth);

      cout << "\nEnter your birth day in the format of DD(e.g 09 for the 9th of October:" << endl;
      cin >> bDay;
      myHR.setBirthDay(bDay);

      cout << "\nFull Name: " << myHR.getFirstName() << " " << myHR.getLastName() << endl;
      cout << "\nToday is: " << month << "/" << day << "/" << year << endl;
      cout << "\nBirthday: " << myHR.getBirthMonth() << "/" << myHR.getBirthDay() << "/" << myHR.getBirthYear() << endl;

      cout << "Age: " << myHR.getAge() << endl;

      cout << "\nThe maximum suggested heartrate for someone your age is: " << "\n";
      cout << myHR.getMaxHR() << endl;

      cout << "\nThe suggested target heartrate for someone your age is: " << "\n";
      cout << myHR.getTargetHR() << endl;

      return 0;
};