# STL Library

C++ templates is a powerful way to define general purpose classes. Certain types of classes are found to be so useful that they have been made available for C++ programmers in the form of a _Standard Templates Library_ (STL). The STL allows us to import many useful classes and methods to define useful data structures (e.g. vector, list, map), algorithms (e.g. list, stack, sort), and iterators. We've already worked with some STL class templates in previous sections, such as __\<iostream\>__ to manage Input/Output (I/O) functionality, __\<string\>__ to manage string manipulations, and __\<ctype\>__ to manage character manipulations. You can find the full list of STL in C++ [here](http://www.cplusplus.com/reference/stl/).

## Example: Vector
In the below example, we demonstrate the use of a __vector__ array from the STL library. The vector array is different to the standard array as it has the advantage of managing its own storage allocation.
```c++
// https://www.tutorialspoint.com/cplusplus/cpp_stl_tutorial.htm
#include <iostream>
#include <vector>
using namespace std;
 
int main() {

   // create a vector to store int
   vector<int> vec; 

   // display the original size of vec
   cout << "vector size = " << vec.size() << "\n\n";

   // push 5 values into the vector
   for(int i = 0; i < 5; i++) {
      vec.push_back(i*3);
   }

   // display updated size of vec
   cout << "updated vector size = " << vec.size() << "\n\n";

   // access 5 values from the vector
   for(int i = 0; i < 5; i++) {
      cout << "value of vec [" << i << "] = " << vec[i] << "\n";
   }

   cout << "\n";

   // use iterator to access the values
   vector<int>::iterator v = vec.begin();
   while( v != vec.end()) {
      cout << "value of v = " << *v << "\n";
      v++;
   }

   return 0;
}
// vector size = 0
//
// updated vector size = 5
//
// value of vec [0] = 0
// value of vec [1] = 1
// value of vec [2] = 2
// value of vec [3] = 3
// value of vec [4] = 4
//
// value of v = 0
// value of v = 1
// value of v = 2
// value of v = 3
// value of v = 4
```
The example above demonstrates the use of the following functionality of the STL.
- `.push_back();` demonstrates automated storage allocation.
- `.size()` calculates storage size of vector.
- `vector<int>::iterator v = vec.begin();` initializes an iterator (as pointer).

## Documentation for STL Class Templates
It's not easy to memorize all available methods in a class (the most useful ones are learned through experience), nor is it possible to print a list of available methods in the console during code development. So if you want to find a specific method in the __\<vector\>__ class template, you will have to check in the documentation [here](http://www.cplusplus.com/reference/vector/vector/).

## Source code
The STL source code exists on your machine somewhere and is imported at compile time. You can see the source code of the _libcxx_ implementation of C++ STL here: [https://github.com/google/libcxx](https://github.com/google/libcxx). For example you can see the source code of some of the libraries we have used here:
- \<cmath\>: [https://github.com/google/libcxx/blob/master/include/cmath](https://github.com/google/libcxx/blob/master/include/cmath)
- \<fstream\>: [https://github.com/google/libcxx/blob/master/include/fstream](https://github.com/google/libcxx/blob/master/include/fstream)

# References:
- [STL Tutorial - cplusplus](https://www.tutorialspoint.com/cplusplus/cpp_stl_tutorial.htm)
- [List of Standard Template Library class templates](http://www.cplusplus.com/reference/stl/)
