# 8. Conditions: `if`, `else if`, `else`

You can test the validity of conditions (i.e. _true_ or _false_), and execute code if a specific condition is met.

```c++
#include <iostream>
using namespace std;

int main() {

  int  x = 10;

  if (x >= 10) {
    cout << "(x > 10) is true \n";

  } else if (x < 10) {
    cout << "(x < 10) is true \n";

  } else if (x == 10) {
    cout << "(x == 10) is true \n";

  } else {
    cout << "result is false; \n";

  }
  
  return 0;
}

// Output: 
// (x >= 10) is true
```

Conditions can be checked with `if`, `else if`, and `else` statements.

- `if` : this is the first condition checked, should it be _true_: 
  - the this code block is executed. 
  - The next conditions will not be checked. 
  - There can only be a single `if` statement.
  - The `if` statement must be the first statement.
- `else if`: should the condition following `if` be _false_, then this next condition is checked. If the `else if` condition is _true_: 
  - the this code block is executed. 
  - the next conditions will not be checked. 
  - There can be several `else if` conditions, or none at all.
- `else` : should none of the previous conditions be _true_ (i.e. they are all _false_): 
  - then this code block is executed. 
  - There can be a single `else` statement.
  - The `else` condition must be the last statement.
  - The `else` condition is optional.


### Shorthand

There is a shorthand approach to performing an `if`-`else` statement, which uses the `?` (ternary) operator.

```c++
// variable = (condition) ? expressionTrue : expressionFalse;

int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;
```
