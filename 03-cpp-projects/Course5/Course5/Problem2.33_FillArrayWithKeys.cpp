/*
Problem:
Write a program to read how many keys to generate and fill
them in array then print them on the screen.

Input:
5

Output:
Array elements:

Array[0] : NRXC-DXRO-QEAM-WRWE
Array[1] : BJTR-KIKF-ATEW-WNTT
Array[2] : QOFX-KZEL-SSDP-AKSI
Array[3] : GFOI-ELFX-ZCVE-PSTP
Array[4] : MATF-PRQA-PQEQ-TRIM
*/

#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType {
	SmallLetter = 1, CapitalLetter = 2,
	SpecialCharacters = 3, Digits = 4
};

int RandonNum(int From, int To) {
	int RandomNum = rand() % (To - From + 1) + From;
	return RandomNum;
}

int ReadPositiveNumber(string Message) {
	int Number;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

char GetRandomCharacter(enCharType CharType) {
	switch (CharType) {
	case enCharType::SmallLetter: {
		return char(RandonNum(97, 122));
		break;
	}
	case enCharType::CapitalLetter: {
		return char(RandonNum(65, 90));
		break;
	}
	case enCharType::SpecialCharacters: {
		return char(RandonNum(33, 47));
		break;
	}
	case enCharType::Digits: {
		return char(RandonNum(48, 57));
		break;
	}
	}
}

string GenerateWord(enCharType charType, short length) {
	string word;
	for (int i = 1; i <= length; i++) {
		word = word + GetRandomCharacter(charType);
	}
	return word;
}

string GenerateKey() {
	string key = "";
	key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enCharType::CapitalLetter, 4);
	return key;
}

void GenerateKeys(short NumberOfKeys) {
	for (int i = 1; i <= NumberOfKeys; i++) {
		cout << "key [" << i << "] : ";
		cout << GenerateKey() << endl;
	}
}

void FillArrayWithKeys(string arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		arr[i] = GenerateKey();
	}
}

void PrintStringArray(string arr[100], int arrLength) {
	cout << "\nArray Elements: \n";
	for (int i = 0;i < arrLength; i++) {
		cout << "Array [" << i << "] : ";
		cout << arr[i] << "\n";
	}
	cout << endl;
}

int main() {
	srand((unsigned)time(NULL));
	string arr[100];
	int arrLength = 0;

	arrLength = ReadPositiveNumber("How many keys do you want to generate? \n");
	FillArrayWithKeys(arr, arrLength);
	
	PrintStringArray(arr, arrLength);
	return 0;
}
