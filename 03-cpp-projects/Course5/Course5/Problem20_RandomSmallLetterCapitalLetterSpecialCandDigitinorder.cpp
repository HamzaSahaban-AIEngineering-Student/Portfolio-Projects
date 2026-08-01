/*
 * Problem:
 * Write a program to print random Small Letter, Capital
 * Letter, Special Character, and Digit in order.
 *
 * Output:
 * i
 * G
 * $
 * 7
 */

#include <iostream> 
#include <cstdlib>
using namespace std; 

int RandonNum(int From, int To) {
	int RandomNum = rand() % (To - From + 1) + From;
	return RandomNum;
}

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacters = 3, Digits = 4 };

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

int main() {
	srand(time(0)); 
	cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
	cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
	cout << GetRandomCharacter(enCharType::SpecialCharacters) << endl;
	cout << GetRandomCharacter(enCharType::Digits) << endl;
	return 0;
}