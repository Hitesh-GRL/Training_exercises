#include <iostream>
#include <thread>

// Define the class of the function object
class FnObjectClass {
public:
    // Overload the () operator
    void operator()(int param) {
        std::cout << "Parameter value: " << param << std::endl;
    }
};

int main() {
    // Create a thread object
    // The first parameter is the function object
    // The second parameter is the argument for the function object
    std::thread thread_object(FnObjectClass(), 42);

    // Wait for the thread to finish execution
    thread_object.join();

    return 0;
}
