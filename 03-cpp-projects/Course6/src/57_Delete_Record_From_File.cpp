#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void LoadDateFromFileToVector(string FileName, vector<string>& vFileContent) {
    fstream MyFile;
    MyFile.open(FileName, ios::in);

    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {
            vFileContent.push_back(line);
        }
        MyFile.close();
    }
}

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

void DeleteRecordFromFile(string FileName, string Record) {
    vector<string> vFileContent;
    LoadDateFromFileToVector("MyFile.txt", vFileContent);

    for (string &line : vFileContent) {
        if (line == Record) {
            line = "";
        }
    }
    SaveVectorToFile("MyFile.txt", vFileContent);
}

void PrintFileContent(string FileName) {
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::in);
    if (MyFile.is_open()) {
        string line;
        while (getline(MyFile, line)) {
            cout << line << endl;
        }
    }
    MyFile.close();
}

int main() {
    cout << "File content before: " << endl;
    PrintFileContent("MyFile.txt");
    DeleteRecordFromFile("MyFile.txt", "Ali");
    cout << "/n/nFile content after delete: \n";
    PrintFileContent("MyFile.txt");

    return 0;
}