# First Program

## 1. Print Output

To get a first sense of programming in C++, the code below demonstrates the most basic program you can run. Copy and paste this into your favorite code editor and run it.

```c++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

You should see in your console a print out of the phrase "Hello World". Through tradition, printing out this phrase is the first step performed of almost any coding project.

## 2. Elements of C++ Code
At first glance, it may seem there are a lot of mysterious elements to the code above, so let's break down each element and describe their functionality.

- `#include <iostream>` is an import statement that imports the `iostream` library for input / output functionality.
- `using namespace std;` states that the naming conventions used in the program come from the standaard library.
- `int main(){ ... }` is the first function to be executed in a C++ file.
  - `{ }` the curly braces contains the code to be executed.
- `cout << "Hello World";` generates a print statement to the Console.
  - `cout` is an object that handles print outputs of text.
  - `<<` operator defines the print statements.
  - `;` defines the end of a function.
- `return 0;` ends the main function.

You may also notice that code has been indentation. This helps make the code readable, but is not necessary for successfully running it.

## 3. Adding a new line

You may notice that when you print statements with `cout`, the outputs do not neatly print out onto seperate lines. This is because the console has no concept of a newline (i.e. "Enter" key) unless you specify it with a specific symbol.

```c++
// Adding a single newline.
cout << "Hello World! \n";

// Adding multiple (two) newlines.
cout << "Hello World! \n\n";

// Adding a newline with `endl` command.
cout << "Hello to the second line." << endl;
```
In the example above you can see that a newline may be inserted with a specially designated symbol `\n`. This symbol works on almost any text processing interface on a machine (even text files encode newlines this way, hidden to your eyes). The `endl` notation may also be used, which is specific to C++.

## 4. Comments

As you may have inferred, comments can be inserted into code. This helps make things readable and organized, especially if you want to communicate your thought process to fellow coders and even your future self. In C++ there are several ways to insert comments as displayed below:

```c++
// This is a comment
cout << "Hello World!";

cout << "Hello World!"; // This is a comment

/* This is also a comment
that can wrap across multiple lines */
cout << "Hello World!";
```

