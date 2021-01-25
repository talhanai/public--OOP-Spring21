# 5. Namespaces

We have been automatically including `using namespace std;` in the headers of all of our code. If we do not make this declaration, then a small adjustment to our code would need to be made.

```c++
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
```
By eliminating `using namespace std;`, we now have to substitute some of our standard expressions such as __cout__ and __cin__ with __std::cout__ and __std::cin__. The formality is required to tell the compiler that we are refering to __cout__ from the standard library.

## Custom Namespace
We can also define our own namespace variable, which is useful when we have large code bases with potentially the same variable name being used to refer to different things.
```c++

#include <iostream> 
using namespace std; 
  
// Variable created inside namespace 
namespace first 
{ 
    int val = 500; 
} 
  
// Global variable 
int val = 100; 
  
int main() 
{ 
    // Local variable 
    int val = 200; 
  
    // These variables can be accessed from 
    // outside the namespace using the scope 
    // operator :: 
    cout << first::val << '\n';  
  
    return 0; 
} 

```

In the above example, we are using the `val` variable as a global variable, in our main code as a local variable, while _also_ using a different `val` variable from our __namespace first__ scope. Declaring a namespace allows us to avoid conflicts with variable names (and functions).

# Reference
- [Namespace in C++ - geeksforgeeks.org](https://www.geeksforgeeks.org/namespace-in-c/)
- [Page 290 of Principle and Practice in C++ by Bjarne Strastroup](http://www.nylxs.com/docs/Programming__Principles_and_Practice_Using%20C++%20(Cpp%20Cplusplus).pdf)
