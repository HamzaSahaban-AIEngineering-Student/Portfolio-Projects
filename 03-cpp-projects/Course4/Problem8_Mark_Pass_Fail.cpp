// write a programme to print pass or fail according to the mark entered by the user 
#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark() {
	int Mark;
	cout << "Enter Your Mark: ";
	cin >> Mark;
	return Mark;
}

enPassFail CheckMark(int Mark) {
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(int Mark) {
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "You Pass! \n ";
	else
		cout << "You Fail! \n";

}

int main() {
	PrintResult(ReadMark());
	return 0;
}