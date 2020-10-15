/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: Invoice.h
    Author: Dustin McClure
    Lab: Lab 2 - Invoice
    Modified Date: 10/11/2020

    {PROGRAM DESCRIPTION}
 //*/

#include <iostream>
#include <string>

#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED

class Invoice
{
public:
Invoice(std::string mpartNumber, std::string mpartDescription, int mitmQuantity,
       int itmPrice);

void setPartNumber(std::string mpartNumber)
{
      partNumber = mpartNumber;
}

void setPartDescription(std::string mpartDescription)
{
      partDescription = mpartDescription;
}

void setItmQuantity(int mitmQuantity)
{
       itmQuantity = mitmQuantity;
}

void setItmPrice(int mitmPrice)
{
      itmPrice = mitmPrice;
}

std::string getPartNumber()
{
      return partNumber;
}

std::string getPartDescription()
{
      return partDescription;
}

int getItmQuantity()
{
      return control(itmQuantity);
}

int getItmPrice() 
{
      return control(itmPrice);
}

int getInvoiceAmount()
{
      return control(itmQuantity * itmPrice);
}

int control(int x) 
{
      if (x < 0) {
          return 0;
      } else {
          return x;
      }
}

private:
      std::string partNumber;       // data member
      std::string partDescription;  // data member
      int itmQuantity{0};           // data member
      int itmPrice{0};              // data member

};

#endif
