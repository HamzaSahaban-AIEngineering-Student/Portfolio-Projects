// Write a programme to calculate the area of rectangel
#include <iostream>
using namespace std;

void ReadValues(float& A, float& B) {
	cout << "Please Enter Rectangle width A: " << endl;
	cin >> A;
	cout << "Please Enter Rectangle Height B: " << endl;
	cin >> B;
}

float CalculateRectangleArea(float A, float B) {
	return A * B;
}

void PrintResults(float Area) {
	cout << "The Area Of The Rectangle is : " << Area << endl;
}

int main() {
	float A, B;
	ReadValues(A, B);
	PrintResults(CalculateRectangleArea(A, B));
	return 0;
}