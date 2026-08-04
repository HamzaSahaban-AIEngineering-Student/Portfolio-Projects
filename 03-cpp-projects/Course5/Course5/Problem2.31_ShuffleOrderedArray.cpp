/*
Problem:
Write a program to fill array with ordered numbers from 1 to N,
then print it, after that shuffle this array and print it after shuffle.

Input:
10

Output:
Array elements before shuffle:
1 2 3 4 5 6 7 8 9 10

Array elements after shuffle:
2 4 6 3 10 1 7 8 5 9
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(string Message) {
	int Number;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void Swap(int& A, int& B) {
	int temp = A;
	A = B;
	B = temp;
}

int RandomNumber(int From, int To) {
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWith1ToN(int arr[100], int arrLength) {
	for (int i = 0;i < arrLength;i++) {
		arr[i] = i + 1;
	}
}

void ShuffleArray(int arr[100], int arrLength) {
	for (int i = 0;i < arrLength;i++) {
		int index1 = RandomNumber(1, arrLength) - 1;
		int index2 = RandomNumber(1, arrLength) - 1;
		Swap(arr[index1], arr[index2]);
	}
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength;i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main() {
	int arr[100];
	int arrlength = ReadPositiveNumber("\nEnter number of elements : \n");
	
	FillArrayWith1ToN(arr, arrlength);
	cout << "\nArray Elemets before shuffle:\n";
	PrintArray(arr, arrlength);

	ShuffleArray(arr, arrlength);
	cout << "\nArray elements after shuffle:\n";
	PrintArray(arr, arrlength);
	return 0;
	
}
