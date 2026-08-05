/*
Problem:
Write a program to fill array with max size 100 with random numbers from
1 to 100, read number and print if it's found or not (reuse code in prev
problem).

Input                               Input
10                                  10

Output:                             Output:
Array 1 elements:                   Array 1 elements:
83 92 66 21 62 96 40 13 19 30        83 92 66 21 62 96 40 13 19 30

Please enter a number to search for? Please enter a number to search for?
66                                  19

Number you are looking for is: 66   Number you are looking for is: 19
Yes, The number is found :-)        No, The number is not found :-(
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

bool IsNumberInArray(int arr[100], int arrLength, int number) {
	return FindNumberPositionInArray(arr, arrLength, number) != -1;
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
	if (!IsNumberInArray(arr, arrLength, number)) {
		cout << "The number is not found :-(\n";
	}
	else
	{
		cout << "The number is found :-)\n";
	}
	return 0;
}
