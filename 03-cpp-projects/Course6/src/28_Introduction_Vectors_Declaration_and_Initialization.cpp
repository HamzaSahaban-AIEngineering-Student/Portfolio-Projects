#include <iostream>
#include <vector>
using namespace std;

int main() {
    // std::vector<T> vector_name
    vector <int> vNumbers = {1, 2, 3, 4, 5};
    cout << "Numbers Vectors = " ;
    // ranged loop

    for (int &number : vNumbers) {
        cout << number << " ";
    }
    cout << endl;
    return 0;
}
