#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void SaveVectorToFile(string FileName, vector<string>& vFileContent) {
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::out);
    if (MyFile.is_open()) {
        for (string &line : vFileContent) {
            if (line != "") {
                MyFile << line << endl;
            }
        }
    }
}

int main() {
    vector<string> vFileContent{ "Hamza", "Nabila", "Layan", "Nada", "Mohammed", "Ghada", "Ahmed"};
    SaveVectorToFile("MyFile.txt", vFileContent);
    return 0;
}