/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: Invoice.cpp
    Author: Dustin McClure
    Lab: Lab 2 - Invoice
    Modified Date: 10/11/2020

    {PROGRAM DESCRIPTION}
 //*/

#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main()
{
  Invoice myInvoice;

  cout << "The current part number is: " << myInvoice.getPartNumber() << "\n\n";
  cout << "The description for this part is: " << myInvoice.getPartDescription() << "\n\n";
  cout << "The quantity of this part on the invoice is: " << myInvoice.getItmQuantity() << "\n\n";
  cout << "The price per each for this part is: " << myInvoice.getItmPrice() << "\n\n";

  cout << "Please enter the part number you would like to add to this invoice: ";

  string part;

  getline(cin, part);

  myInvoice.setPartNumber(part);

  cout << "\nPlease enter the part description you would like to appear on the invoice: ";

  string description;

  getline(cin, description);

  myInvoice.setPartDescription(description);

  cout << "\nPlease enter the quantity of this part to be billed for: ";

  int quantity;

  cin >> quantity;

  myInvoice.setItmQuantity(quantity);

  cout << "\nPlease enter the standard price per part billed: ";

  int price;

  cin >> price;

  myInvoice.setItmPrice(price);

  cout << "\nThe total invoice amount for " << quantity << " of ";
  cout << "part number " << part << "(" << description << ") is "; 
  cout << "$" << myInvoice.getInvoiceAmount() << "." << endl;

  return 0;

}
