/*
Problem:
Write a program to read a number and print it in a reversed order.

Input:
1234

Output:
4
3
2
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

void PrintDigits(int number) {
	int Remainder = 0;
	while (number > 0) {
		Remainder = number % 10;
		number = number / 10;
		cout << Remainder << endl;
	}
}

int main() {
	PrintDigits(ReadPositiveNumber("Enter A Number : "));
}