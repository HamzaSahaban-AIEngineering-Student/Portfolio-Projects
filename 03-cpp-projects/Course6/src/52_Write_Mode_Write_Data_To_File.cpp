#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::out); // write mode

    if (MyFile.is_open()) {
        MyFile << "Mohammed\n";
        MyFile << "Fadi\n";
        MyFile << "Lama\n";
        MyFile.close();
    }
}