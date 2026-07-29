/*
Problem:
Write a program to read a number and print letter pattern as
follows?

Input:
3

Output:
A
BB
CCC

Input:
5

Output:
A
BB
CCC
DDDD
EEEEE
 */

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
	int Number;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void PrintInvertedPattern(int Number) {
	for (int i = 65 ; i <= 65 + Number - 1;i++) {
		for (int j = 1; j <= i - 65 +1; j++) {
			cout << char(i);
		}
		cout << endl;
	}
}

int main() {
	PrintInvertedPattern(ReadPositiveNumber("Enter a number: "));
}