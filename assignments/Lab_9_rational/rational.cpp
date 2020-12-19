/*
    Copyright 2020 <Dustin McClure>
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: rational.cpp
    Author: Dustin McClure
    Lab: Lab 8 - Rational Class
    Modified Date: 11/16/2020

    The class implementation of the rational class,
    and its data members.
*/
// Exercise 9.6 Solution: Rational.cpp
// Member-function definitions for class Rational.
#include "rational.h" // include definition of class Rational
#include <iostream>
using namespace std;

Rational::Rational(int n, int d)
{
    numerator = n;   // sets numerator
    denominator = d; // sets denominator
    reduction();     // store the fraction in reduced form
} // end Rational constructor

Rational Rational::addition(const Rational &a)
{
    Rational t; // creates Rational object

    t.numerator = a.numerator * denominator;
    t.numerator += a.denominator * numerator;
    t.denominator = a.denominator * denominator;
    t.reduction(); // store the fraction in reduced form
    return t;
} // end function addition

Rational Rational::subtraction(const Rational &s)
{
    Rational t; // creates Rational object

    t.numerator = s.denominator * numerator;
    t.numerator -= denominator * s.numerator;
    t.denominator = s.denominator * denominator;
    t.reduction(); // store the fraction in reduced form
    return t;
} // end function subtraction

Rational Rational::multiplication(const Rational &m)
{
    Rational t; // creates Rational object

    t.numerator = m.numerator * numerator;
    t.denominator = m.denominator * denominator;
    t.reduction(); // store the fraction in reduced form
    return t;
} // end function multiplication

Rational Rational::division(const Rational &v)
{
    Rational t; // creates Rational object

    t.numerator = v.denominator * numerator;
    t.denominator = denominator * v.numerator;
    t.reduction(); // store the fraction in reduced form
    return t;
} // end function division

void Rational::printRational()
{
    if (denominator == 0) // validates denominator
        cout << "\nDIVIDE BY ZERO ERROR!!!" << '\n';
    else if (numerator == 0) // validates numerator
        cout << 0;
    else
        cout << numerator << '/' << denominator;
} // end function printRational

void Rational::printRationalAsDouble()
{
    cout << static_cast<double>(numerator) / denominator;
} // end function printRationalAsDouble

void Rational::reduction()
{
    int largest;
    largest = numerator > denominator ? numerator : denominator;

    int gcd = 0; // greatest common divisor

    for (int loop = 2; loop <= largest; loop++)

        if (numerator % loop == 0 && denominator % loop == 0)
            gcd = loop;

    if (gcd != 0)
    {
        numerator /= gcd;
        denominator /= gcd;
    } // end if
} // end function reduction

int main()
{
    int one{0};
    int two{0};
    Rational x;

    cout << "Please enter two rational numbers"
         << "\n";
    cin >> one;
    cin >> two;
    Rational c(one, two);
    Rational d(one, two);

    x = c.addition(d);

    x.printRational();
    x.printRationalAsDouble();
    cout << "\n";

    x = c.subtraction(d);

    x.printRational();
    x.printRationalAsDouble();
    cout << "\n";

    x = c.multiplication(d);

    x.printRational();
    x.printRationalAsDouble();
    cout << "\n";

    x = c.division(d);

    x.printRational();
    x.printRationalAsDouble();

    return 0;
}
