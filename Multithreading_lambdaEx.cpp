#include <iostream>
#include <thread>


int main() {
    // Define a lambda expression
auto f = [](int param) {
    // Statements
    std::cout << "Parameter value: " << param << std::endl;
};

// Pass f and its parameters to the thread object constructor
std::thread thread_object(f, 42);

// Wait for the thread to finish execution
thread_object.join();


    return 0;
}
