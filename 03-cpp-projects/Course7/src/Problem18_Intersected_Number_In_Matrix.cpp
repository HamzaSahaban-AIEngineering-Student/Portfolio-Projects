#include <iostream>
#include <iomanip>
using namespace std;


void PrintMatrix(int arr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // cout << setw(3) << arr[i][j] << "   ";
            printf("%d   ", arr[i][j]);
        }
        cout << endl;
    }
}


bool Is_Number_In_Matrix(int arr[3][3], int num, int rows, int cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (arr[i][j] == num)
                return true;
        }
    }
    return false;
}

void Print_Intersected_Numbers(int arr1[3][3], int arr2[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j =0; j < cols; j++) {
            if (Is_Number_In_Matrix(arr2, arr1[i][j], 3,3 )) {
                cout << arr1[i][j] << "  ";
            }
        }
    }
}


void PrintResults() {
    srand((unsigned)time(NULL));
    int arr1[3][3] = {{3, 44, 33},{0, 20, 44}, {22, 14, 4}};
    int arr2[3][3] = {{1, 2, 3}, {44, 3, 4}, {3, 2, 4}};
    PrintMatrix(arr1, 3, 3);
    cout << endl;
    PrintMatrix(arr2, 3, 3);
    cout << endl;

    Print_Intersected_Numbers(arr1, arr2, 3, 3);


}

int main() {
    PrintResults();
}
