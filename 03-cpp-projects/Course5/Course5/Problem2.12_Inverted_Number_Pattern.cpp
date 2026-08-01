/*
Problem:
Write a program to read a number and print inverted pattern
as follows?

Input:
3

Output:
333
22
1

Input:
5

Output:
55555
4444
333
22
1
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
	for (int i = Number; i >= 1;i--) {
		for (int j = 1;j <= i;j++) {
			cout << i;
		}
		cout << endl;
	}
}

int main() {
	PrintInvertedPattern(ReadPositiveNumber("Enter a number: "));
}