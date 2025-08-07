
#include <iostream>
using namespace std;

int main() {
    int num,  lDig;
    cout <<endl<< "Enter a 6-digit number: "; // Take input from the user
    cin >> num;
    lDig = num % 10; // Stores Rightmost digit
    num /= 10; //Distroy last digit
    if (lDig % 2 == 0) {
        num = (num + 1 ==100000) ? num - 2 : num + 1;
    } else {
        num -= 1;
    }
    lDig = num % 10; // Rightmost digit is processed (from previous modification)
    num /= 10;
    if (lDig % 2 == 0) {
        num = (num + 1 ==10000) ? num - 2 : num + 1;
    } else {
        num -= 1;
    }
    lDig = num % 10;  // again stores right most digit in range of 999
    num /= 10;
    if (lDig % 2 == 0) {
        num = (num + 1 ==1000) ? num - 2 : num + 1;
    } else {
        num -= 1;
    }
    lDig = num % 10; // Store Rightmost digit range of 99
    num /= 10;
    if (lDig % 2 == 0) {
        num = (num + 1 ==100) ? num - 2 : num + 1;
    } else {
        num -= 1;
    }
    lDig = num % 10; //  Rightmost digit range of 9
    num /= 10;
    if (lDig % 2 == 0) {
        num = (num + 1 ==10) ? num - 2 : num + 1;
    } else {
        num -= 1; // final value
    }
    if (lDig % 2 == 0) {
        num = (num + 1 ==10) ? num - 2 : num + 1;
    } else {
        num -= 1; // final value
    }
    cout << "Final result: " << num<< endl;// Output the final result
    cout<<endl;
    return 0;
}
