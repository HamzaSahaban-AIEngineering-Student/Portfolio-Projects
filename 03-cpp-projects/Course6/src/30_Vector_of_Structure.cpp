#include <iostream>
#include <vector>
using namespace std;



struct stEmployee {
    string FirstNaume;
    string LastName;
    float Salary;
};

int main() {
    vector <stEmployee> vEmployee;
    stEmployee tempEmployee;
    tempEmployee.FirstNaume = "Hamza";
    tempEmployee.LastName = "Shaban";
    tempEmployee.Salary = 1000;
    vEmployee.push_back(tempEmployee);

    tempEmployee.FirstNaume = "Mohammed";
    tempEmployee.LastName = "Ahemd";
    tempEmployee.Salary = 100;
    vEmployee.push_back(tempEmployee);

    tempEmployee.FirstNaume = "Ali";
    tempEmployee.LastName = "Baba";
    tempEmployee.Salary = 4000;
    vEmployee.push_back(tempEmployee);

    cout << "Employee Vector: \n\n";
    for (stEmployee &Employees : vEmployee) {
        cout << "First Name: " << tempEmployee.FirstNaume << endl;
        cout << "Last Name:  " << tempEmployee.LastName << endl;
        cout << "Salary :    " << tempEmployee.Salary << endl;
        cout <<endl;
    }
    cout << endl;

}