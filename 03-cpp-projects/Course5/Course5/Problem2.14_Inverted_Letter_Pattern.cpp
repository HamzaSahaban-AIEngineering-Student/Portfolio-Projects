/*
Problem:
Write a program to read a number and print inverted letter
pattern as follows?

Input:
3

Output:
CCC
BB
A

Input:
5

Output:
EEEEE
DDDD
CCC
BB
A
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
	for (int i = 65 + Number-1; i >= 65;i--) {
		for (int j = 1; j <= Number - (65 + Number - 1 - i); j++) {
			cout << char(i);
		}
		cout << endl;
	}
}

int main() {
	PrintInvertedPattern(ReadPositiveNumber("Enter a number: "));
}