# 12. `break` and `continue` statements

Sometimes you may want a loop to end pre-maturely if a specific condition(s) are met, or you may want to skip the execution of certain code blocks within the loop. `break` and `continue` statements help manage that logic.

## `break` statement

```c++
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  cout << i << "\n";
}
```

In the above example, there is an `if` statement check that if `i == 4` is true would break the for loop via the `break` statement. This break happens even if the loops condition `i > 10` remains true.

## `continue` statement

```c++
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
}
```

In the above example, a condition is checked for `i == 4`, if true, then the rest of the code block is not executed, and the loop continues onto the next iteration. 

### `while` loop example

`break` and `continue` statements may also be used in `while` loops.

```c++
int i = 0;
while (i < 10) {
  
  if (i == 7) {
    i++;
    
    // go back to the start of the while loop
    continue;
  }
  
  cout << i << "\n";
  i++;
  
	if (i >= 7) {
    // break out of the while loop
    break;
  }
}
```
