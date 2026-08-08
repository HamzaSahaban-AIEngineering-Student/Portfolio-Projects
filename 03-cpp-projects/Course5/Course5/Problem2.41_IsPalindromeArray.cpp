/*
Problem:
Write a program to fill array with numbers, then check if it is Palindrome
array or not, Note: Palindrome array can be read the same from right to
left and from left to right.

Input
10 20 30 30 20 10

Output:
Array Elements:
10 20 30 30 20 10

Yes array is Palindrome
*/

#include <iostream>
using namespace std;

void FillAray(int arr[100], int &arrLength) {
	arrLength = 8;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 20;
	arr[3] = 30;
	arr[4] = 30;
	arr[5] = 20;
	arr[6] = 10;
	arr[7] = 10;

}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool IsPalindromeArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		if (arr[i] != arr[arrLength - i - 1]) {
			return false;
		}
	}
	return true;
}

int main() {
	int arr[100], arrLength = 0;
	FillAray(arr, arrLength);
	cout << "\nArray elements : \n";
	PrintArray(arr, arrLength);
	if (IsPalindromeArray(arr, arrLength)) {
		cout << "\nYes, the array is palindrome\n";
	}
	else
	{
		cout << "\nNo, the array is NOT palindrome\n";
	}
	return 0;

}
