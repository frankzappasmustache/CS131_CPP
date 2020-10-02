/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: arithmetic.cpp
    Author: Dustin McClure
    Lab: Lab 1 Programming Excercises
    Modified Date: 10/02/2020

    A program that ask the user to input two numbers (integers),
    then calculates the quotient, product, difference, and
    sum of those numbers, printing them to cout.
 //*/
#include <iostream>
#include <math.h>
void loop()
{
  isnan(1);
}
using namespace std;

int main()
{
  // Takes two numbers as input, validates that input,
  // and outputs the quotient, product, difference and sum.

  // Declarations
  int numeroUno{0};      // Integer one
  int numeroDos{0};      // Integer two
  int suma{0};           // Sum of Integer one and Integer two
  int diferencia{0};     // Difference of Integer one and Integer two
  int producto{0};       // Product of Integer one and Integer two
  int cotiente{0};       // Quotient of Integer one and Integer two

  // Get input for first number from the user
  NUMBER_ONE: cout << "Enter any number: ";

  // Validate user input for first number and return them to prompt if not a number.
  while(!(cin >> numeroUno))
  {
    cout << "You entered an imaginary number or character. Please enter a positive number.\n";

    cin.clear();

    cin.ignore(30, '\n');

    goto NUMBER_ONE;
  }

  // Get input for first number from the user
  NUMBER_TWO: cout << "Enter another number: ";

  // Validate user input for second number and return them to prompt if not a number.
  while(!(cin >> numeroDos))
  {
    cout << "You entered an imaginary number or character. Please enter a positive number.\n";

    cin.clear();

    cin.ignore(30, '\n');

    goto NUMBER_TWO;
  }

  // Calculate quotient, product, difference and sum. Then store them in variables.
  suma = numeroUno + numeroDos;
  diferencia = numeroUno - numeroDos;
  producto = numeroUno * numeroDos;
  cotiente = numeroUno / numeroDos;

  // Print the result.
  cout << "The sum of " << numeroUno << " and " << numeroDos << " is " << suma  << endl;
  cout << "The difference of " << numeroUno << " and " << numeroDos << " is " << diferencia << endl;
  cout << "The product of " << numeroUno << " and " << numeroDos << " is " << producto << endl;
  cout << "The quotient of " << numeroUno << " and " << numeroDos << " is " << cotiente << endl;

  return 0;
}
