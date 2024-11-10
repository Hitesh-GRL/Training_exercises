#include <iostream>
using namespace std;

// Define the TrafficLight enum
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    TrafficLight signal = RED; // Assign an enum value directly

    cout << "Enter a number (0 for RED, 1 for YELLOW, 2 for GREEN): ";
    int input;
    cin >> input;

    // Assign the input value to the signal variable based on the input
    if (input == 0) {
        signal = RED;
    } else if (input == 1) {
        signal = YELLOW;
    } else if (input == 2) {
        signal = GREEN;
    } else {
        cout << "Invalid input!" << endl;
        return 0;
    }

    // Display the corresponding message based on the signal value
    switch (signal) {
        case RED:
            cout << "Stop! The light is RED." << endl;
            break;
        case YELLOW:
            cout << "Caution! The light is YELLOW." << endl;
            break;
        case GREEN:
            cout << "Go! The light is GREEN." << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
            break;
    }

    return 0;
}

