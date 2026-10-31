//
// Created by User on 20/10/26.
//
#include <iostream>
#include <string>
using namespace std;

string ReadStirng() {
    string StringFromTheUser;
    cout << "Please Enter Your String?\n";
    // cin >> StringFromTheUser; will read the first letter only !!
    getline(cin, StringFromTheUser);
    return StringFromTheUser;
}

void PrintFirsLetterOfEachLetter(string S1) {
    bool IsFirstLetter = true;
    for (int i = 0 ; i < S1.length(); i++) {
        if (S1[i] != ' ' && IsFirstLetter) {
            cout << S1[i] << endl;
        }
        IsFirstLetter = (S1[i] == ' ' ? true : false);
    }
}

int main() {
    PrintFirsLetterOfEachLetter(ReadStirng());
}
