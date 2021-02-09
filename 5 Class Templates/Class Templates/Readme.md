# Class Templates
Templates may be defined for classes, and may be used to define classes that take in different data types. Class templates are defined as follows:

```c++
#include <iostream>
using namespace std;

// templates
template <class T>
class mypair {
  T a;
  T b;

  public:
    mypair (T first, T second) { 
      a = first; 
      b = second;
    }

    T getmax(){
      T val;
      val = a > b ? a : b;
      return val;
    }

};

int main () {
  
  // int
  mypair myObjectInt(92, 75);
  cout << myObjectInt.getmax() << "\n";

  // double
  mypair myObjectDouble(100.6, 75.0);
  cout << myObjectDouble.getmax() << "\n";

  return 0;
}
// 92
// 100.6
```
From the example above, any location in the class definition where a data type would be declared (e.g. __int__, __double__) is replaced with the template type __T__. This also extends to constructor arguments (`mypair (T first, T second)`), and class methods (`T getmax(){ T val; ... }`). Running the above code demonstrates that different datatypes can passed to objects defined by a template; the compiler constructs the appropriate class and methods for the given data type.

# Template Specialization
There may be scenarios where we want to use class templates, but define the same class for specific data type(s). For example, if we wanted to have some additional processing of character values that are passed to the class, we could create templates that have specialization. To illustrate this, we can define our previous template class as follows.

```c++
// templates
template <class T> class mypair {
  T a;
  T b;

  public:
    mypair (T first, T second) { // ... code }

    T getmax(){ T val; // ... code }

};


// template specialization
template <> class mypair <char> {
  char a;
  char b;

  public:
    mypair (char first, char second) { // ... code }

    char getmax(){ char val; // ... code }

};

```
The specialized template utilizes the same class name as the template class. Two main differences exist:
- The value __T__ in the specialized class is exchanged for the specific type (i.e. __char__) the class will specifically deal with.
- The class definitions are slightly different, the specialized template leaves `<>` empty, and specifies the data type it expects as `<char>`:
```c++
// template
template <class T> class mypair { // ... code }

// specialized template
template <> class mypair <char> { // ... code }
```

## Example: Specialized Template
The example below demonstrates the use of specialized templates.
```c++
#include <iostream>
#include <ctype.h>
using namespace std;

// templates
template <class T>
class mypair {
  T a;
  T b;

  public:
    mypair (T first, T second) { 
      a = first; 
      b = second;
    }

    T getmax(){
      T val;
      val = a > b ? a : b;
      return val;
    }

};

// templates specialization for char
template <>
class mypair <char> {
  char a;
  char b;

  public:
    mypair (char first, char second) { 
      a = tolower(first); 
      b = tolower(second);
    }

    char getmax(){
      char val;
      val = a > b ? a : b;
      return val;
    }

};

int main () {
  
  // int
  mypair myObjectInt(92, 75);
  cout << myObjectInt.getmax() << "\n";

  // double
  mypair myObjectDouble(100.6, 75.0);
  cout << myObjectDouble.getmax() << "\n";

  // char
  mypair myObjectChar('A', 'c');
  cout << myObjectChar.getmax() << "\n";

  return 0;
}
// 92
// 100.6
// c
```
In the above example the class `mypair` can accept objects and variables of __int__, __float__, and __char__ using the template and specialized template. The specialized template for __char__ performs additional processing of data arguments, and converts uppercase characters to lowercase characters using the `tolower()` function imported from the `<ctype>` library.

# References:
- [Templates Tutorial - cplusplus](http://www.cplusplus.com/doc/oldtutorial/templates/)
- [Convert uppercase letter to lowercase (ctype tolower) - cplusplus](http://www.cplusplus.com/reference/cctype/tolower/)
