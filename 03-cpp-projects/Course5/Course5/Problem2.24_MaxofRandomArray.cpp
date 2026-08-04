/*
Problem:
Write a program to fill array with max size 100 with random
numbers from 1 to 100, then print Max

Input:
10

Output:
Array Elements: 65 91 54 42 75 32 53 57 57 30

Max Number is : 91
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

int MaxOfArray(int arr[100], int arrLength) {
	int Max = 0;
	for (int i = 0; i < arrLength; i++) {
		if (arr[i] > Max) {
			Max = arr[i];
		}
	}
	return Max;
}

int main() {
	srand(time(NULL));
	int arr[100];
	int arrLength;
	FillArrayWithRandNumbers(arr, arrLength);

	cout << "\nArray Elements : \n";
	PrintArray(arr, arrLength);

	cout << "\nMax number of array: " << MaxOfArray(arr, arrLength);
	return 0;
}
