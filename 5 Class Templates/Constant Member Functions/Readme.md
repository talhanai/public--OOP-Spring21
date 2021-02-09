# Constant Classes and Constant Member Functions

## Constant Classes
Object variable values can be made to remain static using the __const__ keyword. 
```c++
// constant object
const Car myConstCar("Honda", 54);

// Invalid method call
myCar.setModelValue("Nissan"); 

// Invalid variable manipulation
myCar.Model = "BMW";
```


### Example: Constant Classes
```c++
#include <iostream>
using namespace std;

class Car {
  public:
    string Model;
    int Mileage;

    Car(string model, int mileage){
      Model = model;
      Mileage = mileage;
    }

    void setModelValue(string model) { Model = model; }
};

int main() {

  // mutable object
  Car myCar("Toyota", 54);

  myCar.setModelValue("Nissan");
  cout << myCar.Model << "\n";

  myCar.Model = "BMW";
  cout << myCar.Model << "\n";

  // const object
  const Car myConstCar("Honda", 54);
  cout << myConstCar.Model << "\n";

  // INVALID
  // myCar.setModelValue("Nissan"); 
  // myCar.Model = "BMW";

  return 0;
}
```
From the above example, creating an object that cannot be altered is done with the __const__ keyword as the object is created. The values of object variables cannot be directly changed (after object creation), nor can an object __method__ change the values of object variables.

## Constant Member Functions
If you want to access methods of constant objects, then those methods have to be defined as constant. The following code will demonstrates this: 
### Example: Constant Member Function
```c++
#include <iostream>
using namespace std;

class Car {
  public:
    string Model;
    int Mileage;

    Car(string model, int mileage){
      Model = model;
      Mileage = mileage;
    }

    void setModelValue(string model) { Model = model; }
    void doNothing() const { cout << 0 << "\n"; }
    
};

int main() {

  // const object
  const Car myConstCar("Honda", 54);
  cout << myConstCar.Model << "\n";

  // valid call
  myConstCar.doNothing();

  return 0;
}
```

The above code works because the method `doNothing()` was declared as a constant. 

```c++
// can't be executed by const object
void doNothing() { cout << 0 << "\n"; }

// accessible member function
void doNothing() const { cout << 0 << "\n"; }
```
Notice that even a method like `doNothing()` that does not manipulate any data variables, can't be called by a constant object unless the method itself is defined as a constant. Here are the situations in which constant member functions are invalid.
- (invalid) a constant member function cannot edit data variables of a constant object.
- (invalid) a constant member function cannot call a non-constant member function (regardless of whether the non-constant member function manipulates a data variable or not).

Also important to note is that constructors and destructors cannot be defined as constant. After a (constant) object is initialized, it's data variables take on the constant definition. The constant effect is removed when it the object is deleted (and the destructor executes).

# References:
- [Constant class objects and member functions - learncpp.com](https://www.learncpp.com/cpp-tutorial/const-class-objects-and-member-functions/)
