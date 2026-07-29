/*
Write a programme to ask the user to enter their
  . age
  . Drive licens
  . has recommendation 
Then print "Hired" if their age is greater that 21 & they have a drive licens  Or has a recommendation.
otherwise, print "Rejected";
*/

#include <iostream>
using namespace std;

struct stInfo {
	int Age;
	bool HasDrivingLicens;
	bool hasRecommendation;
};

stInfo ReadInfo() {
	stInfo Info;
	cout << "Enter your age: ";
	cin >> Info.Age;
	cout << "Do you have a Driving Licens ? ";
	cin >> Info.HasDrivingLicens;
	cout << "Do you have a recommendaton? ";
	cin >> Info.hasRecommendation;
	return Info;
}

bool isAccepted(stInfo Info) {
	if (Info.hasRecommendation)
		return true;
	else
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