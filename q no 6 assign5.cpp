#include <iostream>
using namespace std;

int main() {
    char mt[20][20];

    for (int i = 0; i < 20; i++) {  //fill with null characters
        for (int j = 0; j < 20; j++) {
            mt[i][j] = '\0';
        }
    }

    int n, op, op2;
    
    do {
        cout << "Please choose a pattern:\n";
        cout << "1 - Filled Square of *\n";
        cout << "2 - Hollow Square of *\n";
        cout << "3 - Right Triangle of * (select orientation)\n";
        cout << "0 - Exit\n";
        cin >> op;

        if (op == 0) {
            cout << "Thank you for using the program. Goodbye!\n";
            break;
        }

        cout << "Enter the size of the pattern b/w 1 to 20: ";
        cin >> n;

        if (n <= 0 || n > 20) {
            cout << "Invalid size! Please enter a value between 1 and 20.\n";
            continue;
        }
         cout<<endl;
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 20; j++) {
                mt[i][j] = '\0';
            }
        }

        switch (op) {
            case 1: {
                cout<<"Pattern of Ranctangle *\n";  
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {     //fill whole array with *
                        mt[i][j] = '*';
                    }
                }
                break;
            }

            case 2: {
                 cout<<"Pattern of Hollow Ranctangle *\n";
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (i == 0 || i == n - 1 || j == 0 || j == n - 1) //fill bounderies of ranctangle
                            mt[i][j] = '*';
                        else
                            mt[i][j] = ' ';
                    }
                }
                break;
            }

            case 3: {
                cout << "Choose triangle orientation:\n";
                cout << "1 - Top-left\n";
                cout << "2 - Top-right\n";
                cout << "3 - Bottom-left\n";
                cout << "4 - Bottom-right\n";
                cin >> op2;
                cout<<endl;

                switch (op2) {
                    case 1:
                     cout<<"Right Triangle Top Left *\n";
                        for (int i = 0; i < n; i++) {
                            for (int j = 0; j <= i; j++) {
                                mt[i][j] = '*';
                            }
                        }
                        break;

                    case 2:
                     cout<<"Right Triangle Top Right *\n";
                        for (int i = 0; i < n; i++) {
                            for (int j = 0; j < n; j++) {
                                if (j >= n - i - 1)  // as index start from 0 so subtract 1
                                    mt[i][j] = '*';
                                else
                                    mt[i][j] = ' ';
                            }
                        }
                        break;

                    case 3:
                     cout<<"Right Triangle Bottom Left *\n";
                        for (int i = 0; i < n; i++) {
                            for (int j = 0; j <= i; j++) {
                                mt[n - i - 1][j] = '*';    //fill only left side
                            }
                        }
                        break;

                    case 4:
                     cout<<"Right Triangle Bottom Right *\n";
                        for (int i = 0; i < n; i++) {
                            for (int j = 0; j < n; j++) {
                                if (j >= n - i - 1)
                                    mt[n - i - 1][j] = '*';
                            }
                        }
                        break;

                    default:
                        cout << "Invalid triangle orientation!\n";
                }
                break;
            }

            default:
                cout << "Invalid choice! Please try again.\n";
        }

        cout <<endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {  //print pattern stored in array
                if (mt[i][j] == '\0')
                    cout << ' ';
                else
                    cout << mt[i][j];
            }
            cout << endl;
        }
        cout << endl;

    } while (op != 0);

    return 0;
}
