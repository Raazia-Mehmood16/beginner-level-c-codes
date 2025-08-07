#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int num[20];
    int dup[20];
    int dupCount = 0;

    srand(time(0));
    cout<<endl;
    for (int i = 0; i < 20; i++) {
        num[i] = 25 + rand() % 51;
        cout<<num[i]<<" ";
    }

    for (int i = 0; i < 20; i++) {
        bool isDup = false;
        for (int j = 0; j < i; j++) {
            if (num[i] == num[j]) {
                isDup = true;
                break;
            }
        }
        if (isDup) {
            bool Stored = false;
            for (int k = 0; k < dupCount; k++) {
                if (dup[k] == num[i]) {
                    Stored = true;
                    break;
                }
            }
            if (!Stored) {
                dup[dupCount] = num[i];
                dupCount++;
            }
        }
    }

    cout << endl<<"Duplicate values:" <<endl;
    for (int i = 0; i < dupCount; i++) {
        cout << dup[i] << " ";
    }
    cout << endl;

    return 0;
}
