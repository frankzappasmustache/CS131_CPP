/*
    Copyright 2020 <Dustin McClure>
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: rational.h
    Author: Dustin McClure
    Lab: Lab 8 - Rational Class
    Modified Date: 11/16/2020

    The class defition of the rational class,
    and its data members.
*/
// Exercise 9.6 Solution: Rational.h
#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
  public:
    Rational(int = 0, int = 1);                // default constructor
    Rational addition(const Rational &);       // function addition
    Rational subtraction(const Rational &);    // function subtraction
    Rational multiplication(const Rational &); // function multi.
    Rational division(const Rational &);       // function division
    void printRational();                      // print rational format
    void printRationalAsDouble();              // print rational as double format

  private:
    int numerator;    // integer numerator
    int denominator;  // integer denominator
    void reduction(); // utility function
};                    // end class Rational

#endif
