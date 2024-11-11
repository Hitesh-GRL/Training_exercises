#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; // The size of the array
    int numbers[SIZE];  // Declaring the array

    // Reading numbers from the user
    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];       // Storing each number in the array
    }

    // Accessing and modifying array elements
    cout << "Original elements of the array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " "; // Printing each original element
    }
    cout << endl;

    // Modifying array elements
    cout << "adding 10 to each element\n";
    for (int i = 0; i < SIZE; i++) {
        numbers[i] += 10; // Adding 10 to each element
    }

    // Displaying the modified elements of the array
    cout << "Modified elements of the array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " "; // Printing each modified element
    }
    cout << endl;

    return 0;
}
