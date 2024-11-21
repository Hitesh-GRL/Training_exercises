#include <iostream>
#include <thread>
using namespace std;

// A dummy function
void foo(int Z) {
    cout << "Thread using function pointer as callable :: thread 1\n";
}

// A callable object
class thread_obj {
public:
    void operator()(int x) {
        cout << "Thread using function object as callable :: thread 2\n";
    }
};

// Class definition
class Base {
public:
    // Non-static member function
    void foo() {
        cout << "Thread using non-static member function as callable :: thread 4" << endl;
    }
    // Static member function
    static void foo1() {
        cout << "Thread using static member function as callable :: thread 5" << endl;
    }
};

// Driver code
int main() {
    cout << "Threads 1 2 3 4 and 5 operating independently" << endl;

    // This thread is launched by using function pointer as callable
    thread th1(foo, 3);

    // This thread is launched by using function object as callable
    thread th2(thread_obj(), 3);

    // Define a Lambda Expression
    auto f = [](int x) {
        cout << "Thread using lambda expression as callable :: thread 3\n";
    };

    // This thread is launched by using lambda expression as callable
    thread th3(f, 3);

    // Object of Base Class
    Base b;

    // This thread is launched by using non-static member function as callable
    thread th4(&Base::foo, &b);

    // This thread is launched by using static member function as callable
    thread th5(&Base::foo1);

    // Wait for the threads to finish
    th1.join(); // Wait for thread t1 to finish
    th2.join(); // Wait for thread t2 to finish
    th3.join(); // Wait for thread t3 to finish
    th4.join(); // Wait for thread t4 to finish
    th5.join(); // Wait for thread t5 to finish

    return 0;
}
