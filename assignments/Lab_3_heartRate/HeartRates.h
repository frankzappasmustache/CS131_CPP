/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: HeartRates.h
    Author: Dustin McClure
    Lab: Lab 2 - Target Heart-Rate Calculator
    Modified Date: 10/15/2020

    The class definition for HeartRates which is
    implemented in a program to calculate target
    heartrate.

 //*/
#ifndef HEARTRATES_H
#define HEARTRATES_H

#include <iostream>
#include <string>

class HeartRates // beginning of class definition for HeartRates
{
public:
      HeartRates(std::string fName, std::string lName, int bDay, int bMonth, int bYear) // constructor for class HeartRates
      {
            firstName = fName;
            lastName = lName;
            birthDay = bDay;
            birthMonth = bMonth;
            birthYear = bYear;
      }

      void setFirstName(std::string fName) // class member function to set first name
      {
            firstName = fName;
      }

      std::string getFirstName() // class member function to get first name
      {
            return firstName;
      }

      void setLastName(std::string lName) // class member function to set last name
      {
            lastName = lName;
      }

      std::string getLastName() // class member function to get last name
      {
            return lastName;
      }

      void setBirthDay(int bDay) // class member function to set birthday
      {
            birthDay = bDay;
      }

      int getBirthDay() // class member function to get birthday
      {
            return birthDay;
      }

      void setBirthMonth(int bMonth) // class member function to set birth month
      {
            birthMonth = bMonth;
      }

      int getBirthMonth() // class member function to get birth month
      {
            return birthMonth;
      }

      void setBirthYear(int bYear) // class member function to set birth year
      {
            birthYear = bYear;
      }

      int getBirthYear() // class member function to get birth year
      {
            return birthYear;
      }

      int getAge() // class member function to calculate age given birthday and current date
      {
            // determine if current date has been set, if not get it from the user
            if ( currentYear == 0 )
            {
                  std::cout << "\nPlease enter today's month, day, and year in this format (not including quotations) \"mm dd yyyy\": " << std::endl;
                  std::cin >> currentMonth >> currentDay >> currentYear;
            } // end if

            if ( currentMonth >= birthMonth )
                  if ( currentDay >= birthDay )
                        return currentYear - birthYear;

            return currentYear - birthYear - 1;
      } // end function getAge

      int getMaxHR() // class member function to calculate max heartrate given age
      {
            return (220 - getAge());
      }

      int getTargetHR() // class member function to calculate suggested target heartrate given age
      {
            return (getMaxHR() * 0.85);
      }

private:
      std::string firstName; // class string data member
      std::string lastName; // class string data member
      int birthDay{0}; // class int data member initialized to 0
      int birthMonth{0}; // class int data member initialized to 0
      int birthYear{0}; // class int data member initialized to 0
      int currentMonth{0}; // class int data member initialized to 0
      int currentDay{0}; // class int data member initialized to 0
      int currentYear{0}; // class int data member initialized to 0

};
#endif
