#include <iostream>
using namespace std;

int main() {
    int unitsConsumed;
    double totalBillBeforeTax = 0.0, totalTax = 0.0, totalBillAfterTax = 0.0;

    // Input: Get the number of units consumed
    cout << "Enter the number of units consumed: ";
    cin >> unitsConsumed;

    // Input validation: Ensure the number of units is non-negative
    if (unitsConsumed < 0 )
    {
        cout << "Error: Units consumed cannot be negative." << endl;
    }
    else if(unitsConsumed>700)
    {
        cout << "Error: Units consumed are out of expected range." << endl;
    }
else 
{
    // Bill calculation based on the number of units consumed
    if (unitsConsumed <= 100) {
        totalBillBeforeTax = unitsConsumed * 5.0;  // PKR 5 per unit for 0 to 100 units
    }
    else if (unitsConsumed <= 300) {
        totalBillBeforeTax = (100 * 5.0) + ((unitsConsumed - 100) * 7.0);  // PKR 7 per unit for 101 to 300 units
    }
    else if (unitsConsumed <= 400) {
        totalBillBeforeTax = (100 * 5.0) + (200 * 7.0) + ((unitsConsumed - 300) * 24.40);  // PKR 24.40 per unit for 301 to 400 units
    }
    else if (unitsConsumed <= 500) {
        totalBillBeforeTax = (100 * 5.0) + (200 * 7.0) + (100 * 24.40) + ((unitsConsumed - 400) * 24.91);  // PKR 24.91 per unit for 401 to 500 units
    }
    else if (unitsConsumed <= 600) {
        totalBillBeforeTax = (100 * 5.0) + (200 * 7.0) + (100 * 24.40) + (100 * 24.91) + ((unitsConsumed - 500) * 26.15);  // PKR 26.15 per unit for 501 to 600 units
    }
    else  {
        totalBillBeforeTax = (100 * 5.0) + (200 * 7.0) + (100 * 24.40) + (100 * 24.91) + (100 * 26.15) + ((unitsConsumed - 600) * 27.59);  // PKR 27.59 per unit for 601 to 700 units
    }

    // Calculate total tax (10% of the bill)
    totalTax = totalBillBeforeTax * 0.10;

    // Calculate total bill after tax
    totalBillAfterTax = totalBillBeforeTax + totalTax;

    // Output: Display the results
    cout << endl<<"Total Bill (before tax): PKR " << totalBillBeforeTax << endl;
    cout << "Total Tax: PKR " << totalTax << endl;
    cout << "Total Bill (after tax): PKR " << totalBillAfterTax << endl;
    cout<<endl;
}
    return 0;
}