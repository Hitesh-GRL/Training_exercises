// Program to demonstrate Multiple Inheritance

#include<iostream>
using namespace std;

class Mother{
    public:
    void introMom(){
        cout << "I am Mother\n";
    }
};

class Father{
    public:
    void introDad(){
        cout << "I am Father\n";
    }

};

class Child : public Mother, public Father{
};
 int main()
 {
    Child me;
    me.introMom();   // method from Mother Class
    me.introDad();   // method from Father Class 
 }
