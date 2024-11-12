#include<iostream>
#include<string>

class MyClass {
  public:    // Public access specifier
    std::string x;   // Public attribute
  private:   // Private access specifier
    std::string y;   // Private attribute
  protected: // Protected access specifier
    std::string  z = "Protected member accessed";   // Protected attribute
};

class DeClass : public MyClass {
    public:
    void printMyClass()
    {
        std::cout << z; // Allowed as z is a protected member
    };
};

int main() {
  MyClass myObj;
  myObj.x = "Public member accessed";  // Allowed (public)
  std::cout << myObj.x << "\n";
  //myObj.y = 50;  // Not allowed (private)

  DeClass dObj;
  dObj.printMyClass(); 
  return 0;
}