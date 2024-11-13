// Program to demonstrate Multi-Level Inheritance

#include <iostream>
using namespace std;

// Parent class
class Grandmother {
  public: 
    void introduceGrandmother() {
      cout << "I am Grandmother\n" ;
    }
};

// Child class
class Mother: public Grandmother {
	public :
    void introduceMother(){
    cout << "I am Mother\n";
    }
};

// Grandchild class 
class Child: public Mother {

};

int main() {
  Child Me;
  Me.introduceGrandmother();
  Me.introduceMother();
  return 0;
}
