/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: circleGeometry.cpp
    Author: Dustin McClure
    Lab: Lab 1 Programming Excercise 3
    Modified Date: 10/02/2020

    A program that ask the user to input one number (integer),
    for the radius of a circle, and then calculates the Diameter,
    Circumfrence, and Area of that circle.
 //*/
#include <iostream>
using namespace std;

// function main begins program execution
int main()
{

      // Takes the radius of a cirle as input, validates that the input is
      // a proper integer, and outputs the diameter, circumfrence, and
      // area of the circle.

      //declarations
      const double PI=3.14159; // Declare PI as a double-floating point constant
      int radius{0};          // Declare radius as integer initialized to zero

      // Set label for cout and get radius input from user
      RADIUS: cout << "Enter the radius of your circle: ";

      // Validate user radius input, tell them input is invalid, and
      // return them to radius label if not valid
      while(!(cin >> radius))
      {
            cout << "Your input is invalid. The radius must be entered as a real number.\n";

            cin.clear();

            cin.ignore(30, '\n');

            goto RADIUS;
      }

      //  Calculate diameter, circumfrence, and area; printing the result.
      cout << "The Diameter of your circle is " << radius * 2 << "." << endl;
      cout << "The Circumference of your circle is " <<  2 * PI * radius << "." << endl;
      cout << "The Area of your circle is " << PI * radius * radius << "." << endl;

      return 0;
}
