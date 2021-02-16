# Friendship

When we define classes, they can only access their own private members, and do not have access to private members of other classes. However, we may want to allow a class to access private members of another class, we can use the __friend__ keyword to allow this.

```c++

class Room {
  private:
    int Length;
    int Width;
    
    // the class House now has access to private members of Room
    friend class House;
    
}
```


## Example: `friend` class
We demonstrate the use of a __friend__ class in the example below.
```c++
#include <iostream>
using namespace std;

class Room {
  private:
    int Length;
    int Width;
    
    // the class House now has access to private members of Room
    friend class House;

  public:
    Room(int len, int wid){
      Length = len;
      Width  = wid;
    }
    
};

class House {
  public: 
    int Area;

    House(Room room){

      // accessing private values
      Area = room.Length * room.Width;
    }


};

int main() {

  Room room(10,7);
  House home(room);
  
  cout << home.Area << "\n";

  return 0;
}
// 70
```
From the above example, the class __House__ is able to access private data variables of `Length` and `Width` for the class __Room__. This is because __House__ was declared as a __friend__ of __Room__ (`friend class House;`).

## Example: `friend` function
If we only wanted to give a particular function in one class access to private members of another class, then we can define that specific class function as a __friend__. The example below illustrates this.
```c++
#include <iostream>
using namespace std;

// forward declaration
class Room; 

class House {
  public: 
    int Area;

    void calculateArea(Room);

};

class Room {
  private:
    int Length;
    int Width;

    // the class House now has access to private members of Room
    // friend class House;
    friend void House::calculateArea(Room room);

  public:
    Room(int len, int wid){
      Length = len;
      Width  = wid;
    }

    
};

void House::calculateArea(Room room){
  // accessing private values
  Area = room.Length * room.Width;
}

int main() {

  Room room(10,7);
  
  House home;
  home.calculateArea(room);

  cout << home.Area << "\n";

  return 0;
}
// 70
```
In the above example, we specify the class function `friend void House::calculateArea(Room room)` to have access to private members of the class __Room__. 
- Note that we perform a forward declaration with `class Room;`, otherwise the compiler will not know what __Room__ is yet when processing the class __House__ which references __Room__. 
- We also define the function `House::calculateArea(Room room)` after the class __House__ for the same reason; the compiler will get confused as to what the function is referencing since it hasn't finished compiling the class __Room__ yet.

## Example: global  `friend` function
We can also declare a friend function that is globally accessible. In the earlier example `House::calculateArea(Room room)` is a function that belongs to the class __House__ because we declared that membership with `::` notation. If we didn't use that notation, then the `calculateArea(Room room)` function would be a global function. The example below demonstrates the use of a global friend function.
```c++
#include <iostream>
using namespace std;

// forward declaration
class Room; 

class House {
  public: 
    int Area;

    void calculateArea(Room);

};

class Room {
  private:
    int Length;
    int Width;

    // the class House now has access to private members of Room
    // friend class House;
    friend void House::calculateArea(Room room);
    friend int calculateArea(Room room);

  public:
    Room(int len, int wid){
      Length = len;
      Width  = wid;
    }

    
};

void House::calculateArea(Room room){
  // accessing private values
  Area = room.Length * room.Width;
}

// global friend function
int calculateArea(Room room){
  // accessing private values
  int Area = room.Length * room.Width;
  return Area;
}

int main() {

  Room room(10,7);
  House home;
  
  // friend class function
  home.calculateArea(room);
  cout << home.Area << "\n";

  // global friend function
  int Area = calculateArea(room);
  cout << Area << "\n";

  return 0;
}
// 70
// 70
```
In the above example, we've defined a global function `int calculateArea(Room room) {}`, which can access private members of class __Room__ through the following declaration: `friend int calculateArea(Room room);`

# References:
- [Friend class function in C++ - geeksforgeeks.com](https://www.geeksforgeeks.org/friend-class-function-cpp/)
