#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void PrintFileContent(string FileName) {
    fstream MyFile;
    MyFile.open(FileName, ios::in); // read mode

    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {
            cout << line << endl;
        }
        MyFile.close();
    }
}

int main() {
    PrintFileContent("MyFile.txt");
}