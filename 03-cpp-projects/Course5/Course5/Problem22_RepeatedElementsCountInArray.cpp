/*
Problem:
Write a program to read N elements and store them in array then print all array elements
and ask for a number to check, then print how many number a certain element repeated in
that array.

Input:
5

Enter array elements:
Element [1] : 1
Element [2] : 1
Element [3] : 1
Element [4] : 2
Element [5] : 3

Enter the number you want to check: 1

Output:
Original array: 1 1 1 2 3
1 is repeated 3 time(s)
*/

/*
1. Read positive number. 
2. Read Array 
3. print array
4. Times repeated 
5. display results
*/

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
	int Number;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void ReadArray(int arr[100], int& arrLength) {
	cout << "\nEnter Number of elements:\n";
	cin >> arrLength;
	cout << "\nEnter Array Elements:\n";
	for (int i = 0; i < arrLength; i++) {
		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
	}
	cout << endl;
}

void PrintArray(int arr[100], int& arrLength) {
	for (int i = 0; i < arrLength; i++) {
		cout << arr[100] << " ";
	}
	cout << "\n";
}

int TimesRepeated(int number, int arr[100], int& arrLength) {
	int count = 0;
	for (int i = 0; i < arrLength; i++) {
		if (arr[i] == number) {
			count++;
		}
	}
	return count;
}

int main() {
	int arr[100], int arrLength, int numberToCheck;

	ReadArray(arr, arrLength);
	numberToCheck = ReadPositiveNumber("Enter Number to check: \n");

}