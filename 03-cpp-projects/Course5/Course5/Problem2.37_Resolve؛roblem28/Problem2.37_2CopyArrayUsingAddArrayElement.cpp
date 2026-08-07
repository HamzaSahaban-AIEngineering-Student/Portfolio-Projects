/*
Problem:
Write a program to fill array with max size 100 with random numbers from
1 to 100, copy it to another array using AddArrayElement, and print it.

Input
10

Output:
Array 1 elements:
1 47 51 18 85 62 51 61 82 4

Array 2 elements after copy:
1 47 51 18 85 62 51 61 82 4
*/

#include <iostream>
#include <cstdlib>
using namespace std;

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

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDistination[100], int arrLength, int& arrDistinationLength) {
	for (int i = 0; i < arrLength;i++) {
		AddArrayElement(arrSource[i], arrDistination, arrDistinationLength);
	}
}

int main() {
	srand((unsigned)time(NULL));
	int arr[100];
	int arr2[100];
	int arrLength = 0;
	int  arr2Length = 0;

	FillArrayWithRandomNumbers(arr, arrLength);
	CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 1 Elements: \n";
	PrintArray(arr, arrLength);
	cout << "\nArray 2 Elements: \n";
	PrintArray(arr2, arr2Length);
	return 0;
}
