#include <iostream>
using namespace std;

int main() {
  int number{100};
  int *ptr = &number;
  cout << "The value of the number is: " << *ptr << "\n";
  return 0;
};
