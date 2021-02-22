# Exceptions

You may have noticed that errors often appear as we develop code. Sometimes errors appear due to situations we didn't anticipate, such as trying to open a file that we expected to exist but it doesn't exist. We may not be able to fix such errors during code development, but we may build ways to catch it so that it doesn't disrupt our code and which allows us to log it for future diagnositcs. C++ provides us a way to handle execptions in the following structure:
```c++
try {
  // ... code to try
  
  // exception
  throw (argument1, argument2); 
}
catch (type parameter1, type parameter2) {
  // ... code to handle error
}
```

## Example: `try` `catch` with `throw`
The example below demonstrates how we can try code and catch exceptions.
```c++
#include <iostream>
using namespace std;

int main () {

  string weather = "flurry";

  try {

    if (weather != "flurry") {
      cout << "The weather is not bad, you can safely go outside" << endl;
    } else {
      throw (weather);
    }
  }
  catch (string weather) {
    cout << "Weather is: " << weather << endl;
    cout << "Weather is unsafe.\n";
  }
  
  return 0;

}
// Weather is: flurry
// Weather is unsafe.
```
The above example shows code within `try {}` being excecuted, however because a condition is met where `throw` is executed, the `catch () {}` code block also executes. The `throw` expression passes the variable `weather` as an argument to `catch ()`. 

## Parameters of `catch`
`catch` accepts any parameter passed by `throw ()`, it  may also accept any type of exception using the `...` three dot notation.
```c++

// Handling specific arguments in exception
try { 
  // ... code
  throw (int myNumg);
}
catch (int myNum) { // .. code }


// Handling any exception
try { 
  // ... code
  throw (int myNum);
}
catch (...) { // .. code }
```

## Example: `try` `catch` with \<exception\> library
The C++ Standard Library have a standard set of exceptions that are thrown. The example below demonstrates catching an exception thrown due to a failure in memory allocation.
```c++
// bad_alloc standard exception
#include <iostream>
#include <exception>
using namespace std;

int main () {
  try {
    int* myarray= new int[1000000000000000];
  }
  catch (exception &e) {
    cout << "Standard exception: " << e.what() << endl;
  }
  return 0;
}
// Standard exception: std::bad_alloc
```
In the above example we try to allocate an incredibly large array within the `try{}` statement. That code block fails, so an exception is thrown which executes the `catch () {}` statement. The catch statement has an `exception &e` object from the imported __\<exception\>__ library, that contains information on the type of exception thrown with `e.what()`. Note that you may have to increase the storage allocation for the above array to see the exception thrown. A full list of standard exceptions can be viewed [here](http://www.cplusplus.com/doc/tutorial/exceptions/).



# References:
- [C++ Exceptions - w3schools.com](https://www.w3schools.com/cpp/cpp_exceptions.asp)
- [Exceptions - cplusplus.com](http://www.cplusplus.com/doc/tutorial/exceptions/)

