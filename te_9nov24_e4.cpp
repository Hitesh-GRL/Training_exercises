#include <iostream>
using namespace std;

int main() {
    // Declare and assign values to variables of different data types
    char char_var = 'A';
    int int_var = 100;
    float float_var = 10.5f;
    double double_var = 20.99;
    bool bool_var = true;

    // Print the value and size of each variable
    cout << "Value of char_var: " << char_var << ", Size: " << sizeof(char_var) << " byte" << endl;
    cout << "Value of int_var: " << int_var << ", Size: " << sizeof(int_var) << " bytes" << endl;
    cout << "Value of float_var: " << float_var << ", Size: " << sizeof(float_var) << " bytes" << endl;
    cout << "Value of double_var: " << double_var << ", Size: " << sizeof(double_var) << " bytes" << endl;
    cout << "Value of bool_var: " << bool_var << ", Size: " << sizeof(bool_var) << " byte" << endl;
    
    return 0;
}


