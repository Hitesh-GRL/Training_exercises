#include <iostream>
using namespace std;

int main() {
    // Demonstrate the use of while loop
    int i = 1;
    cout << "Using while loop:" << endl;
    while (i < 10) {
        if (i == 5) {
            cout << "Break at " << i << endl;
            break; // Exit the loop when i is 5
        }
        if (i % 2 == 0) {
            cout << "Continue at " << i << endl;
            i++;
            continue; // Skip the rest of the loop for even numbers
        }
        cout << i << "\n";
        i++;
    }
    cout << endl << endl;

    // Demonstrate the use of do while loop
    i = 0;
    cout << "Using do while loop:" << endl;
    do {
        if (i == 5) {
            cout << "Break at " << i << endl;
            break; // Exit the loop when i is 5
        }
        if (i % 2 == 0) {
            cout << "Continue at " << i << endl;
            i++;
            continue; // Skip the rest of the loop for even numbers
        }
        cout << i << "\n";
        i++;
    } while (i < 10);
    cout << endl << endl;

    // Demonstrate the use of for loop
    cout << "Using for loop:" << endl;
    for (i = 0; i < 10; i++) {
        if (i == 5) {
            cout << "Break at " << i << endl;
            break; // Exit the loop when i is 5
        }
        if (i % 2 == 0) {
            cout << "Continue at " << i << endl;
            continue; // Skip the rest of the loop for even numbers
        }
        cout << i << "\n";
    }
    cout << endl;

    return 0;
}

