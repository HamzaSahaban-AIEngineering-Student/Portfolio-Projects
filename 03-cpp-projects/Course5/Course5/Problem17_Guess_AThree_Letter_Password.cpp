/*
 * Problem:
 * Write a program to guess a 3-Letter Password (all capital)
 *
 * Input:
 * AAF
 *
 * Output:
 * Trial [1] : AAA
 * Trial [2] : AAB
 * Trial [3] : AAC
 * Trial [4] : AAD
 * Trial [5] : AAE
 * Trial [6] : AAF
 *
 * Password is AAF
 * Found after 6 Trial(s)
 */

#include <iostream>
using namespace std;

string ReadPassword() {
	string pass;
	cout << "Please enter a 3-Letter Password (all capital)?\n";
	cin >> pass;
	return pass;
}

bool GuessPassword(string OriginalPass) {
	string word = "";
	int counter = 0;
	for (int i = 65;i <= 90;i++) {
		for (int j = 65; j <= 90;j++) {
			for (int k = 65; k <= 90;k++) {
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
				counter++;
				cout << "Trial [" << counter << "] : " << word << endl;

				if (word == OriginalPass) {
					cout << "\nPassword is " << word << endl;
					cout << "Founded after " << counter << " Trial(s)!\n";
					return true;
				}
				word = "";
			}
		}
	}
	return false;
}

int main() {
	GuessPassword(ReadPassword());
	return 0;
}