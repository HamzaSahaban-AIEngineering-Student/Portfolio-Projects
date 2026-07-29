/*
Write a programme to ask the user to enter their 
  . age 
  . Drive licens
Then print "Hired" if their age is greater that 21 & they have a drive licens 
otherwise, print "Rejected";
*/

#include <iostream>
using namespace std;

struct stInfo {
	int Age;
	bool HasDrivingLicens;
};

stInfo ReadInfo() {
	stInfo Info;
	cout << "Enter your age: ";
	cin >> Info.Age;
	cout << "Do you have a Driving Licens ? ";
	cin >> Info.HasDrivingLicens;
	return Info;
}

bool isAccepted(stInfo Info) {
	
	return (Info.Age > 21 && Info.HasDrivingLicens);

}

void PrintResult(stInfo Info) {
	if (isAccepted(Info))
		cout << "Hired! " << endl;
	else
		cout << "Rejected! " << endl;
}

int main() {
	PrintResult(ReadInfo());
	
	return 0;
}