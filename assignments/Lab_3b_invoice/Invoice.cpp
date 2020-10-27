/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: Invoice.cpp
    Author: Dustin McClure
    Lab: Lab 2 - Invoice
    Modified Date: 10/11/2020


    The class implementation of the class Invoice,
    its data members, and member functions. Requests input
    from user for part number, description, quantity, and price
    then uses that input to set these values and print an invoice.
//*/
#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

// function main begins program execution
int main()
{

  // Allows user to set a part number, part description, the quantity
  // being sold, and the price of the part. It then generates an
  // invoice outputting the total cost considering the number of parts
  // being sold

  // Initialize new class object of type invoice
  Invoice myInvoice;

  // Declarations
  int quantity{0};  // integer quantity intialized to 0
  int price{0};     // integer price initialized to 0

  // output current part number/description/quantity/price for
  // user using get member functions for each of these variables
  cout << "The current part number is: " << myInvoice.getPartNumber() << "\n\n";
  cout << "The description for this part is: " << myInvoice.getPartDescription() << "\n\n";
  cout << "The quantity of this part on the invoice is: " << myInvoice.getItmQuantity() << "\n\n";
  cout << "The price per each for this part is: " << myInvoice.getItmPrice() << "\n\n";

  // prompt user for part number, get user input and store user input
  // stream in part string, and call member function to set part with
  // value stored in part
  cout << "Please enter the part number you would like to add to this invoice: ";
  string part;
  getline(cin, part);
  myInvoice.setPartNumber(part);

  // prompt user for part description, get user input and store user input
  // stream in description string, and call member function to set description
  // with value stored in description
  cout << "\nPlease enter the part description you would like to appear on the invoice: ";
  string description;
  getline(cin, description);
  myInvoice.setPartDescription(description);

  // prompt user for quantity, store user input stream in quantity int,
  // and call member function to set quantity with value
  // stored in quantity
  cout << "\nPlease enter the quantity of this part to be billed for: ";
  cin >> quantity;
  myInvoice.setItmQuantity(quantity);

  // prompt user for price, store user input stream in price int,
  // and call member function to set price with value
  // stored in price
  cout << "\nPlease enter the standard price per part billed: ";
  cin >> price;
  myInvoice.setItmPrice(price);

  // output invoice amount for quantity of part using member function
  // getInvoiceAmount
  cout << "\nThe total invoice amount for " << quantity << " of ";
  cout << "part number " << part << "(" << description << ") is ";
  cout << "$" << myInvoice.getInvoiceAmount() << "." << endl;

  return 0;
};
