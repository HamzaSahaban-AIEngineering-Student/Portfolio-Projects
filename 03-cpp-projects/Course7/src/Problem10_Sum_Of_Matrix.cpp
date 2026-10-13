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

int Sum_Of_Matrix(int arr[3][3], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum+= arr[i][j];
        }
    }
    return sum;
}

void PrintResults() {
    srand((unsigned)time(NULL));
    int arr1[3][3];
    FillMatrixWithRandomNumbers(arr1, 3, 3);
    cout << "\nMatrix: \n";
    PrintMatrix(arr1, 3, 3);
    cout << "\nSum of Matrix is:\n" << Sum_Of_Matrix(arr1, 3, 3) << endl;



}

int main() {
    PrintResults();
}
