/*
    Project Name: CS131_CPP
    Sub-project: Labs
    File Name: retailCalculator.cpp
    Author: Dustin McClure
    Lab: Lab 3a - Retail Sales Calculator
    Modified Date: 10/22/2020
*/
#include "retailCalculator.h"

#include <math.h>

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  retailCalculator rCalc(int prod_num, int quant, double cost, double total,
                         double totalCost, double totalQuant);

  int prod_num{0};
  int quant{0};
  double cost[5] = {2.98, 4.50, 9.98, 4.49, 6.87};
  double total[5] = {};
  double totalCost[5] = {};
  double totalQuant[5] = {};

  cout << "Please enter the product number (1-5)."
       << "If you would like to exit enter 0: ";
  cin >> prod_num;
  while (prod_num != 0) {
    if (prod_num == 0) {
      break;
    } else {
      cout << "Please enter the product quantity: ";
      cin >> quant;
    }
    switch (prod_num) {
      case 1:
        total[0] = (cost[0] * quant);
        cout << "\nThe total is " << total[0] << endl;
        totalCost[0] += total[0];
        totalQuant[0] += quant;
        break;

      case 2:
        total[1] = (quant * cost[1]);
        cout << "\nThe total is " << total[1] << endl;
        totalCost[1] += total[1];
        totalQuant[1] += quant;
        break;

      case 3:
        total[2] = (quant * cost[2]);
        cout << "\nThe total is " << total[2] << endl;
        totalCost[2] += total[2];
        totalQuant[2] += quant;
        break;

      case 4:
        total[3] = (quant * cost[3]);
        cout << "\nThe total is " << total[3] << endl;
        totalCost[3] += total[3];
        totalQuant[3] += quant;
        break;

      case 5:
        total[4] = (quant * cost[4]);
        cout << "\nThe total is " << total[4] << endl;
        totalCost[4] += total[4];
        totalQuant[4] += quant;
        break;

      case 6:
        cout << "Please enter a correct product number:";
        cin >> prod_num;
        break;
    }
    cout << setiosflags(ios::fixed | ios::showpoint)
         << "\n\nThe total retail value of all products is:" << setprecision(2)
         << totalCost[0] + totalCost[1] + totalCost[2] + totalCost[3] +
                totalCost[4]
         << endl;
  }
  return 0;
};
