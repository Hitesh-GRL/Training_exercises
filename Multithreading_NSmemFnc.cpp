#include <iostream>
#include <thread>

// Define a class with a non-static member function
class Base {
public:
    // Non-static member function
    void foo(int param) {
        std::cout << "Parameter value: " << param << std::endl;
    }
};

int main() {
    // Create an object of the Base class
    Base b;

    // Create a thread object
    // The first parameter is the reference to the member function
    // The second parameter is the reference to the object
    // The last parameter is the argument for the member function
    std::thread thread_obj(&Base::foo, &b, 35);

    // Wait for the thread to finish execution
    thread_obj.join();

    return 0;
}
