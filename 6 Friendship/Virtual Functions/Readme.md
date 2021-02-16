# Virtual Functions

C++ allows use to use pointers, but in doing so, we lose the ability to use virtual functions in classes. Luckily, we can work around this issue by designating base class functions with the keyword `virtual`. This indicates to the compiler that the base class function may be overriden by a function (of the same) in the derived class.

## Example: function override fails with pointer object
Below is an example of defining a pointer to the derived class (using the base class), where the pointer fails to perform a function override.
```c++
#include <iostream>
using namespace std;

class Mammal {
  private:
    string printStatement = "Mammals can give direct birth.";

  public: 
    void printMe(){
      cout << "Mammal:: " << printStatement << "\n";
    }

};

class Bat: public Mammal {

  private:
    string printStatement = "A new animal.";
  
  public:
    void printMe(){
      cout << "Bat:: " << printStatement << "\n";
    }

};

int main() {
  Bat b1;
  
  // function overriding
  b1.printMe();

  // failed funciton overriding with pointer
  Mammal* prtB = &b1;
  prtB->printMe();
  
  return 0;
}
// Bat:: A new animal.
// Mammal:: Mammals can give direct birth.

```
From the above example, we would expect that a pointer to `b1` (__Mammal* prtB = &b1;__) would print the same statement as `b1` itself (i.e. from the derived class) due to function overloading, however this is not the case, and we find that the `ptrB` prints the statement defined in the __Mammal__ class (i.e. the base class).

## Example: `virtual` keyword
The pointer in the above example failed to perform a function override with the `printMe()` call. To correct this, we can add the keyword `virtual` the function of the _base_ class that we intend to override.

```c++
#include <iostream>
using namespace std;

class Mammal {
  private:
    string printStatement = "Mammals can give direct birth.";

  public: 
    // declaring the function for override
    virtual void printMe(){
      cout << "Mammal:: " << printStatement << "\n";
    }

};

class Bat: public Mammal {

  private:
    string printStatement = "A new animal.";
  
  public:
    void printMe(){
      cout << "Bat:: " << printStatement << "\n";
    }

};

int main() {
  Bat b1;
  
  // function overriding
  b1.printMe();

  // success funciton overriding with pointer
  Mammal* prtB = &b1;
  prtB->printMe();
  
  return 0;
}
// Bat:: A new animal.
// Bat:: A new animal.
```
In the above example, the function defined in the _base_ class was indeed overridden. This indicates that the address the pointer `prtB` points to is that of the derived __Bat__ class, and not the original __Mammal__ class. 

# References:
- [Polymorphism - programiz.com](https://www.programiz.com/cpp-programming/polymorphism)
