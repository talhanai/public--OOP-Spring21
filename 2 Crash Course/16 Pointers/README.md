# 15. Pointers

A powerful element of C++ is it's ability to _store the memory address_ of another variable. This reduces the need to create new variables and copy existing values into new memory locations, which for larger programs helps increase computation speed and use memory resources efficiently.

```c++
string flower   = "rose";
string* pointer = &flower;

cout << flower   << "\n"; // rose
cout << &flower  << "\n"; // 0x7ffc8db22c28
cout << pointer  << "\n"; // 0x7ffc8db22c28
cout << &pointer << "\n"; // 0x7ffc8db22c08
cout << *pointer << "\n"; // rose
```

In the above example, the variable `pointer` is _assigned_ the value of the memory location using the __string*__ expression. `pointer` stores the memory address of the variable `flower`. Using the dereference operator `*` we can see what _value_ is stored in the memory address that `pointer` points to.

## Modifying Pointer value

It is possible to modify the value at the memory address that the pointer points to. Doing so will also change the value of any variables that are located at the memory address that the pointer points to.

```c++
string flower   = "rose";
string* pointer = &flower;

// changing value of pointer
*pointer = "sunflower";

cout << flower << "\n"; // sunflower
```

As you can see in the above example, `pointer` stores the memory address that is `&flower`. Using the dereference operator, updating `*pointer`  assigns a new value to the address in `pointer`. Consequently, the value of `flower` is updated since it's value is stored in `pointer`. It may take a moment to absorb the logic of pointers, references, and dereferences. Pointers are so powerful, that across different languages such as _C#_ and _Python_ they don't exist by dedsign because it opens up undue complications.
