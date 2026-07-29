/*
Write a program to print the letters from A To Z
*/

#include <iostream>
using namespace std;

void PrintLettersFromAToZ_CabetalLetters() {
	for (int i = 65;i <= 90;i++) {
		cout << char(i) << endl;
	}
}

void PrintLettersFromAToZ_SmallLetters() {
	for (int i = 97; i <= 122; i++) {
		cout << char(i) << endl;
	}
}

int main() {
	PrintLettersFromAToZ_CabetalLetters();
	cout << "====================================\n";
	PrintLettersFromAToZ_SmallLetters();
	return 0;
}