
#include <iostream>
using namespace std;

int main() {
    int custNum, usage, peakUsage, digit1;
    double bill = 0.0, rate = 10.0;  // Fixed rate per kWh
    cout<<endl; 
    cout << "Enter your 5-digit customer number: ";
    cin >> custNum;
    digit1 = custNum / 10000; // store first digit of customer number
    cout << "Enter your monthly usage in kWh: ";
    cin >> usage;
    bill = usage * rate; // Base bill calculation
    switch (digit1)
     {     // Prime numbers (2, 3, 5, 7)
        case 2: case 3: case 5: case 7:
            if (usage < 300) {
                bill -= bill * 0.10;  // Apply 10% discount
                cout << "10% discount applied. ";
            } else {
                cout << "No discount applied (usage above 300 kWh). ";
            }
            break;
        // Odd but not prime numbers (1, 9)
        case 1: case 9:
            cout << "Enter your Peak-hour usage in kWh: ";
            cin >> peakUsage;
            if (peakUsage > usage * 0.5) {
                bill += bill * 0.15;  // Apply 15% surcharge
                cout << "15% surcharge applied. ";
            } else {
                cout << "No surcharge applied. ";
            }
            break;
        // Even numbers (0, 4, 6, 8)
        case 0: case 4: case 6: case 8:
            cout << "No Discounts or Surcharges. ";
            break;
        default:
            cout << "Invalid customer number!!!!" << endl;
            return 1;
    }
    cout << "Final bill: PKR " << bill << endl; // Final bill output 
   cout<<endl;
    return 0;
}