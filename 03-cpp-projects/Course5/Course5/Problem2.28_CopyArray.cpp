/*
 * Problem:
 * Write a program to fill array with max size 100 with random
 * numbers from 1 to 100, copy it to another array and print it.
 *
 * Input:
 * 10
 *
 * Output:
 * Array 1 elements:
 * 1 47 51 18 85 62 51 61 82 4
 *
 * Array 2 elements after copy:
 * 1 47 51 18 85 62 51 61 82 4
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

void CopyArray(int arrSource[100],int arrDistination[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		arrDistination[i] = arrSource[i];
	}
}

int main() {
	srand(time(0));
	int arr1[100], arr2[100];
	int arrLength;
	FillArrayWithRandNumbers(arr1, arrLength);
	cout << "\nArray Elements : \n";
	PrintArray(arr1, arrLength);
	CopyArray(arr1, arr2, arrLength);
	cout << "\nArray 2 : \n";
	PrintArray(arr2, arrLength);
}