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
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colomns; j++){
            cout << setw(3) << arr[i][j] << "   " ;
        }
        cout << "\n";
    }
}

int main() {
    srand((unsigned)time(NULL));
    int arr[3][3];
    FillMatrixWithRandomNumbers(arr, 3,3 );
    cout << "The following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3,3 );
}
