/*
 * Problem:
 * Write a program to read a number and print the sum of its digits.
 *
 * Input:
 * 1234
 *
 * Output:
 * Sum Of Digits = 10
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

int SumOfDigits(int Number) {
	int sum = 0;
	int remainder = 0; 
	while (Number > 0) {
		remainder = Number % 10;
		Number = Number / 10; 
		sum = sum + remainder;
	}
	return sum;
}

int main() {
	cout << "\n";
	cout << "Sum of digits is = "<< SumOfDigits(ReadPositiveNumber("Enter a number: "));

	return 0;
}