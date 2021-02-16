# Operator Overloading

C++ operators such as `+` (addition), `<` (less than), `--` (decrement), `<<` (print) may be redefined. This behavior is termed _operator overloading_. There may be scenarios where we want to extend how these operators behave to suit a specific context. The example below demonstrates how to overload the `--` decrement operator within a class.

```c++
#include <iostream>
using namespace std;

class OClass {
  private:
    int count;

  public:
    OClass(int cnt){
      count = cnt;
    }

    // prefix decrement operator
    void operator--() {
      count = count - 3;
    }

    // postfix decrement operator
    void operator--(int) {
      count = count - 5;
    }

    void print() { 
      cout << "Count: " << count << endl; 
    }
};


int main() {

  OClass obj(4);

  // overloaded decrement
  --obj;
  obj.print();

  // overloaded decrement
  obj--;
  obj.print();

  // original decrement
  int i = 5;
  i--;
  cout << "Count: " << i << endl;

  return 0;
}
```
In the example above, we overloaded the decrement operator `--` to decrement by three or five depending on how the decrementer was called (as a prefix or postfix to the object calling it). You should notice that the operators are all functions and can be re-defined as such. When overloading the decrement operator, the _prefix_ of it is defined as __void operator--()__, while the _postfix_ version is defined as __void operator--(int)__. Re-defining the decrement operator does not overload the global instantiation of the decrement operator. Only operators can be overloaded, and almost all of them can be overloaded with a few exceptions. You can view a full list [here](https://docs.microsoft.com/en-us/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=msvc-160).

## References
- [C++ Operator Overloading - guru99.com](https://www.guru99.com/cpp-operator-overloading.html)
- [Types of Operator Overloading in C - geeksforgeeks](https://www.geeksforgeeks.org/types-of-operator-overloading-in-c/)
