# Setters and Getters
It is good practice to make clear how we expect variables to be manipulated. In the case of classes and objects, it is good practice to define _set_ and _get_ methods that assign (set) values of our variables and retreive (get) values of variables. In this way we can also define variables to be `private:` members of our class, which ensures that there is only one mechanism to update variable values are through _set_ and _get_ methods. This coding paradigm helps reminds ourselves and other programmers of the code if the _intended_ approach for accessing variables.

```c++
// https://www.w3schools.com/cpp/cpp_encapsulation.asp
#include <iostream>
using namespace std;

class Employee {

  private:
    int salary;

  public:
  
    // setter
    void setSalary(int s){
      salary = s;
    }

    // getter
    int getSalary(){
      return salary;
    }



};

int main(){  

  Employee John;
  John.setSalary(3000);
  cout << John.getSalary() << "\n";

  return 0;
}
// 3000
```
In the example above, we define a public setter using the _set_ phrase in _setSalary()_ and we define a getter using the _get_ phrase in _getMethod()_. The setter and getter only have a single operation to perform (assigning, and returning a value). The variable `salary` never needs to be accessed outside the class and is therefore define as a `private:` member.

# References
- [C++ Encapsulation - w3schools.com](https://www.w3schools.com/cpp/cpp_encapsulation.asp)
