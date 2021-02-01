# 2. Constructors

During object creation, a default function can be automatically, called a __constructor__. Here is an example:

```c++
class  Model {
   public:
   
       // constructor
       Model() {
         // code
       }
};
```
In the example above, the `Model()` function is a constructor of the class `Model`. The constructor in C++ has the _same name_ as the class, is _public_, and has _no return type_. A constructor with no defined parameters (like the above example), is termed the "default constructor", otherwise it is termed as "parameterized constructor".

## Example: Default Constructor
The example below demonstrates the use of a default constructor:
```c++
#include <iostream>
using namespace std;


class Drink {

   public:
   
      // default constructor
      Drink() {

         // variable private to the function
         int volume = 12;
         cout << "Volume: " << 12 << "\n";

      }

};


int main() {

  // creating object
  Drink mydrink;

  return 0;

}
// Volume: 12
```
When the object is created, the constructor is automatically executed.

## Example: Parameterized Constructor
A constructor can also be defined with parameters, which is general good practice to be explicit, and provides flexibility in with variable initiailization. The example below demostrates working with parameterized constructors.
```c++
#include <iostream>
using namespace std;


class Drink {

  public:
   
      // parmetrized constructor
      Drink(int volume) {

       // variable private to the function
       cout << "Volume: " << volume << "\n";

      }

};


int main() {

  // creating object
  Drink myDrink(10);
  Drink myDrinkSmall(4);

  return 0;

} 
// Volume: 10
// Volume: 4
```
The constructor can now read the argument `volume`, which initializes the variable of the object.

## Example: Passing variables within a class
An object may want to generate information based on the variables it was initialized with. Variables global to the class can be initialized, with the constructor assigning the values on object creation.

```c++
#include <iostream>
using namespace std;

class Drink {

  private:
    int Volume;
    int caloriesPerVolumetricUnit = 23;
    int Calories;

  public:
   
     // parametrized constructor
     Drink(int vol) {

       // assigning 'vol' to private global variable 'Volume'
       Volume = vol;

      }

     void calculateCalories(){
       Calories = Volume * caloriesPerVolumetricUnit;
       cout << "Volume: "   << Volume   << "\n";
       cout << "Calories: " << Calories << "\n";
     }

};


int main() {

  // creating object
  Drink myDrink(10);
  myDrink.calculateCalories();

  return 0;

}
// Volume: 10
// Calories: 230
```
In the above example, `Volume` is a private variable global to the class, while `vol` is local to the constructor. On object creation, the constructor initializes the global variable `Volume = vol`.

# Reference
- [C++ Constructors - programiz.com](https://www.programiz.com/cpp-programming/constructors)
