#include <iostream>
using namespace std;

int main() {
    int m, n, t;
    
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    int matrix[m][n];
    
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the target value t: ";
    cin >> t;

    bool pathExists = true;
    int row = 0, col = 0;

    while (row < m - 1 || col < n - 1) {
        if (col < n - 1 && matrix[row][col + 1] < t) {
            col++;
        } else if (row < m - 1 && matrix[row + 1][col] < t) {
            row++;
        } else {
            pathExists = false;
            break;
        }
    }

    if (pathExists) {
        cout << "Path Exists" << endl;
    } else {
        cout << "No Path Found" << endl;
    }

    return 0;
}
