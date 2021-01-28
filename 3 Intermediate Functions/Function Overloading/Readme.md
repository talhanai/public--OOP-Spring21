# Function Overloading

C++ has a unique functionality which allows for multiple functions to be declared with the same function name. This is useful when different data _types_ need to be manipulated in similar ways. This is best shown by example.

```c++
#include <iostream>
using namespace std;

int sumFunc(int x, int y) {
  return x + y;
}

double sumFunc(double x, double y) {
  return x + y;
}

int main() {
  int sumInt       = sumFunc(13 , 7);
  double sumDouble = sumFunc(3.1, 7.342);

  cout << "Int: "    << sumInt    << "\n";
  cout << "Double: " << sumDouble << "\n";
  return 0;
}
// Int: 20
// Double: 10.442
```

In the example above, a function `plusFunc()` is defined with arguments of type integer and a return value of type integer, as well as arguments of type double and a return value of type double. The version of the function that ultimately gets executed depends on the data types that were passed as arguments.
