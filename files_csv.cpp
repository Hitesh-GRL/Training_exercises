// Program to demonstrate read and write operation of .csv file

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    // Writing to a CSV file
    ofstream outFile("example.csv");
    outFile << "Name,Age,Occupation" << endl;
    outFile << "Alice,30,Engineer" << endl;
    outFile << "Bob,25,Designer" << endl;
    outFile.close();

    // Reading from a CSV file
    ifstream inFile("example.csv");
    string line;
    getline(inFile,line);    // avoiding the heading row  
    while (getline(inFile, line)) {
        stringstream ss(line);
        string name, age, occupation;
        getline(ss, name, ',');
        getline(ss, age, ',');
        getline(ss, occupation, ',');
        cout << "Name: " << name << ", Age: " << age << ", Occupation: " << occupation << endl;
    }
    inFile.close();
    return 0;
}
