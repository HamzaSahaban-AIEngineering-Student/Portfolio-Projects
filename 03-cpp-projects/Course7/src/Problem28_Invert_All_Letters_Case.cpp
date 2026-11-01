//
// Created by User on 2/11/26.
//
#include <iostream>
#include <string>
using namespace std;

char InvertLetterCase(char char1) {
    return isupper(char1) ? tolower(char1) : toupper(char1);
}

string ReadStirng() {
    string StringFromTheUser;
    cout << "Please Enter Your String?\n";
    getline(cin, StringFromTheUser);
    return StringFromTheUser;
}

string Invert_All_Char(string s1) {
    for (int i = 0; i < s1.length(); i++) {
        s1[i] = InvertLetterCase(s1[i]);
    }
    return s1;
}



int main() {
    string s1 = ReadStirng();
    cout << "S1 After Inverting\n";
    s1 = Invert_All_Char(s1);
    cout << s1 << endl;
}