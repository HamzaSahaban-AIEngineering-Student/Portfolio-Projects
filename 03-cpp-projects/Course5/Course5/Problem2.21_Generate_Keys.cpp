/*
Problem:
Write a program to read how many keys to generate and print
them on the screen.

Input:
5

Output:
Key [1] : ETAI-HJUV-PEIP-CFRX
Key [2] : UMCO-YSPQ-PHYK-STIL
Key [3] : QBSR-MZEC-BYNA-DSYK
Key [4] : MISQ-ULYB-ZRAZ-LMAG
Key [5] : NQCR-PPFJ-KZLF-ZHMT
*/
/*
Algorithm:
1. We need to read the number of keys
2. We need to use enum to choose the character type from problem 20
3. we need to generate a random word from 4 letters 
4. we need to compine 4 random words separated by dashes(-)
5. we need to generate the same number of keys as the user intered in number 1. 
*/

#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2,
	SpecialCharacters = 3, Digits = 4 };

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

int main() {
	srand(time(0));
	GenerateKeys(ReadPositiveNumber("Enter The number of keys: "));
	return 0;
}
