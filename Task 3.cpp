#include <iostream>
using namespace std;

int main()
 {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int A[50][50];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    int skew = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != -A[j][i]) {
                skew = 0;
            }
        }
    }

    if (skew == 1)
        cout << "Matrix is SKEW-SYMMETRIC.\n";
    else
        cout << "Matrix is NOT skew-symmetric.\n";

    return 0;
}
