#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns of matrices: ";
    cin >> r >> c;

    int A[50][50], B[50][50], R[50][50];

    cout << "Enter Matrix A:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "Enter Matrix B:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> B[i][j];

    // ADDITION
    cout << "\nA + B =\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << endl;
    }

    // SUBTRACTION
    cout << "\nA - B =\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << A[i][j] - B[i][j] << " ";
        }
        cout << endl;
    }

    // MULTIPLICATION
    if (c != r) {
        cout << "\nMultiplication not possible.\n";
        return 0;
    }

    cout << "\nA * B =\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            R[i][j] = 0;
            for (int k = 0; k < c; k++)
                R[i][j] += A[i][k] * B[k][j];
            cout << R[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

