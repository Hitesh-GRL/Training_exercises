#include <iostream>
#include <thread>

// Define the class
class Base {
public:
    // Static member function
    static void foo(int param) {
        std::cout << "Parameter value: " << param << std::endl;
    }
};

int main() {
    // Create an object of the Base class
    Base b;

    // Create a thread object
    // The first parameter is the reference to the static member function
    // The second parameter is the argument for the function
    std::thread thread_obj(&Base::foo, 42);

    // Wait for the thread to finish execution
    thread_obj.join();

    return 0;
}
