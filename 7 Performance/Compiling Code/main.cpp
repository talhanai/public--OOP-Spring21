#include <iostream>
#include<string> 
#include "function.h" 
using namespace std;

int main() { 

  int num = 7;
  int numFactorial = factorial(num);

  // print result
  string stringToPrint = "Factorial of [" + to_string(num) + "] is: " + to_string(numFactorial);
  print(stringToPrint);

} 
