// Program to increment the value of a variable through a function using References and Pointers

#include <iostream>

void increment(int& ref) {
    ref++;
}

void increment(int* ptr) {
    (*ptr)++;
}

int main() {
    int a = 5;
    increment(a);
    std::cout << "Value of a: " << a << " after pass by reference" << std::endl;  // Output: 6
     increment(&a);
    std::cout << "Value of a: " << a << " after pass by pointer" << std::endl; // Outputs 7
    return 0;
}
