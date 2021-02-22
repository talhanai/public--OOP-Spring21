# Function Overriding


## Example: Ambiguity and Scope Resolution
You might come across an issue where two different classes may have functions with the same name, in such a scenario, you can call a specific function by defining the base class. The example below demonstrates how to resolve ambiguities in function names.

```c++
// https://www.programiz.com/cpp-programming/multilevel-multiple-inheritance
#include <iostream>
using namespace std;

class Mammal {
  private:
    string printStatement = "Mammals can give direct birth.";

  public: 
    void printMe(){
      cout << printStatement << "\n";
    }

};

class WingedAnimal {
  private:
    string printStatement = "Winged animal can flap.";
  
  public:
    void printMe(){
      cout << printStatement << "\n";
    }
};

class Bat: public Mammal, public WingedAnimal {

  private:
    string printStatement = "A new animal.";
  
  // *Uncomment to allow for function overriding
  // public:
  //  void printMe(){
  //    cout << printStatement << "\n";
  //  }

};

int main()
{
    Bat b1;
    
    // scope resolution
    b1.Mammal::printMe();
    b1.WingedAnimal::printMe();
    
    // *function overriding error
    b1.printMe();
    
    return 0;
}
// Mammals can give direct birth.
// Winged animal can flap.
```
In the above example, the call to similarly named functions are resovled by specifiying the scope of the function in the form of `objectName.ClassName::functionName`. Trying to call the function directly (e.g. `b1.printMe()`) would result in an error.

## Example: Function Overriding
We can also define a new function in the derived class that would override the functions in the base class.
```c++
// https://www.programiz.com/cpp-programming/multilevel-multiple-inheritance
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
    
    return 0;
}
// Bat:: A new animal.
```

In the above example, the function `printMe()` in the class __Bat__ overrode the function `printMe()` defined in the class __Mammal__.
