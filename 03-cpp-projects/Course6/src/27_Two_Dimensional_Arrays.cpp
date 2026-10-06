#include <iostream>
using namespace std;


int main() {
    // int x[rows][colomns]
    int x[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }




    // Homework

    cout << "\n\n\n\n";
    int y[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            y[i][j] = (i + 1)  * (j + 1);
            printf("%0.*d ",2, y[i][j] );
        }
        cout << endl;
    }
}