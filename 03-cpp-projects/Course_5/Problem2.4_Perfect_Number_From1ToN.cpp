/*
 * Problem:
 * Write a program to print all perfect numbers from 1 to N
 *
 * Input:
 * 500
 *
 * Output:
 * 6
 * 28
 * 496
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

void PrintPerfectNumbersFrom1ToN(int number) {
	for (int i = 1; i <= number; i++) {
		if (isPerfectNumber(i))
			cout << i << endl;
	}
}

int main() {
	PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Enter Positive number: "));
}