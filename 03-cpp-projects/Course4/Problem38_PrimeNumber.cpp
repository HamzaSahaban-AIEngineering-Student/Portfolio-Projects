/*
Problem:
Write a program to read a number and check if it is a prime number or not.

Note: Prime number can only divide on one and on itself.

Input:
5
6
3

Outputs:
Prime
Not Prime
Prime
*/

#include <iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1, MotPrime = 2 };

float ReadPositiveNumber(string Message) {
	float Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

enPrimeNotPrime CheckNumberType(int Number) {
	int M = round(Number / 2);

	for (int Counter = 2; Counter <= M; Counter++) {
		if (Number % Counter == 0)
			return enPrimeNotPrime::MotPrime;
	}
	return enPrimeNotPrime::Prime;
}

void PrintResult(int Number) {
	switch (CheckNumberType(Number)) {
	case enPrimeNotPrime::MotPrime:
		cout << "The number is not Prime! " << endl;
		break;
	case enPrimeNotPrime::Prime:
		cout << "The number is prime!" << endl;
		break;
	}
}

int main() {
	PrintResult(ReadPositiveNumber("Enter A Positive Number: "));
	return 0;
}
