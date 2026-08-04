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
	cout << "\nEnter the number of elements: \n";
	cin >> arrLength;
	cout << "\nEnter array elements: \n";
	for (int i = 0; i < arrLength ; i++) {
		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
	}
	cout << endl;
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int TimesRepeated(int arr[100], int NumberToCheck, int arrLength) {
	int counter = 0;
	for (int i = 0; i < arrLength; i++) {
		if (NumberToCheck == arr[i]) {
			counter++;
		}
	}
	return counter;
}

int main() {
	int NumberToCheck, arr[100], arrLength;
	ReadArray(arr, arrLength);
	NumberToCheck = ReadPositiveNumber("Enter Number To Check: \n");
	cout << "\nOriginal Array: ";
	PrintArray(arr, arrLength);

	cout << "Number " << NumberToCheck << " is repeated " << TimesRepeated(arr, NumberToCheck, arrLength) << " Time(s)!\n";
	return 0;
}
