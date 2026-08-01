/*
 Problem:
 
 Write a program to check if a number is Perfect or not.
 Note: A Perfect Number equals the sum of all its proper divisors.

 Examples:
 28 = 1 + 2 + 4 + 7 + 14
 6  = 1 + 2 + 3

 Input:
 28
 12

 Output:
 28 is perfect.
 12 is not perfect.
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

bool isPerfectNumber(int number) {
	int M = round(number / 2);
	int sum = 0;
	for (int i = 1; i <= M;i++) {
		if (number % i == 0) {
			sum += i;
		}
	}
	return number == sum;
}

void PrintResults(int Number) {
	if (isPerfectNumber(Number))
		cout << Number << " is perfect! \n";
	else
		cout << Number << " is NOT Perfect! \n";
}

int main() {
	PrintResults(ReadPositiveNumber("Enter positive Number: "));
}