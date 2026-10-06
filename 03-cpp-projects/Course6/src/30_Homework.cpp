/*
Write a programe to ask user to enter as many Employees as they want,
each time an Enployee entered add it to your vector and ask the user if they
want to add more Employees until they says no. then print all vector elements on screan

*/

#include <iostream>
using namespace std;

struct stEmployye {
    string First_Name;
    string Last_Name;
    int Salary;
};

void ReadEmployees(vector <stEmployye> &vEmployee) {
    char readMore = 'Y';
    stEmployye tempEmployee;
    while (readMore == 'Y' || readMore == 'y') {
        cout << "Enter First Name: ";
        cin >> tempEmployee.First_Name;
        cout << "Enter Last Name: ";
        cin >> tempEmployee.Last_Name;
        cout << "Enter Salary: ";
        cin >> tempEmployee.Salary;
        vEmployee.push_back(tempEmployee);

        cout << "What to add more ?? (Y/N)? ";
        cin >> readMore;
        cout << "\n\n";
    }
}

void PrintEmployees(vector <stEmployye> &vEmployees) {
    cout << "Employees Vector : \n\n";

    for (stEmployye &Employee : vEmployees) {
        cout << "First Name: " << Employee.First_Name << endl;
        cout << "Last Name: " << Employee.Last_Name << endl;
        cout << "Salary: " << Employee.Salary << endl;
        cout << endl;

    }
    cout << endl;
}

int main() {
    vector <stEmployye> vEmployee;
    ReadEmployees(vEmployee);
    PrintEmployees(vEmployee);
    return 0;
}