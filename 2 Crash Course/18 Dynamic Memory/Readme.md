# 19. Dynamic Memory Allocation

We've seen previously that variables and variable sizes need to be defined in advance. There are scenarios where it is hard to determine the variable size in advance, fortunately there are two keywords __new__ and __delete__ that allow us to allocate memory dynamically.

## Allocating Memory
```c++
int* foo;
foo = new int[5];
```

In the example above, a pointer variable `foo` is defined wtih no value assigned. In the second line, the pointer variable foo is then allocated an array to be of size 5.

To access _value_ of the elements of of the pointer variable, the index notation can be used.
```c++
cout << foo[0] ; // 0 (no value has been assigned yet)
```

`foo` is a pointer to the memory address of `foo[0]`.
```c++
cout << foo     << "\n"; // 0x210fe70
cout << &foo[0] << "\n"; // 0x210fe70
cout << foo[0]  << "\n"; // 0 
```

When the variable foo was allocated those 5 memory slots, the machine handles allocating them in neighboring locations.
```c++
cout << &foo[0] << "\n"; // 0x210fe70
cout << &foo[1] << "\n"; // 0x210fe74
cout << &foo[2] << "\n"; // 0x210fe78
cout << &foo[3] << "\n"; // 0x210fe7c
cout << &foo[4] << "\n"; // 0x210fe80
```

If the size of the variable needs to be changed, then doing so allocates new memory for that variable.
```c++
foo = new int[7];
cout << &foo[0] << "\n"; // 0x231d2a0
```

## Catching Memory Errors
If you do not have enough space in memory to allocate, an error will be thrown. You may not want your program to completely stop in such a scenario, but catch the error and continue on to perform another function. 
```c++
foo = new (nothrow) int [5];

if (foo == nullptr) {
  // error assigning memory. Take measures.
}
```
- The `nothrow` expression can be used to mute errors during an attempt at memory allocation. 
- Your code can then proceed to check if the `foo` variable has been allocated memory by checking if it has a memory address with `foo == nullptr`.

## De-allocating Memory
Dynamic array allocations and de-allocations have to be managed formally in the code. So you have to be mindful about de-allocating especially when memory usage can be high because memory won't be released until the program terminates. To de-allocate memory you can use the `delete` expression as follows:

```c++
// array allocation
int* foo;
foo = new int[5];

delete[] foo;
```

# Reference
- [C++ Tutorial on Dynamic Memory Allocation](https://www.cplusplus.com/doc/tutorial/dynamic/)
- [new and delete Operators for Dynamic Memory](https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/)
