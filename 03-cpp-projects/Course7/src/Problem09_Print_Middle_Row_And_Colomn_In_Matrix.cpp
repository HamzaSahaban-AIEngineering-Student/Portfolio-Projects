#include <iostream>
#include <iomanip>
using namespace std;



int RandomNumber(int From, int To) {
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short colomns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colomns; j++)
            arr[i][j] = RandomNumber(1, 100);
    }
}


void PrintMatrix(int arr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // cout << setw(3) << arr[i][j] << "   ";
            printf("%0*d   ", 2, arr[i][j]);
        }
        cout << endl;
    }
}

void Print_Middle_Row(int arr[3][3], int rows, int cols) {
    short middle = rows / 2;
    for (int i = 0; i < cols; i++) {
        printf("%0*d   ", 2, arr[middle][i]);
    }
}

void Print_Middle_Col(int arr[3][3], int rows, int cols) {
    short middle = cols / 2;
    for (int i = 0; i < rows; i++) {
        printf("%0*d   ", 2, arr[i][middle]);
    }
}

void PrintResults() {
    srand((unsigned)time(NULL));
    int arr1[3][3];
    FillMatrixWithRandomNumbers(arr1, 3, 3);
    cout << "\nMatrix: \n";
    PrintMatrix(arr1, 3, 3);
    cout << "\nMiddle Row of Matrix1 is:\n";
    Print_Middle_Row(arr1, 3, 3);
    cout << "\nMiddle col of Matrix1 is:\n";
    Print_Middle_Col(arr1, 3, 3);



}

int main() {
    PrintResults();
}