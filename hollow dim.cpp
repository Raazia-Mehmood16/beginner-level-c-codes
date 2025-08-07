#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd number for the diamond height: ";
    cin >> n;

    int h = n + 2;  // Rectangle height (margin for the diamond inside)
    int w = n + 2;  // Rectangle width (same as height for symmetrical space)
    int mid = n / 2 + 1; // Middle point of the diamond

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            // Draw the rectangle's boundary
            if (i == 0 || i == h - 1 || j == 0 || j == w - 1) {
                cout << "*";
            } 
            // Inside the boundary
            else {
                int diamond_i = i - 1;
                if (diamond_i <= mid - 1) {
                    // Upper half of the filled diamond
                    if (j >= mid - diamond_i && j <= mid + diamond_i) {
                        cout << "*";
                    } else {
                        cout << " ";
                    }
                } 
                else {
                    // Lower half of the filled diamond
                    int mirror_i = h - 2 - i;
                    if (j >= mid - mirror_i && j <= mid + mirror_i) {
                        cout << "*";
                    } else {
                        cout << " ";
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}
