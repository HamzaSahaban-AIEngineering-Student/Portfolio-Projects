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

string UpperFirstLetterOfEachWord(string S1) {
    bool IsFirstLetter = true;
    for (int i = 0 ; i < S1.length(); i++) {
        if (S1[i] != ' ' && IsFirstLetter) {
            S1[i] = toupper(S1[i]);
        }
        IsFirstLetter = (S1[i] == ' ' ? true : false);
    }
    return S1;
}

int main() {
    string s1 = ReadStirng();
    cout << "\nString after conversion:\n";
    s1 = UpperFirstLetterOfEachWord(s1);
    cout << s1 << endl;
}
