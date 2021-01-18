# 10. `while` Loop

## `while`

A `while` loop continues running while a condition is _true_, and stops when the condition becomes _false_.

```c++
int i = 0;
while (i < 5) {
  cout << i << "\n";
  i++;
}
```

## `do-while`

A variation of the `while` loop is the `do-while` loop. The difference here is that the condition to check that the loop should continue is evaluated at the _end_ of code block instead of at the beginning of the code block.

```c++
int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 5);
```
