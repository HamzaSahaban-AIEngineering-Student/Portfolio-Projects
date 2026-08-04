/*
Problem:
Write a program to fill array with max size 100 with random
numbers from 1 to 100, then print Minimum Number

Input:
10

Output:
Array Elements: 30 99 72 47 95 67 29 13 80 64

Min Number is : 13
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

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int MinOfArray(int arr[100], int arrLength) {
	int Min = 100;
	for (int i = 0; i < arrLength; i++) {
		if (arr[i] < Min) {
			Min = arr[i];
		}
	}
	return Min;
}

int main() {
	srand(time(NULL));
	int arr[100];
	int arrLength;
	FillArrayWithRandNumbers(arr, arrLength);

	cout << "\nArray Elements : \n";
	PrintArray(arr, arrLength);

	cout << "\nMin number of array: " << MinOfArray(arr, arrLength);
	return 0;
}
