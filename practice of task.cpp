#include <iostream>
using namespace std;

int main() {
    int n, km;
    double fare[100], total = 0;  // assuming a maximum of 100 passengers

    cout << "Enter total passengers: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Enter kilometers for passenger " << (i + 1) << ": ";
        cin >> km;
        fare[i] = (km <= 5) ? 20 : 20 + (km - 5) * 5;//check condition for 5 km or above dist
        total += fare[i];
}

    cout <<endl<< "Fare details:"<<endl;
    for (int i = 0; i < n; ++i)
        cout << "Passenger " << (i + 1) << " fare: $" << fare[i] << endl;
    cout << "Total fare of all Passengers: $" << total << endl;

    return 0;
}