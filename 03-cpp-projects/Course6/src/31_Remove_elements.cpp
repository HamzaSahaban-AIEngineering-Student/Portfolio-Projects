#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    cout << "Vector size = " << vNumbers.size() << endl;
    // vNumbers.pop_back();
    // vNumbers.pop_back();
    // vNumbers.pop_back();
    // vNumbers.pop_back();
    vNumbers.clear(); // remove everything
    cout << "Vector size = " << vNumbers.size() << endl;

    cout << "Number Vector : \n";
    for (int &number : vNumbers) {
        cout << number << endl;
    }
}