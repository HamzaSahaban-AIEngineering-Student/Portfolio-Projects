/*
Problem:
Write a program to fill array with max size 100 with random numbers from
1 to 100, read number and return its index in array if found otherwise
return -1.

Input:                             Input:
10                                 10

Output:                            Output:
Array 1 elements:                  Array 1 elements:
80 79 12 80 81 29 3 37 25 91       80 79 12 80 81 29 3 37 25 91

Please enter a number to search for? Please enter a number to search for?
12                                 55
Number you are looking for is: 12  Number you are looking for is: 55
The number found at position: 2    The number is not found :-(
The number found its order : 3
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

short FindNumberPositionInArray(int arr[100], int arrLength, int number) {
	for (int i = 0; i < arrLength; i++) {
		if (arr[i] == number)
			return i;
	}
	return -1;
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int ReadNumber()
{
	int Number;
	cout << "\nPlease enter a number to search for?\n";
	cin >> Number;
	return Number;
}

int main() {
	srand((unsigned)time(NULL));
	int arr[100]; 
	int arrLength;

	FillArrayWithRandNumbers(arr, arrLength);
	cout << "\nArray 1 elements are:\n";
	PrintArray(arr, arrLength);

	int number = ReadNumber();
	cout << "\nNumber you are looking for is : " << number << endl;

	short NumberPosition = FindNumberPositionInArray(arr, arrLength, number);
	if (NumberPosition == -1) {
		cout << "Number Not Found :-(\n";
	}
	else {
		cout << "The number found at position:  " << NumberPosition << endl;
		cout << "The number found at order:  " << NumberPosition + 1 << endl;
	}
	return 0;
}