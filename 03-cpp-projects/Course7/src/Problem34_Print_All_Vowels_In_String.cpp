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


bool isVowel(char ch) {
    tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'i');
}

void Print_Vowels(string s1) {
    for (int i = 0; i < s1.length(); i++) {
        if (isVowel(s1[i])) {
            cout << s1[i] << "  ";
        }
    }

}


int main() {
    string s1 = ReadStirng();
    cout << "vowel is string are: ";
    Print_Vowels(s1);


}