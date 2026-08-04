/*
Problem:
Write a program to fill array with max size 100 with random
numbers from 1 to 100, then print sum of all number

Input:
10

Output:
Array Elements: 10 6 22 40 12 75 23 32 25 75

Sum of all number is : 320
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

int SumOfArray(int arr[100], int arrLength) {
	int Sum = 0;
	for (int i = 0; i < arrLength; i++) {
		Sum += arr[i];
	}
	return Sum;
}

int main() {
	srand(time(NULL));
	int arr[100];
	int arrLength;
	FillArrayWithRandNumbers(arr, arrLength);

	cout << "\nArray Elements : \n";
	PrintArray(arr, arrLength);

	cout << "\nSum of numbers of array: " << SumOfArray(arr, arrLength);
	return 0;
}
