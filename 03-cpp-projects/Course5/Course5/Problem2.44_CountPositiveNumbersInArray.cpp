/*
Problem:
Write a program to fill array with max size 100 with random
numbers from -100 to 100, then print the count of Positive
numbers.

Input:
10

Output:
Array Elements: 17 -9 -9 -90 -72 -100 -4 60 -84 -15

Positive Numbers count is: 2
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
		arr[i] = RandomNumber(-100, 100);
	}
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int PositiveCount(int arr[100], int arrLength) {
	int count = 0;
	for (int i = 0; i < arrLength; i++) {
		if (arr[i] > 0) {
			count++;
		}
	}
	return count;
}

int main() {
	srand((unsigned)time(NULL));
	int arr[100], arrLength = 0;
	FillArrayWithRandomNumbers(arr, arrLength);
	cout << "\nThe main Array elements : \n";
	PrintArray(arr, arrLength);
	cout << "\nThe count of positive numbers from the array is " << PositiveCount(arr, arrLength) << "\n\n";
	return 0;

}