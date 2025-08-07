#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    double annualIn, annualTax = 0.0, monthlyTax = 0.0;
    char isSalaried, isTeacher;
    bool salaried=false,teacher=false;
    cout<<endl;
    cout << "Enter your annual income (in PKR): "; //  Get the user's annual income
    cin >> annualIn;
    if (annualIn <= 0) //  validation of input , income cannot be -ve number
    {
        cout << "Error!!!!!! Income must be a positive value." << endl;
    }
else
{
    cout << "Are you a salaried employee? (y/n): "; // to check user is salaried or non-salaried?
    cin >> isSalaried;
    if  (isSalaried == 'y' || isSalaried == 'Y')
    salaried=true;   
    cout << "Are you a teacher in a non-profit organization? (y/n): "; // if teacher is in non-profit organization?
    cin >> isTeacher;
    if (isTeacher == 'y' || isTeacher == 'Y')
    teacher=true;
    if (salaried)   // only execute if user is salaried 
     {
        // Tax brackets for salaried individuals
        if (annualIn <= 600000) {
            annualTax = 0.0;
        } else if (annualIn <= 1200000) {
            annualTax = (annualIn - 600000) * 0.025;
        } else if (annualIn <= 2400000) {
            annualTax = 15000 + (annualIn - 1200000) * 0.125;
        } else if (annualIn <= 3600000) {
            annualTax = 165000 + (annualIn - 2400000) * 0.20;
        } else if (annualIn <= 6000000) {
            annualTax = 405000 + (annualIn - 3600000) * 0.25;
        } else {
            annualTax = 1005000 + (annualIn - 6000000) * 0.325;
        }
    } else // excute fpr non salaried employ
    {        // Tax brackets for non-salaried individuals
         if (annualIn <= 600000) {
            annualTax = 0.0;
        } else if (annualIn <= 1200000) {
            annualTax = (annualIn - 600000) * 0.05;
        } else if (annualIn <= 2400000) {
            annualTax = 30000 + (annualIn- 1200000) * 0.125;
        } else if (annualIn <= 3600000) {
            annualTax = 180000 + (annualIn- 2400000) * 0.175;
        } else if (annualIn <= 6000000) {
            annualTax = 390000 + (annualIn - 3600000) * 0.225;
        } else {
            annualTax = 975000 + (annualIn- 6000000) * 0.30;
        }
    }
    if (teacher) // 25% rebate if user is a teacher in a non-profit organization
    {
        annualTax *= 0.75;  // 25% rebate -> 75% of the original tax
    }
    monthlyTax = annualTax / 12;  // Calculate the monthly tax deduction by dividing 12
                                      // Output the calculated annual tax and monthly tax deduction
    cout << endl;
    cout << "Annual Tax: PKR " <<fixed<<setprecision(3)<<annualTax << endl;
    cout<<"------------"<<fixed<<setw(6)<<" And "<<"----------------"<<endl;
    cout << "Monthly Tax Deduction: PKR " <<fixed<<setprecision(3)<< monthlyTax << endl;
}
cout<<endl;
    return 0;
}