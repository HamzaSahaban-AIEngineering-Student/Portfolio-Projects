//
// Created by User on 2/11/26.
//
#include <iostream>
#include <string>
using namespace std;


char ReadChar() {
    char ch;
    cout << "Please enter a character to look for?\n";
    cin >> ch;
    return ch;
}

bool isVowel(char ch) {
    tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'i');
}

int main() {
    char ch = ReadChar();
    if (isVowel(ch)) {
        cout << "\nYes letter \'" << ch << "\' is vowel!\n";
    }else {
        cout << "\nNoo letter \'" << ch << "\' is not vowerl!\n";
    }
    return 0;

}