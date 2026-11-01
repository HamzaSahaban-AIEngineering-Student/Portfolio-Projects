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

string  lowering_the_first_letter_of_each_word(string S1) {
    bool isFirstLetter = true;
    for (int i = 0; i < S1.length(); i++) {
        if (S1[i] != ' ' && isFirstLetter) {
            S1[i] = tolower(S1[i]);
        }
    }
    return S1;
}

int main() {
    string s1 = ReadStirng();
    cout << "\nString After Conversion\n";
    s1 = lowering_the_first_letter_of_each_word(s1);
    cout << s1 << endl;
}