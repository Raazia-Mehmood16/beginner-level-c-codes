#include <iostream>
using namespace std;

int main() {
    int row, col, t;
    int mat[300][300]; 

    
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;
    cout << "Enter Target Value: ";
    cin >> t;

    cout << "Enter elements of the 2D array:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }

    
    int i = 0, j = 0; // Start at  top-left corner
    bool pathExists = false;

    while (true) {
        //  if reached bottom-right corner
        if (i == row - 1 && j == col - 1) {
            pathExists = true;
            break;
        }

        // Try moving right
        if (j + 1 < col && mat[i][j + 1] < t) {
            j++;
        }
        // If right is not possible, try moving down
        else if (i + 1 < row && mat[i + 1][j] < t) {
            i++;
        }
        // If no valid result break 
        else {
            break;
        }
    }

    //  result
    if (pathExists) {
        cout << "Path Exists" << endl;
    } else {
        cout << "No Path Found" << endl;
    }

    return 0;
}
