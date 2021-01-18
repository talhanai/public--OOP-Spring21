## 16. Functions

To reduce redunancy of code, make it readable, and minimize errors, we can modularize code block into _functions_. 

```c++
#include <iostream>
using namespace std;

// Create a function
void myFunction() {
  cout << "I was just printed. \n";
}

int main() {
  // call the function
  myFunction(); 
  return 0;
}
```

We can define our own functions (e.g. `myFunction()` ) and place them before the `int main() {}` function. A C++ is executed from top to bottom, so if we declare `myFunction()` _after_ `main()` then the code will have no idea what `myFunction()` is because it hasn't been declared yet.

An alternative way to structure a script is as follows, be declaring the function _before_ `main()`:

```c++
#include <iostream>
using namespace std;

// Function declaration
void myFunction();

// The main method
int main() {
  
  // call the function
  myFunction();  
  return 0;
}

// Define a function
void myFunction() {
  cout << "I was just printed. \n";
}
```



## Parameters and Arguments

A function can have multiple parameters:

```c++
void functionName(parameter1, parameter2, parameter3, ...) {
  // code to be executed
}
```



Here is an example of a function that has a string value as a _parameter_ and is used to pass string values as _arguments_.

```c++
#include <iostream>
using namespace std;

void myFunction(string fname = "Joe") {
  cout << fname << " is a name. \n";
}

int main() {
  myFunction("Marty"); // Marty
  myFunction("Nancy"); // Nancy
  myFunction();        // Joe
  return 0;
}
```

In the above examples, `myFunction()` is executed three times. The first two times it is passed string arguments, and the final time it is passed no argument. When no argument is passed, it uses the default value `Joe` defined in the parameter to generate the print statement.

## Multiple Parameters

You can declare multiple parameters that take on different value types.

```c++
void myFunction(string fname, int age) {
  cout << fname << " is a name, and is " << age << " years old. \n";
}

int main() {
  myFunction("Marty", 3);
  return 0;
}
// Marty is a name, and is 3 years old.
```



## `return` Values

If you want values returned by your function, you will need to declare that it does so, as well as the _type_ of value it will return. The `return` expression defines the value(s) that will be returned.

- `void` is declared when no value will be returned.
- `int`, `string`, `float`, `double`, `char` are declared for the appropriate _type_ if the function is to return a value.

```c++
#include <iostream>
using namespace std;

// returns no value
void printOnly(string fname, int age) {
  cout << fname << " is a name, and is " << age << " years old. \n";
}

// returns an int
int calcSum(int x, int y) {
  return x + y;
}

int main() {

  printOnly("Nancy", 32);
  
  int sum = calcSum(2,3);
  cout << sum << "\n";
  
  return 0;
}

// Output:
// Nancy is a name, and is 32 years old. 
// 5
```

## Pass by Reference

There may be scenarios where you want a function to manipulate values, but without returning and re-assigning those values. This strategy saves on memory and speed of code execution. You can pass variables as arguments like a regular function, but define the parameters as a _reference_ to the variable with the `&` operator.

```c++
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}
```

