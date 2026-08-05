/*
Problem:
Write a program to dynamically read numbers and save them in an array.
Max size of array is 100, allocate simi-dynamic array length.

Output:
Please enter a number? 10
Do you want to add more numbers? [0]:No,[1]:yes? 1

Please enter a number? 20
Do you want to add more numbers? [0]:No,[1]:yes? 1

Please enter a number? 30
Do you want to add more numbers? [0]:No,[1]:yes? 0

Array Length: 3
Array elements: 10 20 30
*/

#include <iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cout << "\nPlease enter a number ?\n";
	cin >> Number;
	return Number;
}

void AddArrayElement(int number, int arr[100], int& arrLength) {
	arrLength++;
	arr[arrLength - 1] = number;
}

void InputUserNumbersInArray(int arr[100], int &arrLength) {
	bool addMore = true;
	do {
		AddArrayElement(ReadNumber(), arr, arrLength);
		cout << "\nDo you want to add more numbers ? [0]:No, [1]:Yes? ";
		cin >> addMore;
	} while (addMore);
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main() {
	int arr[100];
	int arrLength = 0;
	InputUserNumbersInArray(arr, arrLength);
	cout << "\nArray Length is " << arrLength << endl;
	cout << "\nArray Elements ";
	PrintArray(arr, arrLength);
	return 0;
}
