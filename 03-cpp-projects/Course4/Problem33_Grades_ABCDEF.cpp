/*
Problem:
Write a program to ask the user to enter:
- Grade

Then print the grade as follows:
- 90 - 100 Print A
- 80 - 89  Print B
- 70 - 79  Print C
- 60 - 69  Print D
- 50 - 59  Print E
- Otherwise Print F

Example Inputs:
95

Outputs:
A
*/

#include <iostream>
#include <string>
using namespace std;

int ReadNumberInRange(int From, int To) {
	int grade;
	do {
		cout << "Please Enter your Grade Between " << From << " And " << To << endl;
		cin >> grade;
	} while (grade <From || grade > To);
	return grade;

}
char CheckGradeLetter(int Grade) {
    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';
}

int main() {
    int StudentGrade = ReadNumberInRange(0, 100);
    cout << endl << "Result = " << CheckGradeLetter(StudentGrade) << endl;

	return 0;
}