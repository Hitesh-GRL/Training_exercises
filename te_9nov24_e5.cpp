#include <iostream>
using namespace std;

// Function prototypes
void arithmetic_operators();
void assignment_operators();
void comparison_operators();
void logical_operators();
void bitwise_operators();
void increment_decrement_operators();
void ternary_operator();

int main() {
    int choice;

    cout << "Choose a demonstration:" << endl;
    cout << "1. Arithmetic Operators" << endl;
    cout << "2. Assignment Operators" << endl;
    cout << "3. Comparison Operators" << endl;
    cout << "4. Logical Operators" << endl;
    cout << "5. Bitwise Operators" << endl;
    cout << "6. Increment and Decrement Operators" << endl;
    cout << "7. Ternary Operator" << endl;
    cout << "Enter your choice (1-7): ";
    cin >> choice;
    cout << "\n" ;

    switch (choice) {
        case 1:
            arithmetic_operators();
            break;
        case 2:
            assignment_operators();
            break;
        case 3:
            comparison_operators();
            break;
        case 4:
            logical_operators();
            break;
        case 5:
            bitwise_operators();
            break;
        case 6:
            increment_decrement_operators();
            break;
        case 7:
            ternary_operator();
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 7." << endl;
            break;
    }

    return 0;
}

void arithmetic_operators() {
    int a = 10;
    int b = 3;

    cout << "Arithmetic Operators:" << endl;
    cout << "Addition (a + b): " << a << " + " << b << " = " << (a + b) << endl;
    cout << "Subtraction (a - b): " << a << " - " << b << " = " << (a - b) << endl;
    cout << "Multiplication (a * b): " << a << " * " << b << " = " << (a * b) << endl;
    cout << "Division (a / b): " << a << " / " << b << " = " << (a / b) << endl;
    cout << "Modulus (a % b): " << a << " % " << b << " = " << (a % b) << endl;
    cout << "Unary minus (-a): -" << a << " = " << (-a) << endl;
}

void assignment_operators() {
    int a = 10;
    int b;

    cout << "Assignment Operators:" << endl;
    b = a;
    cout << "After b = a, b: " << b << endl;
    b += a;
    cout << "After b += a, b: " << b << endl;
    b -= a;
    cout << "After b -= a, b: " << b << endl;
    b *= a;
    cout << "After b *= a, b: " << b << endl;
    b /= a;
    cout << "After b /= a, b: " << b << endl;
    b %= a;
    cout << "After b %= a, b: " << b << endl;
    b &= a;
    cout << "After b &= a, b: " << b << endl;
    b |= a;
    cout << "After b |= a, b: " << b << endl;
    b ^= a;
    cout << "After b ^= a, b: " << b << endl;
    b <<= 1;
    cout << "After b <<= 1, b: " << b << endl;
    b >>= 1;
    cout << "After b >>= 1, b: " << b << endl;
}

void comparison_operators() {
    int a = 10;
    int b = 20;

    cout << "Comparison Operators:" << endl;
    cout << "Equal to (a == b): " << (a == b) << endl;
    cout << "Not equal to (a != b): " << (a != b) << endl;
    cout << "Greater than (a > b): " << (a > b) << endl;
    cout << "Less than (a < b): " << (a < b) << endl;
    cout << "Greater than or equal to (a >= b): " << (a >= b) << endl;
    cout << "Less than or equal to (a <= b): " << (a <= b) << endl;
}

void logical_operators() {
    bool x = true;
    bool y = false;

    cout << "Logical Operators:" << endl;
    cout << "Logical AND (x && y): " << (x && y) << endl;
    cout << "Logical OR (x || y): " << (x || y) << endl;
    cout << "Logical NOT (!x): " << (!x) << endl;
    cout << "Logical NOT (!y): " << (!y) << endl;
}

void bitwise_operators() {
    int a = 5;  // 0101 in binary
    int b = 3;  // 0011 in binary

    cout << "Bitwise Operators:" << endl;
    cout << "Bitwise AND (a & b): " << a << " & " << b << " = " << (a & b) << endl;
    cout << "Bitwise OR (a | b): " << a << " | " << b << " = " << (a | b) << endl;
    cout << "Bitwise XOR (a ^ b): " << a << " ^ " << b << " = " << (a ^ b) << endl;
    cout << "Bitwise NOT (~a): ~" << a << " = " << (~a) << endl;
    cout << "Left shift (a << 1): " << a << " << 1 = " << (a << 1) << endl;
    cout << "Right shift (a >> 1): " << a << " >> 1 = " << (a >> 1) << endl;
}

void increment_decrement_operators() {
    int a = 10;

    cout << "Increment and Decrement Operators:" << endl;
    cout << "Original value of a: " << a << endl;
    cout << "Post-increment (a++): " << a++ << " (after increment: " << a << ")" << endl;
    cout << "Post-decrement (a--): " << a-- << " (after decrement: " << a << ")" << endl;
    cout << "Pre-increment (++a): " << ++a << endl;
    cout << "Pre-decrement (--a): " << --a << endl;
}

void ternary_operator() {
    int a = 10;
    int b = 20;

    cout << "Ternary Operator:" << endl;
    int max = (a > b) ? a : b;
    cout << "The larger of " << a << " and " << b << " is " << max << endl;
}





