#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector of strings called cars
    vector<string> cars;

    // Add elements to the vector
    cars.push_back("Volvo");
    cars.push_back("BMW");
    cars.push_back("Ford");
    cars.push_back("Mazda");

    // Print vector elements using a for-each loop
    cout << "Cars in the vector:" << endl;
    for (const string& car : cars) {
        cout << car << endl;
    }

    // Access and print the first and last elements
    cout << "\nFirst car: " << cars.front() << endl;
    cout << "Last car: " << cars.back() << endl;

    // Change the value of the first and last elements
    cars.front() = "Tesla";
    cars.back() = "VW";

    // Print the modified vector elements
    cout << "\nModified cars in the vector:" << endl;
    for (const string& car : cars) {
        cout << car << endl;
    }

    // Remove the last element
    cars.pop_back();

    // Print the vector elements after removing the last element
    cout << "\nCars in the vector after removing the last element:" << endl;
    for (const string& car : cars) {
        cout << car << endl;
    }

    // Print the size of the vector
    cout << "Size of the vector: " << cars.size() << endl;

    // Check if the vector is empty
    if (cars.empty()) {
        cout << "The vector is empty." << endl;
    } else {
        cout << "The vector is not empty." << endl;
    }

    return 0;
}
