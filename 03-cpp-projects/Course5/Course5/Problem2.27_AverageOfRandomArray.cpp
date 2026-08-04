/*
Problem:
Write a program to fill array with max size 100 with random
numbers from 1 to 100, then print average of all number

Input:
10

Output:
Array Elements: 24 36 44 73 8 56 98 67 33 71

Average of all number is : 51
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

int AverageOfArray(int arr[100], int arrLength) {
	int Average = 0;
	int Sum = 0;
	for (int i = 0; i < arrLength; i++) {
		Sum += arr[i];
	}
	Average = Sum / arrLength;
	return Average;
}

int main() {
	srand(time(NULL));
	int arr[100];
	int arrLength;
	FillArrayWithRandNumbers(arr, arrLength);

	cout << "\nArray Elements : \n";
	PrintArray(arr, arrLength);

	cout << "\nAverage of numbers of array: " << AverageOfArray(arr, arrLength);
	return 0;
}
