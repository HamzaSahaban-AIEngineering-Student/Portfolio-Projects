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

void PrintMatrix(int arr[3][3], short rows, short colomns) {
    cout << "The following is a 3x3 random matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colomns; j++){
            cout << setw(3) << arr[i][j] << "   " ;
        }
        cout << "\n";
    }
}

int SumOfCol(int arr[3][3], short rows, short colomns) {
    int sum = 0;
    for (short j = 0; j < colomns; j++) {
        sum += arr[rows][j];
    }
    return sum;
}

void PrintSumOfRows(int arr[3][3], short rows, short colomns) {
    cout << "\nThe following are the sum of each row in the matrix: \n";
    for (short i = 0; i < rows; i++) {
        cout << "Row " << i + 1 << " Sum = " << SumOfCol(arr, i, colomns) << endl;
    }
}

void sumMarixColsInArray(int arr[3][3], int arr1[3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        arr1[i] = SumOfCol(arr, i, cols);

    }
}

void PrintColsSumArray(int arr[3], short row) {
    cout << "\nThe following are the sum of each row in the matrix: \n";
    for (short i = 0 ; i < row; i++) {
        cout << "Row " << i + 1 << " Sum = " << arr[i] << endl;
    }
}

int main() {
    srand((unsigned)time(NULL));

    int arr[3][3];
    int arrSum[3];
    FillMatrixWithRandomNumbers(arr, 3,3 );

    PrintMatrix(arr, 3,3 );


    PrintSumOfRows(arr, 3, 3);
    sumMarixColsInArray(arr, arrSum, 3, 3);
    PrintColsSumArray(arrSum, 3);
    return 0;
}
