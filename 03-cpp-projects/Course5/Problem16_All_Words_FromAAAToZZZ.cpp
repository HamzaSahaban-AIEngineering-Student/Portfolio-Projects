/*
Problem:
Write a program to print all words from AAA to ZZZ.

Output:
AAA
AAB
AAC
.
.
.
ZZZ
 */

#include <iostream>
using namespace std;

void PrintAllLettersFromAAAToZZZ() {
	cout << endl;
	string word = " ";
	for (int i = 65; i <= 90; i++) {
		for (int j = 65; i <= 90; j++) {
			for (int k = 65; i <= 90; k++) {
				word = word = char(i);
				word = word = char(j);
				word = word = char(k);
				cout << word << endl;
				word = " ";
			}
		}
	}
}

int main() {
	PrintAllLettersFromAAAToZZZ();
}