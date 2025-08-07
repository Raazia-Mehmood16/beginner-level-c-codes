3#include<iostream>
using namespace std;

int main() {
    const int size = 10;
    int n[size];

    cout << "Hello Dear, Please Enter 10 numbers" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "  ";
        cin >> n[i];

        if (n[i] < 0) {
            cout << "Please enter only positive integers!" << endl;
            cout<<" ";
            cin >> n[i];
            i-1;
        }
    }

    cout << endl << "_________________________________" << endl << endl;

    for (int i = 0; i < size; ++i) {
        cout << "Divisors of " << n[i] << ": ";
        for (int j = 1; j <= n[i]; ++j) {
            if (n[i] % j == 0) {
                cout << j << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
