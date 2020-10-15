/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: HeartRates.h
    Author: Dustin McClure
    Lab: Lab 2 - Target Heart-Rate Calculator
    Modified Date: 10/15/2020
    
 //*/

#include <iostream>
#include <string>

#ifndef HEARTRATES_H_INCLUDED
#define HEARTRATES_H_INCLUDED

class HeartRates
{
public:
      HeartRates(std::string fName, std::string lName, int bDay, int bMonth, int bYear)
      {
            firstName = fName;
            lastName = lName;
            birthDay = bDay;
            birthMonth = bMonth;
            birthYear = bYear;
      }

      void setFirstName(std::string fName)
      {
            firstName = fName;
      }

      std::string getFirstName()
      {
            return firstName;
      }

      void setLastName(std::string lName)
      {
            lastName = lName;
      }

      std::string getLastName()
      {
            return lastName;
      }

      void setBirthDay(int bDay)
      {
            birthDay = bDay;
      }

      int getBirthDay()
      {
            return birthDay;
      }

      void setBirthMonth(int bMonth)
      {
            birthMonth = bMonth;
      }

      int getBirthMonth()
      {
            return birthMonth;
      }

      void setBirthYear(int bYear)
      {
            birthYear = bYear;
      }

      int getBirthYear()
      {
            return birthYear;
      }

      int getAge()
      {
            // if current date has not yet been set, get it from user
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

      int getMaxHR()
      {
            return (220 - getAge());
      }

      int getTargetHR()
      {
            return (getMaxHR() * 0.5, getMaxHR() * 0.85);
      }

private:
      std::string firstName;
      std::string lastName;
      int birthDay{0};
      int birthMonth{0};
      int birthYear{0};
      int currentMonth{0}; // current month
      int currentDay{0}; // current day
      int currentYear{0}; // current year

};
#endif