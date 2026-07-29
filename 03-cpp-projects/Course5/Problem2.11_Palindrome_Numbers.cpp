/*
Problem:
Write a program to read a number and check if it is Palindrome?
Palindrome is a number that reads the same from right to left.

Input:
1234
12321

Output:
No , it is NOT a Palindrome number.
Yes , it is a Palindrome number.
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

bool isPalindromeNumber(int number) {
	return number == ReverseNumber(number);
}

void PrintResults() {
	if (isPalindromeNumber(ReadPositiveNumber("Enter a number : ")))
		cout << "The number is Palindrome !\n";
	else
		cout << "The number is NOT Palindrome !\n";
}

int main() {
	PrintResults();
	return 0;
}