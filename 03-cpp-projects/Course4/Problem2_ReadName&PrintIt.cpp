// write a programme to read a name then print it 
#include <iostream>
#include <string>
using namespace std;

string ReadName() {

	string name;
	cout << "Enter your name: " << endl;
	getline(cin, name);
	return name;
}

void printName(string name) {
	cout << "Your name is: " << name << endl;
}

int main() {
	printName(ReadName());
	return 0;
}
