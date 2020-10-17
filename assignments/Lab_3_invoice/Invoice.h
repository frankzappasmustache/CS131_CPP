/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: Invoice.h
    Author: Dustin McClure
    Lab: Lab 2 - Invoice
    Modified Date: 10/11/2020

    The class definition of the class HeartRates,
    its data members, and member functions.
 //*/
#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include <string>

class Invoice // beginning of class definition for Invoice
{
public:
  void setPartNumber(std::string mpartNumber) // class member function to set part number
  {
    partNumber = mpartNumber;
  }

  void setPartDescription(std::string mpartDescription) // class member function to set part Description
  {
    partDescription = mpartDescription;
  }

  void setItmQuantity(int mitmQuantity) // class member function to set item quantity
  {
    itmQuantity = mitmQuantity;
  }

  void setItmPrice(int mitmPrice) // class member function to set item price
  {
    itmPrice = mitmPrice;
  }

  std::string getPartNumber() // class member function to get part number
  {
    return partNumber;
  }

  std::string getPartDescription() // class member function to get part description
  {
    return partDescription;
  }

  int getItmQuantity() // class member function to get item quantity
  {
    return control(itmQuantity);
  }

  int getItmPrice() // class member function to get item price
  {
    return control(itmPrice);
  }

  int getInvoiceAmount() // class member function to calculate total invoice
  {
    return control(itmQuantity * itmPrice);
  }

  int control(int x) // class member function to set 0 if amount or price is not positive
  {
    if (x < 0) {
      return 0;
    } else {
      return x;
    }
  }

private:
  std::string partNumber;      // class string data member
  std::string partDescription; // class string data member
  int itmQuantity{0};          // class int data member initialized to 0
  int itmPrice{0};             // class int data member initialized to 0
};

#endif
