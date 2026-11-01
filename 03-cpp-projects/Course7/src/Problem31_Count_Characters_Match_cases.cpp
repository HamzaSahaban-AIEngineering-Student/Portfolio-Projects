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

int Number_Of_letters_Match_Case(string s1, char ch) {
    int count = 0;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == ch) {
            count++;
        }
    }
    return count;
}

int Number_Of_letters_Match(string s1, char ch, bool isMatches = true) {
    int count = 0;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == ch) {
            count++;
        }
        if (tolower(s1[i]) == tolower(ch)) {
            count++;
        }
    }
    return count;
}

int main() {
    string s1 = ReadStirng();
    char ch = ReadChar();
    cout << "count of char \'" << ch << "\' : "<<  Number_Of_letters_Match_Case(s1, ch) << endl;
    cout << "count of char \'" << ch << "\' "<<  Number_Of_letters_Match(s1, ch) << endl;
}