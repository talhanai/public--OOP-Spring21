# 4. Function Template
We saw with Function Overloading that the same function name can be used to take different types as parameters. To make this process more streamlined (by elimintating the need to write the same function multiple times), C++ provides the ability to create a _template_ function that can process different data types, and which can be generated at compile time (i.e. when you click the __run__ button). Here is an example for defining and calling a function template:

```c++
#include <iostream>
using namespace std;

template <typename T>
T add(T x, T y) {
   return x + y;
}

int main() {

    int resultInt;
    double resultDouble;
    
    // calling with int parameters
    resultInt = add<int>(8, 1);
    cout << resultInt << endl;

    // calling with double parameters
    resultDouble = add<double>(17.4, 32.0);
    cout << resultDouble << endl;

    return 0;
}  
// 9
// 49.4
```
In the above example, the function template utilizes the following notation:
- `T` is a template argument that indicates that the function accepts different data types.
- `typename` is a reserved keyword.

During compile time, the compiler checks all the calls to the `add()` function, and creates a version of the function for each data type. So at run time the compiled code would effectively have the following functions available to call.
```c++
int add(int x, int y) {
  return x + y;
}

double add(double x, double y) {
  return x + y;
}
```

# Reference
- [C++ Function Template](https://www.programiz.com/cpp-programming/function-template)
- [Overview of Function Template - isocpp.org](https://isocpp.org/wiki/faq/templates#overview-templates)
