//unfinished
#include <iostream>
using namespace std;

double costTrue;
double taxTrue;

float addTax(float taxRate, double& cost){
  taxRate = (taxRate/100) + 1;
  cost = cost * taxRate;
}

main(int argc, char **argv){
  cout << "Please enter the cost of an item before tax: " << endl;
  cin >> costTrue;

  cout << "Please enter the tax rate as a percent: " << endl;
  cin >> taxTrue;

  addTax(taxTrue, costTrue);

  cout << "Your cost after tax: $" << costTrue << endl;

  return 0;
}
