# Class and Object

## Defining a Class
Until now, we've worked with variables and functions, what we'll come to see that there is a better way to organize our code, which makes things easier for our minds to process. C++ allows us to group related variables and functions into __objects__. In order to construct an object we first need to define a __class__.

```c++
class className {
   // some data
   // some functions
};
```

Here is an example __class__:
```c++

class Book {
    public:
        int numberOfPages;
        int wordsPerPage = 50;
        string title;
        
        int calculateTotalNumberOfWords(){
            return numberOfPages * wordsPerPage;
        }

};

```
You will notice above that the class is composed of variables `numberOfPages`, `wordsPerPage`, and `title`. The class also is composed of a function that takes some of these variables and returns a mathematical operation. To allow for both the data variables and functions to be available outside the class the `public:` expression is used to define this. We can also choose to initialize variables with default values, or not.

## Creating an Object
The example below shows how an object can be created.
```c++
#include <iostream>
#include <string>
using namespace std;


class Book {
    public:
        int numberOfPages;
        int wordsPerPage = 50;
        string title;
        
        int calculateTotalNumberOfWords(){
            return numberOfPages * wordsPerPage;
        }

};
int main() {

  // create object
  Book myBook;

  // assign object variable value
  myBook.numberOfPages = 13;

  // perform function with object variables
  cout << myBook.calculateTotalNumberOfWords() << "\n";

  return 0;
}  
```
First the object is created by declaring the class __Book__ followed by the variable name resulting in the expression `Book myBook;`. Next we assign a value to `numberOfPages` in the object using dot `.` notation with the expression `myBook.numberOfPages = 13;`. With a value assigned, we can use the dot notation to call on the object's function to perform a calculation: `myBook.calculateTotalNumberOfWords()`. 

## Private and Public elements of a Class
With our class data variables we can initialize them with a value in the class and overwrite it afterwards. However, there may be scenarios where we don't want a data variable or function to be accessible outside of the class, in this case we can define these elements within the `private:` keyword.

```c++
class Book {
    private: 
      int wordsPerPage = 50;
      
      void printWordsPerPage(){
         cout << "Number of words per page: " << wordsPerPage << "\n";
      }
      
    public:
        int numberOfPages;  
        string title;
        
        int calculateTotalNumberOfWords(){
          printWordsPerPage(); // calling private function
          return numberOfPages * wordsPerPage;
        }

};
```
We have defined the data variable `wordsPerPage` and function `printWordsPerPage()` to be private. If we try to call them through the object (e.g. `myBook.wordsPerPage`) we will get an error. 
```diff
// yields an error
- myBook.wordsPerPage = 4;
```

However, private variables and functions may be called by other functions (private or public) from _within_ the class. For example `calculateTotalNumberOfWords()` is a public function that can call a private function `printWordsPerPage()`.
```c++
int main() {

  // create object
  Book myBook;

  // assign object variable value
  myBook.numberOfPages = 13;

  // public function calling a private function
  int totalNumberOfWords = myBook.calculateTotalNumberOfWords();
  cout << "Total number of words: " << totalNumberOfWords << "\n";

  return 0;
}
// Number of words per page: 50
// Total number of words: 500
```

## Protected elements of a class
There is a third type of class member, and that is `protected:`. It behaves effectively in the same way as `private:`, for now, however we will see later when it comes to inheriting classes that these designations behave slightly differently.

# Reference
- [Classes & Objects - mikedane.com](https://www.mikedane.com/programming-languages/c++/classes-objects/)
- [C++ Classes and Objects - programiz.com](https://www.programiz.com/cpp-programming/object-class)

