#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int A[50][50];

    cout << "Enter matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    int symmetric = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                symmetric = 0;
            }
        }

    }

    if (symmetric == 1)
        cout << "Matrix is SYMMETRIC.\n";
    else
        cout << "Matrix is NOT symmetric.\n";

    return 0;
}
