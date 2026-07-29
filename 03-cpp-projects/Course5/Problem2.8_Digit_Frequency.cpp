/*
Problem:
Write a program read a digit and a number, then print digit
frequency in that number

Input:
1223222
2

Output:
Digit 2 Frequency is 5 Time(s).
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

int CountDigitFrequency(short digitToCheck, int number) {
	int frequence = 0, remainder = 0;
	while (number > 0) {
		remainder = number % 10;
		number = number / 10; 
		if (digitToCheck == remainder)
			frequence++;
	}
	return frequence;
}

int main() {
	int number = ReadPositiveNumber("Enter the main positive number: ");
	int DigitToCheck = ReadPositiveNumber("Enter a digit to check: ");
	cout << "\nDigits " << DigitToCheck << " Frequency is " 
		<< CountDigitFrequency(DigitToCheck, number) << " Time(s). \n";
	return 0;
}