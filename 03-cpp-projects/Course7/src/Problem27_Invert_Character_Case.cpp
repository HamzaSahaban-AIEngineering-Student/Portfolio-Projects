//
// Created by User on 2/11/26.
//
#include <iostream>
using namespace std;

char ReadChar() {
    char ch;
    cout << "Enter a Character\n";
    cin >> ch;
    return ch;
}

char InvertLetterCase(char char1) {
    return isupper(char1) ? tolower(char1) : toupper(char1);
}

int main() {
    char ch1 = ReadChar();
    cout << "Character after inverting case: \n";
    ch1 = InvertLetterCase(ch1);
    cout << ch1 << endl;
    return 0;
}