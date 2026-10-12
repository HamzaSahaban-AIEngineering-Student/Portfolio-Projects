#include <iostream>
#include <iomanip>
using namespace std;

void FillMatrixWithOrderedNumbers(int arr[3][3], int rows, int cols) {
    int count = 1;

    for (int i = 0; i< rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = count;
            count++;
        }
    }
}

void PrintMatrix(int arr[3][3], int rows, int cols) {
    cout << "The following is 3x3 ordered matrix: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(3) << arr[i][j] << "   ";
        }
        cout << endl;
    }
}

void Transpos_Matrix(int arr[3][3], int transpos[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpos[i][j] = arr[j][i];
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3];
    int transpos[3][3];
    FillMatrixWithOrderedNumbers(arr, 3, 3);
    PrintMatrix(arr, 3, 3);
    Transpos_Matrix(arr, transpos, 3, 3);
    PrintMatrix(transpos, 3, 3);

    return 0;
}