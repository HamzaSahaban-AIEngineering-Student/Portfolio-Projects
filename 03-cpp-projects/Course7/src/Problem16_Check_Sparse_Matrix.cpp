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


short Count_Number_In_Matrix(int arr[3][3], int num, int rows, int cols) {
    short Count = 0;
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (arr[i][j] == num)
                Count++;
        }
    }
    return Count;
}

bool Is_Sparse_Matrix(int arr[3][3], short rows, short cols) {
    short ArrSize = rows * cols;
    return Count_Number_In_Matrix(arr, 0, 3, 3) >= (ArrSize / 2 );
}

void PrintResults() {
    srand((unsigned)time(NULL));
    int arr1[3][3] = {{3, 0, 0},{0, 3, 0}, {0, 0, 3}};
    int arr2[3][3] = {{1, 2, 3}, {1, 3, 4}, {3, 2, 4}};
    PrintMatrix(arr2, 3, 3);
    int num = 0;
    if (Is_Sparse_Matrix(arr2, 3, 3)) {
        cout << "Yes, its a sparse matrix ! \n\n";
    }else {
        cout << "No, its not a sparse matrix ! \n\n";
    }




}

int main() {
    PrintResults();
}
