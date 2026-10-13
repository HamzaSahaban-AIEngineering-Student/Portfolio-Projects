#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;


void PrintMatrix(int arr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // cout << setw(3) << arr[i][j] << "   ";
            printf("%0*d   ",3,  arr[i][j]);
        }
        cout << endl;
    }
}

bool Is_Palendrome_Matrix(int arr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols / 2; j++) {
            if (arr[i][j] != arr[i][cols - 1 - j])
                return false;
        }
    }
    return true;
}

void PrintResults() {
    srand((unsigned)time(NULL));
    int arr1[3][3] = {{3, 44, 3},{110, 20, 110}, {3, 44, 3}};
    int arr2[3][3] = {{1, 2, 3}, {44, 3, 4}, {3, 2, 4}};
    PrintMatrix(arr1, 3, 3);
    cout << endl;
    if (Is_Palendrome_Matrix(arr1, 3, 3))
        cout << "yes, its palendrome!\n\n";
    else
        cout << "no, its not palendrome!\n\n";

}

int main() {
    PrintResults();
}
