#include <iostream>
using namespace std;

int main() {
    char weather; // Use 'S' for sunny, 'C' for clear, 'R' for rainy, 'N' for snowy, 'F' for foggy
    int temperature;
    int windSpeed;
     // Input from user
    cout << "Enter weather forecast :"<<endl;
    cout<<" (S for Sunny, C for Clear, for Rainy, N for Snowy, F for Foggy): "<<endl;;
    cin >> weather;
    cout << "Enter temperature in Celsius: ";
    cin >> temperature;
    cout << "Enter wind speed in km/h: ";
    cin >> windSpeed;
    // Condition checking: if any unsafe condition is true, trip is not allowed
    if ((weather!='S' && weather != 'C'&&weather!='s'&&weather !='c') || temperature < 10 || temperature > 40 || windSpeed > 50)
     {
        cout << "Trip is not allowed." << endl; // Unsafe conditions
    } else {
        cout << "Trip is allowed." << endl; // All conditions are safe
    }
cout<<endl;
    return 0;
}