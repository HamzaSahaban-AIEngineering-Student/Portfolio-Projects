/*
 Problem:
 Write a program read a number , then print all digit
 frequency in that number
 
 Input:
 1223222
 
 Output:
 Digit 1 Frequency is 1 Time(s).
 Digit 2 Frequency is 5 Time(s).
 Digit 3 Frequency is 1 Time(s).
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

void PrintAllDigitsFrequencey(int number) {
	for (int i = 0; i <= 9; i++) {
		int DigitFrequencey = CountDigitFrequency(i, number);
		if (DigitFrequencey > 0) {
			cout << "Digit " << i << " Frequencey is " << DigitFrequencey << " Times\n";
		}
	}
}

int main() {
	int number = ReadPositiveNumber("Enter the main number : ");
	PrintAllDigitsFrequencey(number);
}