# Destructors

When objects are deleted, we may want to run formal operations to delete variables, we can do so by defining a __destructor__. A destructor has the following notation:

```c++
class  Model {
   public:
   
       // constructor
       Model() {
         // code
       }
       
       // destructor
       ~Model() {
         // code
       }
};
```
The desctructor is define in the same way as a constructor (i.e. matching class name), but with a tilde `~` at the beginning.

## Example: Destructor automatically called
```c++
#include <iostream>
using namespace std;


class Drink {

   public:
   
      // constructor
      Drink() {

         // variable private to the function
         int volume = 12;
         cout << "Volume: " << 12 << "\n";

      }

      // destructor
      ~Drink(){
        cout << "The desctructor was called.\n"; 
      }
      

};


int main() {

  // creating object
  Drink mydrink;

  return 0;

}
// Volume: 12
// The desctructor was called.
```
In the example above, the destructor is automatically called when the program ends its run (and is deleting the object).

# References
- [Desctructors - ibm.com](https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.4.0/com.ibm.zos.v2r4.cbclx01/cplr380.htm)
- [Dynamic Memory Allocation in Class - cs.fsu.edu](https://www.cs.fsu.edu/~myers/cop3330/notes/dma.html)
