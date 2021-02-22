# Makefiles

Makefiles are a great way to record commands needed to compile code. Below is an example of a makefile, the name of which is _makefile_. The file is defined to run this command: `clang++-7 -pthread -std=c++17 -o main main.cpp`.

```bash
# The compiler
CXX = clang++-7

# Compiler flags 
#  -pthread for multi-threading
#  -std for C++ version
CXX_FLAGS = -pthread -std=c++17

# Name of executable file
EXECUTABLE = main

# Command to run with `make`
all: $(EXECUTABLE)

$(EXECUTABLE): main.cpp
	$(CXX) $(CXX_FLAGS) -o $(EXECUTABLE) main.cpp

# Command to run with `make clean`
clean:
	$(RM) $(EXECUTABLE)
```
1. To compile code with the above makefile you can run: `make` or `make all`.
2. If __main__ already exists, the makefile will not run to overwrite it, so you will need to remove it with `make clean`.

- `CXX` defines the compiler type.
- `CXX_FLAGS` are flags to define how the compiler runs, in the above case it allows for multi-threaded compile with `-pthread`, and to compile with version 17 of c++ defined by `-std=c++17`.
- `EXECUTABLE` is the name we give to the executable file.
- `all:` defines what will be executed when `make all` is called; this will compile an executable __main__ from the source __main.cpp__
- `clean:` defines what will be executed when `make clean` is called; this will remove the executable __main__.

Note that a makefile is sensitive to tabs and indents, you can check for tabs/indents with `cat -e -t -v makefile` in bash.

# References:
- [C++ Makefile Tutorial - softwaretestinghelp](https://www.softwaretestinghelp.com/cpp-makefile-tutorial/#:~:text=A%20makefile%20is%20nothing%20but,command%20to%20build%20the%20targets.&text=A%20makefile%20typically%20starts%20with,in%20C%20or%20C%2B%2B%20and%20.)
- [How to write a good makefile for C++ - dev.to](https://dev.to/mendoza/how-to-write-a-good-makefile-for-c-32e3)
- [xivSolutions/Makefiles/app-template-example - github.com](https://github.com/xivSolutions/Makefiles/blob/master/app-template-example)
