#include <iostream>
#include <string>
using namespace std;

// Define the Person structure
struct Person {
    string name;
    int age;
    float height;
};

int main() {
    Person person1; // Create an instance of the Person structure

    // Read information from the user
    cout << "Enter name: ";
    getline(cin, person1.name); // Use getline to read a full name with spaces
    cout << "Enter age: ";
    cin >> person1.age;
    cout << "Enter height (in feet): ";
    cin >> person1.height;

    // Display the information
    cout << "\nPerson Information:" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << " feet" << endl;

    return 0;
}

