#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> cars;
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    cout << "Front element: " << cars.front() << endl;  // Outputs "Volvo"
    cout << "Back element: " << cars.back() << endl;    // Outputs "Mazda"
    cars.pop();
    cout << "Front element after pop: " << cars.front() << endl;  // Outputs "BMW"
    cout << "Queue size: " << cars.size() << endl;  // Outputs the size of the queue
    cout << "Is queue empty? " << cars.empty() << endl;  // Outputs 0 (not empty)

    return 0;
}
