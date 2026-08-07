/*
Problem:
Write a program to fill array with max size 100 with random numbers from
1 to 100, copy only odd numbers to another array using AddArrayElement,
and print it.

Input
10

Output:
Array 1 elements:
59 14 84 36 6 51 48 91 96 67

Array 2 Odd numbers:
59 51 91 67
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

void CopyOnlyOddNumbers(int arr[100], int arr2[100], int arrLength, int &arr2Length) {
	for (int i = 0; i < arrLength; i++) {
		if (arr[i] % 2 != 0) {
			AddArrayElement(arr[i], arr2, arr2Length);
		}
	}
}

int main() {
	int arr[100]; 
	int arr2[100]; 
	int arrlength = 0;
	int arr2Length = 0;

	FillArrayWithRandomNumbers(arr, arrlength);
	CopyOnlyOddNumbers(arr, arr2, arrlength, arr2Length);

	cout << "\nArray 1 Elements : \n";
	PrintArray(arr, arrlength);
	cout << "\nArray 2 Elements : \n";
	PrintArray(arr2, arr2Length);
	return 0;
}
