/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: HeartRates.cpp
    Author: Dustin McClure
    Lab: Lab 2 - Target Heart-Rate Calculator
    Modified Date: 10/14/2020

    Create a class called HeartRates. The class attributes should include the person�s firstname,
    last name and date of birth (consisting of separate attributes for the month, day and year
    of birth). Your class should have a constructor that receives this data as parameters.For each
    attribute provide set and get functions. The class also should include a function getAge that
    calculates and returns the person�s age (in years), a function getMaxiumumHeartRate that
    calculates and returns the person�s maximum heart rate and a function getTargetHeartRate
    that calculates and returns the person�s target heart rate. Since you do not yet know how to
    obtain the current date from the computer, function getAge should prompt the user to enter
    the current month, day and year before calculating the person�s age. Write an application
    thatprompts for the person�s information, instantiates an object of class HeartRates and prints
    theinformation from that object � including the person�s first name, last name and date of birth
    � then calculates and prints the person�s age in (years), maximum heart rate and
    target-heart-rate range.
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