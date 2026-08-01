/*
Problem:
Write a program to read a number and print it in order from left
to right.

Input:
1234

Output:
1
2
3
4
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

int ReverseNumber(int number) {
	int remainder = 0, number2 = 0;
	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		number2 = number2 * 10 + remainder;

	}
	return number2;
}

void PrintDigits(int number) {
	int remainder = 0;
	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		cout << remainder << endl;
	}
}

int main() {
	PrintDigits(ReverseNumber(ReadPositiveNumber("Enter a positive number: ")));
	return 0;
}