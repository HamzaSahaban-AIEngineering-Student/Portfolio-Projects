/*
Problem:
Write a program to fill array with numbers, then print distinct
numbers to another array.

Output:
Array 1 elements:
10 10 10 50 50 70 70 70 70 90

Array 2 distinct elements:
10 50 70 90
*/

#include <iostream>
using namespace std;

void FillAray(int arr[100], int &arrLength) {
	arrLength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 90;
	arr[9] = 90;
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

short FindNumberPositionInArray(int number, int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		if (arr[i] == number)
			return i;
	}
	return -1;
}

bool IsArrayElement(int number, int arr[100], int arrLength) {
	return FindNumberPositionInArray(number, arr, arrLength) != -1;
}

void AddArrayElement(int number, int arr[100], int &arrLength) {
	arrLength++;
	arr[arrLength - 1] = number;
}

void CopyDistinctNumbers(int arrSource[100], int arrDistination[100], int arrLength, int &arr2Length) {
	for (int i = 0; i < arrLength; i++) {
		if (!IsArrayElement(arrSource[i], arrDistination, arr2Length)) {
			AddArrayElement(arrSource[i], arrDistination, arr2Length);
		}
	}
}

int main() {
	int arr[100], arr2[100], arrLength = 0, arr2Length = 0;
	FillAray(arr, arrLength);
	cout << "\nArray 1 Elements: \n";
	PrintArray(arr, arrLength);
	CopyDistinctNumbers(arr, arr2, arrLength, arr2Length);
	cout << "\nArray 2 Elements: \n";
	PrintArray(arr2, arr2Length);
	return 0;
}
