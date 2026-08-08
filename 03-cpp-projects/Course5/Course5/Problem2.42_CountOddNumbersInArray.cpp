/*
Problem:
Write a program to fill array with max size 100 with random
numbers from 1 to 100, then print the count of Odd numbers.

Input:
10

Output:
Array Elements: 60 78 15 49 56 6 4 3 21 23

Odd Numbers count is: 5
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

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int OddCount(int arr[100], int arrLength) {
	int count = 0;
	for (int i = 0; i < arrLength; i++) {
		if (arr[i] % 2 != 0) {
			count += 1;
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
	cout << "\nThe count of odd numbers from the array is " << OddCount(arr, arrLength)<< "\n\n";
	return 0;

}