/*
Write a program print all prime numbers from 1 to N

input 
10 

output 
1
2
3
5
7
*/

/*we need 
1. 1 function to read N 
2. funciton to check all numbers from 1 to n 
3. function to print all prim number from 1 to n
*/

#include <iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string Message) {
	int Number;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

enPrimeNotPrime CheckPrime(int Number) {
	int M = round(Number / 2);
	for (int counter = 2; counter <= M; counter++) {
		if (Number % counter == 0) {
			return enPrimeNotPrime::NotPrime;
		}
	}
	return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbers(int Number) {
	cout << "\nAll Prime Numbers from " << 1 << " to " << Number << " are: \n";
	for (int i = 1; i <= Number; i++) {
		if (CheckPrime(i) == enPrimeNotPrime::Prime) {
			cout << i << endl;
		}
	}
}

int main() {
	PrintPrimeNumbers(ReadPositiveNumber("Enter A Positive Number: "));
}