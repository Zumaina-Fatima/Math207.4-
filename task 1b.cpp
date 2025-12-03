#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int A[50][50];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    // In-place transpose
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(A[i][j], A[j][i]);

    cout << "\nIn-Place Transpose:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    return 0;
}
