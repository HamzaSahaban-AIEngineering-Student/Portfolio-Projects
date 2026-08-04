/*
Problem:
Write a program to fill array with max size 100 with random numbers from
1 to 100, copy it to another array in reverse order and print it.

Input
10

Output:
Array 1 elements:
64 8 62 19 2 21 15 74 96 85

Array 2 elements after copying array 1 in reversed order:
85 96 74 15 21 2 19 62 8 64
 */

#include <iostream>
#include <cstdlib>
using namespace std;

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

void CopyArrayInReverseOrder(int arrSourse[100], int arrDistination[100], int arrLength) {
	for (int i = 0;i < arrLength; i++) {
		arrDistination[i] = arrSourse[arrLength - 1 - i];
	}
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main() {
	srand((unsigned)time(NULL));
	int arr1[100], arr2[100], arrLength;
	FillArrayWithRandNumbers(arr1, arrLength);

	CopyArrayInReverseOrder(arr1, arr2, arrLength);

	cout << "Array 1 Elements:\n";
	PrintArray(arr1, arrLength);
	cout << "Array 2 Elements:\n";
	PrintArray(arr2, arrLength);
	return 0;
}