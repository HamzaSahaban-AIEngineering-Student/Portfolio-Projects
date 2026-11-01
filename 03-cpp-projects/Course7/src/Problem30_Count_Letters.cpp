//
// Created by User on 2/11/26.
//
#include <iostream>
#include <string>
using namespace std;


string ReadStirng() {
    string StringFromTheUser;
    cout << "Please Enter Your String?\n";
    getline(cin, StringFromTheUser);
    return StringFromTheUser;
}

char ReadChar() {
    char ch;
    cout << "Please enter a character to look for?\n";
    cin >> ch;
    return ch;
}

int Number_Of_Recursion(string s1, char ch) {
    int count = 0;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string s1 = ReadStirng();
    char ch = ReadChar();
    cout << "count of char \'" << ch << "\' : "<<  Number_Of_Recursion(s1, ch) << endl;
}