# 14. References

A variable can reference another variable using the `&` symbol.

```c++
string soda = "coke";  // soda variable
string &drink = soda;  // reference to soda

cout << soda  << "\n"; // Output: coke
cout << drink << "\n"; // Output: coke

cout << &soda << "\n";  // Output: 0x7ffed26773a8 (hexadecimal value)
cout << &drink << "\n"; // Output: 0x7ffed26773a8 (hexadecimal value)


// changing variable
soda = "pepsi";
cout << soda  << "\n";  // Output: pepsi
cout << drink << "\n";  // Output: pepsi
cout << &drink << "\n"; // Output: 0x7ffed26773a8 (hexadecimal value)
cout << &soda << "\n";  // Output: 0x7ffed26773a8 (hexadecimal value)
```

In the example above the variable `drink` references the variable `soda`. When the value of `soda` is updated,  the value of `drink` also updates. That is, the `drink` value is whatever the `food` value is.  `&drink` references the location in memory which contains the value of `soda` and prints as a hexadecimal value (0x7ffed26773a8) - your value will probably be different if you run the example. So both `&soda` and `&drink` map to the _same_ memory location. Can you guess what happens if you change the value of `drink`?

```c++
string soda = "coke";  // soda variable
string &drink = soda;  // reference to soda

drink = "sprite";
cout << soda  << "\n";  // Output: sprite
cout << drink << "\n";  // Output: sprite
cout << &drink << "\n"; // Output: 0x7fffee6d3ef8 (hexadecimal value)
cout << &soda << "\n";  // Output: 0x7fffee6d3ef8 (hexadecimal value)
```

Because `&drink` and `&soda` map to the same memory location, changing the value of one variable will also change the value of the other variable.

