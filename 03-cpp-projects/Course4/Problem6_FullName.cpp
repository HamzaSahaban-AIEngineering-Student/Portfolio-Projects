// write a programme to print the user's full name 

#include <iostream>
#include <string>
using namespace std;

struct stInfo {
	string firstName;
	string lastName;
};

stInfo readInfo() {
	stInfo Info;
	cout << "Enter Your First Name: ";
	getline(cin, Info.firstName);
	cout << "Enter Your Last Name: ";
	getline(cin, Info.lastName);
	return Info;
}

string GetFullName(stInfo Info) {
	string FullName = "";
	FullName = Info.firstName + " " + Info.lastName;
	return FullName;
}

void PrintInfo(string FullName) {
	cout << "Your Full Name is " << FullName << endl;

}

int main() {
	PrintInfo(GetFullName(readInfo()));
	return 0;
}
