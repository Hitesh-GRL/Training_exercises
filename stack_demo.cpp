#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> cars;
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    cout << "Top element: " << cars.top() << endl;  // Outputs "Mazda"
    cars.pop();
    cout << "Top element after pop: " << cars.top() << endl;  // Outputs "Ford"
    cout << "Stack size: " << cars.size() << endl;  // Outputs the size of the stack
    cout << "Is stack empty? " << cars.empty() << endl;  // Outputs 0 (not empty)

    return 0;
}
