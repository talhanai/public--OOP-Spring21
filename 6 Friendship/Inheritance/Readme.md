# Inheritance
An important functionality in C++ the ability for a class to inherit data variables and functions of another class, or even multiple classes. This is useful as it allows us to re-use existing code and class definitions, and forces us to create structured and extendable code.

## Example: Inheritance
```c++
// https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm
#include <iostream> 
using namespace std;

// Base class
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};

int main(void) {
   Rectangle Rect;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << "\n";

   return 0;
}
// Total area: 35
```
In the above example a _base_ class __Shape__ is defined with protected data variables (`width`, `height`) and public methods (`setWidth()`, `setHeight()`). A _derived_ class __Rectangle__ is defined which extends on the class defined in __Shape__ via the declaration `class Rectangle: public Shape {}`. This derived class provides an additional method `getArea()`. All methods are accessible from the object `Rect`.

## Example: Multi-level Inheritance
It is possible to derive a class, which itself was derived from another class. The example below demonstrates this:
```c++
// https://www.programiz.com/cpp-programming/multilevel-multiple-inheritance
#include <iostream>
using namespace std;

class A
{
    public:
      void display()
      {
          cout << "Base class content.";
      }
};

// class B is derived from A
class B : public A
{

};

// class C is derived from B which is derived from A
class C : public B
{
 
};

int main()
{
    C obj;
    obj.display();
    return 0;
}
// "Base class content."
```

## Example: Multple Inheritance
It is also possible for a class to be derived from multiple classes in a single declaration. The example below demonstrates this:
```c++
// https://www.programiz.com/cpp-programming/multilevel-multiple-inheritance
#include <iostream>
using namespace std;

class Mammal {
  public:
    Mammal()
    {
      cout << "Mammals can give direct birth." << endl;
    }
};

class WingedAnimal {
  public:
    WingedAnimal()
    {
      cout << "Winged animal can flap." << endl;
    }
};

class Bat: public Mammal, public WingedAnimal {

};

int main()
{
    Bat b1;
    return 0;
}
// "Mammals can give direct birth."
// "Winged animal can flap."
```
In the above example, when the __Bat__ object `b1` is created, the constructed of both base classes __Mammal__ and __WingedAnimal__ print out their statements defined in each constructor, in the respective order they were declared as the base class.

## Inheritance Access Control
You may have noticed that our derived classes all had the keyword `public`. Derived classes may be inherited as `public`, `private` or `protected`. Recall that `private` members are only accessible within the class and cannot be inherited, `protected` members are also only accessible within the base class but can be inherited, while `public` members can be accessed out side of the class.

- `public`: all members remain with the same access in the derived class as in the base class.
- `private`: `public` and `protected` members of the base class are `private` in the derived class.
- `protected`: `public` and `protected` members in the base class become `protected` in the derived class.


# References:
- [C++ Inheritance - tutorialspoint.com](https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm)
- [Multilevel Multiple Inheritance - programiz.com](https://www.programiz.com/cpp-programming/multilevel-multiple-inheritance)
- [Public, Protected and Private Inheritance in C++ Programming - programiz.com](https://www.programiz.com/cpp-programming/public-protected-private-inheritance)
