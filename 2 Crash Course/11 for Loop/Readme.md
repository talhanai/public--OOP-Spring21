# 12. `for` loop

```c++
for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}
```

The `for` loop is composed of three statements that manage the logic for the execution if the code block.

```c++
for (statement 1; statement 2; statement 3) {
	// ...  code block to be executed
}
```

1. The first statement (`int i = 0` ) executes only once at the start of the loop, and before the execution of the code block. 
2. The second statement (`i < 5`) defines the condition in which the code block is executed. If the condition is not met, the loop ends.
3. The third statement (`i++`) executes on every loop after the code block is executed.

