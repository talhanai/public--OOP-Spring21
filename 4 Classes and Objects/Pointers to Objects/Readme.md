# Pointers to Objects

With classes and object we may want to use pointers to access data and methods. This is useful for code speed optimizations and reduced memory usage. The same pointer notation used for variables may be used for objects.

```c++
// creating an object
className ObjectName;

// creating pointer to object
className* ObjectNamePointer = &ObjectName;
```

## Example: Creating Pointer to Object
The below code demonstrates the creater of a pointer to an object.
```c++
#include <iostream>
#include <string>
using namespace std;

class Student {

  public:
    int Score;
    string Course;
    char Grade;

    // constructor to initialize employee information
    Student(int score, string course) {
      Score  = score;
      Course = course;
    }

    char calculateGrade(){


      if (Score > 90){
        Grade = 'A';
      }
      else if (Score > 80){
        Grade = 'B';
      }
      else if (Score > 70){
        Grade = 'C';
      }
      else if (Score > 60){
        Grade = 'D';
        }
      else if (Score <= 50){
        Grade = 'F';
      }
      else{
        Grade = 'X';
      }

      return Grade;

    }
};


int main() {

  Student Elizabeth(89, "Chemistry");
  Student* Margaret = &Elizabeth;

  // using '->' to access members of the object
  cout << Margaret->calculateGrade() << "\n";
  cout << Margaret->Score << "\n";

  return 0;

}

// Ouput:
// B
// 89
```
From the above example, we can use the pointer object like a standard object, but instead of using `.` dot notation, we instead use the `->` arrow (formally the _member access specifier_) notation to access _members_ (data variables and methods) of the pointer object.

```diff
// invalid
- Margaret.Score

// valid
+ Margaret->Score
```
