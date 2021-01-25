# Files and Streams

To simplify the process of reading and writing to files, the library __\<fstream\>__ is made available to us.

## Example: Writing to File
The below example demonstrates how to write content to a text file.
```c++
#include <iostream>
#include <fstream>
using namespace std;

int main(){

  string filename = "file.txt";
  string text = "I am a squirrel. \n I like to eat acorns.";

  // 1. create output write object
  ofstream outfile;
  
  // 2. open file for writing
  outfile.open(filename);

  // 3. write to file
  outfile << text << endl;

  // 4. close the file.
  outfile.close();
  
  return 0;

}
```
In the example above, there are four steps to writing data to file.
1. `ofstream outfile` defines an object (`outfile`) from the __ofstream__ class that defines output file methods to write data to a file. 
    - We will be covering objects and classes a little later, but this declaration helps manage behind-the-scenes data output write activities so we don't have to.
2. `outfile.open()` prepares the output file for writing by "opening" it. 
    - If the file does not exist yet, the file will be automatically created.
3. `outfile << ` is the expression for writing our data to file.
4. `outfile.close()` closes the file. 
    - If a file is not closed, then other processes (e.g. your own code, or even the machine) won't be able to open the file. If not closed formally, the file may become corrupted.
    
    
## Example: Reading from File
The example below demonstrates reading contents of a text file. It is assumed that _file.txt_ exists. You may run the code from the writing to file example to create _file.txt_.
```c++
#include <iostream>
#include <fstream>
using namespace std;

int main(){

  string filename = "file.txt";
  string text;
  string line;

  // 1. create read file object
  ifstream infile; 

  // 2. open file for reading
  infile.open(filename); 
 
  // 3. read file contents
  while (getline (infile, line)) {

    text += line + "\n";

  }

  // 4. close file
  infile.close();

  // write data to  console.
  cout << text << endl;
  
  return 0;

}
// Hello, I am a squirrel. 
//  I like to eat acorns.
```
In the above example, there are four steps to reading the contents of a file.
1. `ifstream infile` defines an object (`infile`) from the __ifstream__ class that defines input file stream methods to read data to a file. 
2. `infile.open(filename)` prepares the output file for reading by "opening" it.
3. `getline (infile, line)` reads a single line from the file (as opened by the `infile` object), and stores it into the string variable `line`.
    -  This reads only a single line. In order to read all lines in a file, we encapsulate `getline()` in a __while__ loop, and append each line to the string `text` variable. We also add newline `\n` during append because the file read process does not formally store that character in the read text.
4. `infile.close()` closes the file.

## Example: Appending to File
Sometimes you may want to append data, rather than overrwrite existing data. The example below demonstrates how to append data to file.
```c++
#include <iostream>
#include <fstream>
using namespace std;

int main(){

  string filename = "file.txt";
  string text = "I am a squirrel. \n I like to eat acorns.";

  // 1. create output write object
  ofstream outfile;
  
  // 2. open file for writing
  outfile.open(filename, ofstream::out | ofstream::app);

  // 3. write to file
  outfile << text << endl;

  // 4. close the file.
  outfile.close();

  return 0;

}
```
In the above example, we can see that the code is almost identical to that for writing data to file. The only difference is that there is an additional argument during `.open(filename, writeType)` that defines the _type_ of writing to file that will be performed. The expression `ofstream::out | ofstream::app` indicates that the content will be output (`::out`) to file or (`|`) appended (`::app`) to file.

# References:
- [C++ Files and Streams - tutorialspoint.com](https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm)
- [C++ Files - w3schools.com](https://www.w3schools.com/cpp/cpp_files.asp)
- [ofstream - cplusplus.com](http://www.cplusplus.com/reference/fstream/ofstream/open/)
