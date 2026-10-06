#include <iostream>
#include <vector>
using namespace std;

/*
Write a program to ask yser to enter as many numbers as they want, each
time a number entered add it to your vector, and ask the user if they want to
add more numbers until they say no, then print all vector elements on the screen

*/

void ReadNumbers(vector <int> &vNumber) {
   char ReadMore = 'Y';
   int number;
   while (ReadMore == 'Y' || ReadMore == 'y') {
      cout << "Enter a number: ";
      cin >> number;
      vNumber.push_back(number);

      cout << "\n\nDo you want to add more numbers? (Y/N)? ";
      cin >> ReadMore;
   }

}

void Print_Vector(vector <int> &vNumber) {
   cout << "Vector Numbers: \n\n";
   for (int number : vNumber) {
      cout << number << endl;
   }
   cout << endl;
}

int main() {
   vector <int> vNumber;
   ReadNumbers(vNumber);
   Print_Vector(vNumber);
}