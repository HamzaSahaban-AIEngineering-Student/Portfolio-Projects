#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector <int> vNumbres;
    vNumbres.push_back(10);
    vNumbres.push_back(20);
    vNumbres.push_back(30);
    vNumbres.push_back(40);
    vNumbres.push_back(50);

    vNumbres.clear();
    // cout << "Frist Element: " << vNumbres.front() << endl;
    // cout << "last Element: " << vNumbres.back() << endl;
    cout << "Vector size : " << vNumbres.size() << endl;
    cout << "Capacity: " << vNumbres.capacity() << endl;
    cout << "Empty: " << vNumbres.empty() << endl;
    ;
}