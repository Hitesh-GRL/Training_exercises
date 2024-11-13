// Program to demonstrate read and write files 

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{   
    string text;

    ofstream internFile("internFile.txt");
    internFile << "Hitesh K V\nIntern035";
    internFile.close();

   ifstream internFileRead("internFile.txt");
    while(getline(internFileRead,text)) {
    cout << text << "\n";
    } 
    internFileRead.close();
    return 0;
}