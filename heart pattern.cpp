#include<iostream>
using namespace std;

int main() {
    int size = 6;

    // Print the upper part of the heart
    for (int i = size / 2; i <= size; i += 2) {
        for (int j = 1; j < size - i; j += 2)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int j = 1; j <= size - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    // Print the lower triangular part of the heart with the arrow
    for (int i = size; i >= 1; i--) {
        for (int j = i; j < size; j++)
            cout << " ";
        for (int j = 1; j <= (i * 2) - 1; j++) {
            if (i == size / 2 && j == size) // Position of arrowhead
                cout << ">";
            else if (i == size / 2)
                cout << "-";  // Arrow shaft
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}
