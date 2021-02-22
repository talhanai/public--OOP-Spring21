# Multi-file Code
As coding projects increase in size, it helps to orgianize logic, functions, and classes into seperate files. 

## File Contents: multiple `.cpp`
The example below shows how organize code across different files in a project that would be composed of the following files:

- __main.cpp__ is the file that contains the `int main() {}` function.
- __factorial.cpp__ contains a supporting function `factorial()` called by __main.cpp__.
- __print.cpp__ also contains a supporting function `print()` called by __main.cpp__.

### `main.cpp`
```c++
// #include <bits/stdc++.h> 
#include <iostream>
#include<string> 

// forward declaration
int factorial(int); 
void print(std::string);

using namespace std;
int main() { 

  int num = 7;
  int numFactorial = factorial(num);

  // print result
  string stringToPrint = "Factorial of [" + to_string(num) + "] is: " + to_string(numFactorial);
  print(stringToPrint);

} 
```
The file above calculates the factorial and constructs a string to be passed for printing. The file contains a _forward declaration_ of the functions `factorial()` and `print()`, however these functions are in seperate files __factorial.cpp__ and __print.cpp__.

### `factorial.cpp`
```c++
#include <iostream>
using namespace std; 
  
// Recursive factorial program 
int factorial(int n) { 
  if (n == 1) { 
    return 1;
  }
  return n * factorial(n - 1); 
} 
```
The function above calculates the factorial of a number recursively. The factorial of a number is computed as `n! = 1 * 2 * 3 * ... * n`.

### `print.cpp`
```c++
#include <iostream>
#include<string> 
using namespace std; 
  
void print(string str) { 
    cout << str << "\n"; 
} 
```
The function above prints a string to the standard output.

If you click __Run__, main.cpp should successfully execute with the following output.

```c++
// Factorial of [7] is: 5040
```

## Header File: `.h`
We've previously used functions such as _cin_, _cout_, _ifstream_, _ofstream_, _.lenght()_ that have no forward declaration, but are contained in header files such as __\<iostream\>__, __\<fstream\>__, and __\<string\>__. We can also create our own header file, which we demonstrate in the example below. 

- __function.h__ is a _header_ file that declares the supporting functions `factorial()` and `print()`.

### `function.h`
```c++
#ifndef FUNCTION_H 
#define FUNCTION_H 

int factorial(int); 
void print(std::string);
  
#endif 
```
The file above is a _header_ file that contains the following elements:
- `#ifndef ... #endif` wrapper that executes what is inclosed _if_ the header function hasn't already been defined. This is to avoid compiling the contents of the file more than once.
- `#define FUNCTION_H` is a macro that declares the contents of the global variable `FUNCTION_H`. During compilation, all declarations of `#include "function.h"` will be replaced with the function declarations contained within. 
-  `int factorial(int); void print(std::string);` are forward declarations of the functions in __factorial.cpp__ and __print.cpp__.

We will also need to make a slight update to __main.cpp__ by inserting `#include "function.h"` (and remove the forward declarations of functions).
```c++
// main.cpp 
#include <iostream>
#include<string> 

// custom header file
#include "function.h" 

using namespace std;
int main() { 

  int num = 7;
  int numFactorial = factorial(num);

  // print result
  string stringToPrint = "Factorial of [" + to_string(num) + "] is: " + to_string(numFactorial);
  print(stringToPrint);

} 
```

If you click __Run__, main.cpp should successfully execute with the following output.

```c++
// Factorial of [7] is: 5040
```

An advantage of the header file approach, is that we can add forward declarations to the header file (i.e. in a centralized location) rather than update all files to include the forward declarations (of which could be many lines long).

# References:
- [C Header Files - tutorialspoint.com](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)

