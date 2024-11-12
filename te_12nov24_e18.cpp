// Program to demonstrate method declaration inside and outside class
#include <iostream>
using namespace std;

class MyClass {        // The class
  public:              // Access specifier
    void myMethodIn() {  // Method/function defined inside the class
      cout << "Inside Declaration\n";
    }
    void myMethodOut();
};

void MyClass::myMethodOut(){   // Method defined outside the class
    cout << "Outside Declaration\n";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethodIn();   // call the method
  myObj.myMethodOut();  // Call the method
  return 0;
}
