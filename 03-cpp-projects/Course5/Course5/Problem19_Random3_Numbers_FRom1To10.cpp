/*
Problem:
Write a program to print 3 random numbers from 1 to 10.

Output:
9
5
3
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int RandonNum(int From, int To) {
	int RandomNum = rand() % (To - From + 1) + From;
	return RandomNum;
}

int main() {
	srand(time(0));
	cout << RandonNum(1, 10) << endl;
	cout << RandonNum(1, 10) << endl;
	cout << RandonNum(1, 10) << endl;
	return 0;
}