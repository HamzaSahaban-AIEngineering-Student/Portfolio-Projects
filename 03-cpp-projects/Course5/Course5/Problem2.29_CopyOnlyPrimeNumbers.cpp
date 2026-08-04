/*
Problem:
Write a program to fill array with max size 100 with random
numbers from 1 to 100, copy only prime numbers to another
array and print it.

Input:
10

Output:
Array 1 elements:
42 68 35 1 70 25 79 59 63 65

Prime Numbers in Array2:
1 79
 */

 
#include <iostream>
#include <cstdlib>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

enPrimeNotPrime CheckPrime(int Number) {
	int M = round(Number / 2);
	for (int counter = 2; counter <= M; counter++) {
		if (Number % counter == 0) {
			return enPrimeNotPrime::NotPrime;
		}
	}
	return enPrimeNotPrime::Prime;
}

int RandomNumber(int From, int To) {
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandNumbers(int arr[100], int& arrLength) {
	cout << "\nEnter Number Of Elements: \n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}

void CopyOnlyPrimeNumbers(int arrSource[100], int arrDistination[100], int arrLength, int &arrLength2) {
	int counter = 0;
	for (int i = 0; i < arrLength; i++) {
		if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime) {
			arrDistination[counter] = arrSource[i];
			counter++;
		}
	}
	arrLength2 = --counter;
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main() {
	srand((unsigned)time(NULL));

	int arr[100];
	int arrLength;
	int arr2[100];
	int arrLength2;

	FillArrayWithRandNumbers(arr, arrLength);
	CopyOnlyPrimeNumbers(arr, arr2, arrLength, arrLength2);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrLength);
	cout << "\nArray 2 elements:\n";
	PrintArray(arr2, arrLength2);
	return 0;
}
