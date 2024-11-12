// Program to demonstrate the use of constructors and destructors

#include <iostream>
#include <string>
using namespace std;

class MyClass {     // The class
  public:           // Access specifier
    string myString;  // String variable

    MyClass() {     // Constructor
      myString = "Hello World";  // Initialize string variable
      cout << myString << endl;  // Print the string variable
    }

    ~MyClass() {    // Destructor
      cout << "Destructor called!" << endl;
    }
};

int 
main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;         // When main() ends, the destructor is called automatically
}
