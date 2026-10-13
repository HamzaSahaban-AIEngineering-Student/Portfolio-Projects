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

bool Check_Of_Matrix_Equality(int arr1[3][3],int arr2[3][3], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr1[i][j] != arr2[i][j]) {
                return false;
            }
        }
    }
    return true;
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

bool Are_Matrix_Equal(int arr1[3][3], int arr2[3][3], int rows, int cols) {
    return (Sum_Of_Matrix(arr1, 3, 3) == Sum_Of_Matrix(arr2, 3, 3));
}

void PrintResults() {
    srand((unsigned)time(NULL));
    int arr1[3][3], arr2[3][3];
    FillMatrixWithRandomNumbers(arr1, 3, 3);
    cout << "\nMatrix 1: \n";
    PrintMatrix(arr1, 3, 3);
    FillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "\nMatrix 2: \n";
    PrintMatrix(arr2, 3, 3);
    if (Are_Matrix_Equal(arr1, arr2, 3, 3)) {
        cout << "Yes, They are equal! \n";
    }else {
        cout << "No, they are not equal!\n";
    }



}

int main() {
    PrintResults();
}
