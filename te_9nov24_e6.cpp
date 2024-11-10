#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, word;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter a word to find: ";
    cin >> word;

    int pos = str.find(word);
    if (pos != -1) {
        cout << "The word '" << word << "' is found at position: " << pos << endl;
    } else {
        cout << "The word '" << word << "' is not found in the string." << endl;
    }

    return 0;
}


