# Compiling Code
We've been compiling and executing code by clicking the __Run__ button. There may be scenarios where we will want to compile code in the absence of an IDE (Integrated Development Environment - Visual Studio, Xcode), for example if we wanted to deploy code on a remote server, on a cloud server, or remote high performance computing cluster. In such a scenario, we can compile and run code from the command line (aka, terminal, shell). For the following example we will be using the following files which are in this directory:

- __main.cpp__ is the file that contains the `int main() {}` function.
- __factorial.cpp__ contains a supporting function `factorial()` called by __main.cpp__.
- __print.cpp__ also contains a supporting function `print()` called by __main.cpp__.
- __function.h__ is a _header_ file that declares the supporting functions `factorial()` and `print()`.

## Compiling Code from the Command Line
We can access the shell directly in [repl.it](repl.it) (which is a linux ubuntu terminal) and compile the code as follows:

```bash
clang++-7 -o main factorial.cpp main.cpp print.cpp
```
- `clang++-7` is the compiler (alternatively one may use __g++__).
- `-o main` defines the name of the output executable.
- `factorial.cpp main.cpp print.cpp` defines the input source files.

## Executing Compiled Code from the Command Line
We will now find an executable that we can execute from the command line.
```bash
./main
```

### Output
The resulting output should be:
```
Factorial of [7] is: 5040
```


# References:
- [clang documentation - clang.llvm.org](https://clang.llvm.org/docs/ClangCommandLineReference.html)
