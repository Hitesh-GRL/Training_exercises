#include <iostream>
#include <thread>

// Define a callable function
void initializeGUI() {
    std::cout << "Initializing GUI..." << std::endl;
    // Simulate some work with a sleep
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "GUI initialized." << std::endl;
}

int main() {
    // Start thread t1
    std::thread t1(initializeGUI);

    // Wait for t1 to finish
    t1.join();

    // t1 has finished, do other stuff
    std::cout << "Thread t1 has finished. Proceeding with other tasks." << std::endl;

    return 0;
}
