/*
Problem:
Write a program to read a number and print it reversed.

Input:
1234

Output:
Reverse is:
4321
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

int ReverseNumber(int Number) {
	int remainder = 0;
	int	number2 = 0;
	while (Number > 0) {
		remainder = Number % 10;
		Number = Number / 10;
		number2 = number2 * 10 + remainder;
	}
	return number2;
}

int main() {
	cout << "\nReverse is:\n"
		<< ReverseNumber(ReadPositiveNumber("Please enter a positive number?"))
		<< "\n";
	return 0;
}