# Functions of Objects
There may be scenarios where we want to pass objects to external functions (functions that are not part of the class) and receive objects from external functions.

## Example: Passing Object as an argument
Functions can be created that accept objects as parameters, and takes this form with the term "Object" designating a class name.
```c++
void functionName(Object objectName){
  // code ...
}
```

The example below demonstrates this functionality.
```c++
#include <iostream>
using namespace std;

class Employee {

  public:
    double Salary;
    double Age;

    // constructor to initialize employee information
    Employee(double salary, double age) {
      Salary = salary;
      Age    = age;
    }
};

// function that has the Employee object as a parameter
void calculateRaise(Employee emp) {

  // calculate the raise as a function of age
  double experience = emp.Age / 100 - 0.2;
  double raise = experience * emp.Salary;
  cout << "Annual raise = $" << raise << "\n";

}


int main() {
  
  Employee John(33000, 28);

  // passing the object as the argument
  calculateRaise(John);

  return 0;

}
// Annual raise = $2640
```
In the above example, we create an __Employee__ class. We also create a function `calculateRaise()` that has a parameter of type __Employee__ and variable name `emp`. The object `emp` accesses the initialized parameters (`emp.Age`, `emp.Salary`) just like the original object `John`.

## Example: Returning an object
If we wanted to create a function that _returns_ an object, we can structure that as follows:

```c++
Object functionName(parameters ...){
  // code ...
  return objectName
}
```

The example below demonstrates this functionality:
```c++
#include <iostream>
using namespace std;

class Employee {

  public:
    double Salary;
    double Age;

    // constructor to initialize employee information
    Employee(double salary, double age) {
      Salary = salary;
      Age    = age;
    }
};

Employee defineEmployee() {

  // defining John with salary and age values
  Employee John(33000, 28);

  return John;

}

int main() {

  Employee John = defineEmployee();
  cout << "Age:" << John.Age << "\n";
  cout << "Salary:" << John.Salary << "\n";

  return 0;

}
// Age:28
// Salary:33000
```
In the above example, the function __defineEmployee()__ initializes and returns the object `John` of type __Employee__.

# References
- [C++ Objects and Functions - programiz.com](https://www.programiz.com/cpp-programming/pass-return-object-function)
