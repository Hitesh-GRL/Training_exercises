#include <iostream>
using namespace std;

int main() {
    const int ROWS = 2; // The number of rows in the matrix
    const int COLS = 3; // The number of columns in the matrix
    int matrix[ROWS][COLS]; // Declaring the matrix

    // Reading numbers from the user
    cout << "Enter " << ROWS * COLS << " integers to fill the matrix:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> matrix[i][j]; // Storing each number in the matrix
        }
    }

    // Accessing and displaying the original elements
    cout << "Original matrix:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " "; // Printing each original element
        }
        cout << endl; // Printing a newline after each row
    }

    // Modifying matrix elements
    cout << "Adding 10 to each element" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] += 10; // Adding 10 to each element
        }
    }

    // Displaying the modified elements
    cout << "Modified matrix:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " "; // Printing each modified element
        }
        cout << endl; // Printing a newline after each row
    }

    return 0;
}

