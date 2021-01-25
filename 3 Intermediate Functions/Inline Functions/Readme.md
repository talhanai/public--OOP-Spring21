# 1. Inline Functions

C++ provides the ability to optimize performance, one of which is information in the code that __we__ can provide to the compiler. 

## Optimizations
Among several tasks, the compiler automatically works to map the relationship between function definitions and function calls with the code base, so that when a function is executed, the program knows where to look for the function's code block. To improve the speed of code execution, we can designate to the compiler that the code block of a function can be replaced in any location where the function was called. Here is an example of this concept:

```c++
// Version A: human readable
#include <iostream>
using namespace std;

void calcSum(int x, int y){
  cout << "Sum: " << x + y << "\n";
}
int main(){  

  calcSum(2, 3);
  calcSum(7, 4);
  calcSum(15, 1);

}
```
The above code will run faster if written as follows:

```c++
// Version B: performance optimized
#include <iostream>
using namespace std;

int main(){  

  cout << "Sum: " << 2 + 3 << "\n";
  cout << "Sum: " << 7 + 4 << "\n";
  cout << "Sum: " << 15 + 1 << "\n";

}
```
But remember, C++ was designed to be easy to work with for humans by abstracting away from the machine's logic and the machine's preferences for how things should be written for optimization. Therefore, to maintain readability, generalizability, and ease of use, C++ allows us to use the `inline` specifier to indicate that _at compile time_, the code should be restructured from the Version A to B (which allows for better code performance).

```c++
// Version C: human readable and performance optimized
#include <iostream>
using namespace std;

inline void calcSum(int x, int y){
  cout << "Sum: " << x + y << "\n";
}
int main(){  

  calcSum(2, 3);
  calcSum(7, 4);
  calcSum(15, 1);

}
```

There are some situations where the compile will ignore the `inline` definition, such as when a function has a loop, recursion, or switch statement.


# Reference
- [Inline Function Specifier](https://en.cppreference.com/w/c/language/inline)
- [How C++ Works: Understanding Compilation](https://www.freelancer.com/community/articles/how-c-works-understanding-compilation)
- [Inline Functions in C++](https://www.geeksforgeeks.org/inline-functions-cpp/)
