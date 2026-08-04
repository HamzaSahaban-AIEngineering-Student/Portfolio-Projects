/*
Problem:
Write a program to fill array with max size 100 with random
numbers from 1 to 100.

Input:
10

Output:
Array Elements: 56 55 83 71 32 52 17 28 71 52
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
		arr[i] =RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main() {
	srand(time(0));
	int arr[100];
	int arrLength;
	FillArrayWithRandNumbers(arr, arrLength);

	cout << "\nArray Elements : ";
	PrintArray(arr, arrLength);
	return 0;
}