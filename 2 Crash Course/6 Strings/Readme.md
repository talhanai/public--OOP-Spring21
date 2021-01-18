# 6. Strings

Working with strings requires the use of a specific library. The `#include <string>` statement imports such a library that defines the __string__ type and various string manipulation functions.

## Concatenation

```c++
#include <iostream>
using namespace std;

#include <string>

int main(){

  string fruit = "apple";
  string color = "red";

  // combining strings with addition operator
  string description = color + " " + fruit;
  cout << description << "\n";

  // combining strings with append() function
  // variable assignment of the append value happens in-place.
  color.append(" "); 
  color.append(fruit);
  description = color;
  cout << description << "\n";

}
```

 A variable of type __string__ is actually an 'object' that has built in functions to perform string manipulations such as `append()`. Because `append()` is a function that is part of the object, the assigment happens _in-place_. That is you do not need to assign the value `append()` yields into a new variable, but it automatically updates the `color` variable.

## Numbers vs. Strings

The addition operator on `int`, `float`, and `double` will perform an arithmetic sum. The addition operator on `string` will append strings together, even if strings are composed of numbers.

```c++
int x = 10;
int y = 6;
int z = x + y; // z is 16 (int)

string x = "10";
string y = "6";
string z = x + y;   // z is "106" (string)
```

## String Manipulations

Because a string is an `object` other string manipulation functions exist to make it easy to manipulate. These functions have been developed and exist in a library because they are commonly used and writing these functions from scratch can be quite involved (even for experienced programmers). So some developers created this functionality to save everyone time and help us focus on greater tasks.

### String Length

```c++
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789!@#$";
cout << "The length of the txt string is: " << txt.length() << "\n";
// Outputs 39
```

```c++
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789!@#$";
cout << "The length of the txt string is: " << txt.size() << "\n";
// Outputs 39
```

`length()` and `size()` result in the same output.

### String Index

Each element of a string maps to a specific index. So you can _retreive_ the value of the string at a specific index, and _update_ the string element value at a specific index.

```c++
string myString = "AbraCadabra";
cout << myString[0] << "\n";
// Outputs A

cout << myString[2] << "\n";
// Outputs r

string myString = "AbraCadabra";
myString[0] = 'B';
cout << myString << "\n";
// Outputs BbraCadabra instead of AbraCadabra
```

### String Input

#### Single word input
To read in a string, you can use the `cin <<` expression. Only the first word in a phrase will be read if more than one word is typed.

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {

  string firstName;
  cout << "Type your FIRST name: ";
  cin >> firstName; // get user input from the keyboard
  cout << "Your name is: " << firstName;
  
  return 0;
}
// Output:
// Type your FIRST name: Mona Lisa
// Your name is: Mona
```

#### Multiple word input

If you try to input more than one word, the input will only record the first word. So if you want to record more than one word, you will need to use the `getline` function.

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {

  string fullName;
  cout << "Type your FULL name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName << "\n";
  
  return 0;
}
// Output:
// Type your FULL name: Mona Lisa
// Your name is: Mona Lisa
```

# References
- [C++ Strings with w3schools](https://www.w3schools.com/cpp/cpp_strings.asp)

