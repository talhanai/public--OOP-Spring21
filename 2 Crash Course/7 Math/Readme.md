
# 7. Math

You can perform many standard math operations by importing the `<cmath>` library. You can explore a list of math operations [here](https://www.w3schools.com/cpp/cpp_math.asp) which include trigonometric functions, exponential functions, power functions. max / min, and rounding. 

```c++
#include <iostream>
#include <cmath>
using namespace std;

int main() {

  cout << sqrt(64)        << "\n";
  cout << fmax(0.3, 2.1)  << "\n"; // float max
  cout << acos(0.3)       << "\n";
  cout << round(2.6)      << "\n"; 
  cout << ceil(0.9)       << "\n"; // rounding UP to the nearest integer
  cout << log(2)          << "\n";
  
  return 0;
}
```
