/*
Problem:
Write a program to fill array with max size 100 with random numbers from
1 to 100, copy only prime numbers to another array using AddArrayElement,
and print it.

Input
10

Output:
Array 1 elements:
61 100 32 75 81 95 50 98 13 70

Array 2 Prime numbers:
61 13
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
	int ReadNum = rand() % (To - From + 1) + From;
	return ReadNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {
	cout << "\nEnter The Number Of Elements:\n";
	cin >> arrLength;
	for (int i = 0;i < arrLength; i++) {
		arr[i] = RandomNumber(1, 100);
	}
}

void AddArrayElement(int number, int arr[100], int& arrLength) {
	arrLength++;
	arr[arrLength - 1] = number;
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void CopyOnlyPrimeNumbers(int arr[100], int arr2[100], int arrLength, int& arr2Length) {
	for (int i = 0; i < arrLength; i++) {
		if (CheckPrime(arr[i]) == enPrimeNotPrime::Prime) {
			AddArrayElement(arr[i], arr2, arr2Length);
		}
	}
}

int main() {
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrLength = 0, arr2Length = 0;
	FillArrayWithRandomNumbers(arr, arrLength);
	CopyOnlyPrimeNumbers(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 1 Elements : \n";
	PrintArray(arr, arrLength);
	cout << "\nArray 2 Elements : \n";
	PrintArray(arr2, arr2Length);
	return 0;
}
