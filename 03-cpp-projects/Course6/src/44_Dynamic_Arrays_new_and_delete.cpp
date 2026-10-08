#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number of students: " ;
    cin >> number;

    float *ptr;
    ptr = new float[number];

    cout << "Enter grades of students: \n";
    for (int i = 0; i < number; i++) {
        cout << "student" << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "Display the grades of students.\n";
    for (int i = 0; i < number; i++) {
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }

    delete ptr;
}