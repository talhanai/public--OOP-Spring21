# 13. Memory Addresses: `&`

If you are ever curios about where exactly a value is stored on memory, you can use the symbol `&` to reveal it. 

```c++
string dessert = "cake";  
cout << &dessert << "\n"; 
// Output: 0x7ffe8c00f3f8

// updating value
dessert = "ice cream"; 
cout << &dessert << "\n";
// Output: 0x7ffe8c00f3f8
```

In this example, my variable `dessert` points to a memory location encoded as a hexadecimal value __0x7ffe8c00f3f8__ (your value will be different if you run the above example). Even if I update the value of the variable `dessert`, the memory address remains the same. That is, a particular address has been allocated to store the value of variable `dessert`. This [magic](https://cs.stanford.edu/people/eroberts/courses/cs106b/handouts/21-MemoryAndC++.pdf) of memory allocation and hexadecimal memory addressing is performed behind-the-scenes with machine-level logic.
