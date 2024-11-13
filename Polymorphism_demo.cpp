// Program to Demonstrate Polymorphism 


#include <iostream>
using namespace std;

// Parent class
class Grandmother {
  public: 
    void introduce() {
      cout << "I am Grandmother\n" ;
    }
};

// Child class
class Mother: public Grandmother {
	public :
    void introduce(){
    cout << "I am Mother\n";
    }
};

// Grandchild class 
class Child: public Mother {
    public:
    void introduce(){
    cout << "I am Child\n";
    }
};

int main() {
  Child Me;
  Mother Amma;
  Grandmother Ajji;

  Me.introduce();
  Amma.introduce();
  Ajji.introduce();
  return 0;
}
