#include <iostream>
#include <list>
using namespace std;

int main() {
    // Create a list of strings called cars
    list<string> cars;

    // Add elements to the list
    cars.push_back("Volvo");
    cars.push_back("BMW");
    cars.push_back("Ford");
    cars.push_back("Mazda");

    // Print list elements using a for-each loop
    cout << "Cars in the list:" << endl;
    for (const string& car : cars) {
        cout << car << endl;
    }

    // Access and print the first and last elements
    cout << "\nFirst car: " << cars.front() << endl;
    cout << "Last car: " << cars.back() << endl;

    // Change the value of the first and last elements
    cars.front() = "Tesla";
    cars.back() = "VW";

    // Print the modified list elements
    cout << "\nModified cars in the list:" << endl;
    for (const string& car : cars) {
        cout << car << endl;
    }

    // Remove the first and last elements
    cars.pop_front();
    cars.pop_back();

    // Print the list elements after removing the first and last elements
    cout << "\nCars in the list after removing the first and last elements:" << endl;
    for (const string& car : cars) {
        cout << car << endl;
    }

    // Print the size of the list
    cout << "Size of the list: " << cars.size() << endl;

    // Check if the list is empty
    if (cars.empty()) {
        cout << "The list is empty." << endl;
    } else {
        cout << "The list is not empty." << endl;
    }

    return 0;
}
