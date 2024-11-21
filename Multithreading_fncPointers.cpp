#include <iostream>
#include <thread>

// Function to be executed by the first thread
void foo(int param) {
    std::cout << "Thread 1 - Parameter value: " << param << std::endl;
}

// Function to be executed by the second thread
void bar(int param) {
    std::cout << "Thread 2 - Parameter value: " << param << std::endl;
}

int main() {
    // Create two thread objects and pass the function pointers and their parameters
    std::thread thread1(foo, 42);
    std::thread thread2(bar, 84);

    // Wait for both threads to finish execution
    thread1.join();
    thread2.join();

    return 0;
}
