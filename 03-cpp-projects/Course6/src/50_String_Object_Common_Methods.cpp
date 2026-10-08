#include <iostream>
#include <string>
using namespace std;

int main() {
    string S1 = "My name is HAMZA SHABAN, I love programming!";

    cout << S1.length()<< endl;

    cout << S1.at(3) << endl;

    cout << S1.append(" @ComputerSience") << endl;
    cout << S1 << endl;

    S1.insert(7, "Ali");
    cout << S1 << endl;

    cout << S1.substr(16, 8) << endl;

    S1.push_back('X');
    cout << S1 << endl;

    S1.pop_back();
    cout << S1 << endl;

    cout << S1.find("Ali") << endl;

    cout << S1.find("ali") << endl;

    if (S1.find('ali' == S1.npos)) {
        cout << "ali not found!\n";
    }

    S1.clear();
    cout << S1 << endl;

}