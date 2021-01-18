# 3. Keeping Code Neat
We already know how to run a C++ program, and how to define variables, so now is a good time to establish best practices for writing code. You might think that we haven't covered enough concepts yet to be talking about keeping code neat, but keeping work neat is extremely important, so we should give it the importance it deserves by covering it early. Indeed, the best code is one that is readable, making bugs easy to catch and inviting enough for others to extend on it.

## Variable name best practices

By way of example, here are some poor and good strategies for defining variable names. Don't be shy to make things descriptive (even if it seems long) and easy to read (using _camelCase_).

```c++
// [Poor] undecipherable variable name
int x = 7;

// [Poor] descriptive but hard to read
int numberofdaysinweek = 7;

// [Good] descriptive variable name
// [Good] uses camelCase for readability
int numberOfDaysInWeek = 7;
```

## General rules for variable names

- Variable names can contain alphabet letters, digits, and underscores.
  - Variable names cannot contains special characters such as `!`, `@`, or `?`.
  - Variable names cannot be digits or start with a digit. 
  - Variable names can start with an underscore or alphabet characters:
    - `_myVar1`, `aFantasticVariable`, `another_great_1_to_define`.
- Variables names are case sensitive: 
  - `numberofdays` and `numberOfDays` are different variables.
- Reserved keywords cannot be used as variable names: 
  - __int__, __string__, __cout__, etc. are reserved keywords.
  
## References
- [C++ Code Guidelines](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines): Extensive documentation on C++ coding best practices.
