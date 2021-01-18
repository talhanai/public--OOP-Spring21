# 13. Arrays

If you want to store multiple values, you can do so with arrays.

```c++
// declares an array with space for 4 elements
string fruits[4];

// assigns 4 string elements to an array
string fruits[4] = {"orange", "apple", "guava", "lemon"};

// assigns 3 integer values to an array
int myNum[3] = {10, 20, 30};
```

## Manipulating Arrays

```c++
// define array values
string fruits[4] = {"orange", "apple", "guava", "lemon"};

// print first element
cout << fruits[0] << "\n";
// Output: orange

// update i-th element
fruits[1] = "banana";
```

Remember that the _first_ element of an array starts with an index 0.

## Looping through Arrays

You can use loops to iterate through each element in an array.

```c++
string fruits[4] = {"orange", "apple", "guava", "lemon"};

for(int i = 0; i < 4; i++) {
  cout << i << " : " << fruits[i] << "\n";
}
```

## Array Size

Array sizes must be declared in advance. If you leave the size empty, then it will be initialized to the same array size of the assigned array of values.

```c++
// declares the array to be of size 5
string fruits[5];

// sets the size to 3 which is the size of the assigned array 
// (even if not formally declared as fruits[3])
string fruits[] = {"orange", "apple", "guava"};

// sets the size to 4, even if only 3 elements exist in the array
string fruits[4] = {"orange", "apple", "guava"};

// trying to assign a value beyond the size declared for the array
// returns an error
fruits[5] = "banana";
```
