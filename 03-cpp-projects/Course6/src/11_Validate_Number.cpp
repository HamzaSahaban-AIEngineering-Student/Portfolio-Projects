#include <iostream>
using namespace std;

int ReadNumber() {
    int Number;
    cout << "Please Enter A Number: " << endl;
    cin >> Number;

    while (cin.fail()) {
        // user didn't enter a number
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout <<"Invalid Number! Enter a valid one: "<<endl;
        cin>>Number;
    }
    return Number;


}

int main() {
    cout << "Your Number is : " << ReadNumber();
}