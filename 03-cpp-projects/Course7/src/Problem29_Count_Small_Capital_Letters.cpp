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

int Number_Of_Capital_Letter(string s1) {
    int count = 0;
    for (int i = 0; i < s1.length(); i++) {
        if (isupper(s1[i])) {
            count++;
        }
    }
    return count;
}

int Number_Of_Small_Letter(string s1) {
    int count = 0;
    for (int i = 0; i < s1.length(); i++) {
        if (islower(s1[i])) {
            count++;
        }
    }
    return count;
}

int Number_Of_Letter(string s1) {
    int count = 0;
    for (int i = 0; i < s1.length(); i++) {
            count++;
    }
    return count;
}


int main() {
    string s1 = ReadStirng();
    cout << "Number of  letters\n" << Number_Of_Letter(s1) << endl;
    cout << "Number of capital letters\n" << Number_Of_Capital_Letter(s1) << endl;
    cout << "Number of small letters\n" << Number_Of_Small_Letter(s1) << endl;

}