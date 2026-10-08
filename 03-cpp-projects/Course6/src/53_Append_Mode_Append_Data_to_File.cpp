#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::out | ios::app);

    MyFile << "Hi! this is another new line!\n";
    MyFile.close();
}