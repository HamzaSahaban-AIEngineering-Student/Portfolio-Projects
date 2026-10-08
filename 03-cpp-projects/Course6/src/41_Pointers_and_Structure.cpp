#include <iostream>
using namespace std;

struct stEmployee {
    string name;
    int salary;
};

int main() {
    stEmployee Employee1;
    stEmployee *ptr;

    Employee1.name = "Hamza";
    Employee1.salary = 49990;

    cout << Employee1.name << endl;
    cout << Employee1.salary << endl;

    ptr = &Employee1;
    cout << "\nUsing pointer: \n";
    cout << ptr->name << endl;
    cout << ptr->salary << endl;
    cout << ptr->salary << endl;
}