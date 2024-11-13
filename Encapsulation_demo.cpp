// Program to demonstrate encapsulation

#include<iostream>

using namespace std;

class student{

    private: 

    int ID;

    public: 
    int age;
    void setID(int& id)
    {
        ID = id;
    }

    int getID()
    {
        return ID;
    }

};

int main()
{   
    student Hitesh;
    int idNumber;

    cout<<"Enter ID : ";
    //cin >> Hitesh.ID; // wont work as name is a private member
    cin >> idNumber;    // instead use member function seID()
    Hitesh.setID(idNumber);

    cout << "Enter age : ";
    cin >> Hitesh.age;   // possible as age is a public member

    cout << "Hitesh ID and age is : \n";
    // cout << Hitesh.ID;  // not possible as ID is a private member
    cout << Hitesh.getID() << endl;
    cout << Hitesh.age;   
    
    return 0;
}