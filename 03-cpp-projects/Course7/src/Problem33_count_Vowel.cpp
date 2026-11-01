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

int Number_Of_Vowel(string s1) {
    int count = 0;
    for (int i = 0; i < s1.length(); i++) {
        if (isVowel(s1[i])) {
            count++;
        }
    }
    return count;
}


int main() {
    string s1 = ReadStirng();
    cout << "Number of vowel = " << Number_Of_Vowel(s1) << endl;


}