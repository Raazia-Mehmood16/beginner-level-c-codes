#include <iostream>
using namespace std;

int main() {
    // Variable declarations
    int age; // Age of the applicant
    int Premium = 0; // Base premium according to age
    int preExistingConditions; // Number of pre-existing conditions
    int smokerInput;
    double additionalCharge = 0.0; // Additional charge based on conditions and smoker status
    double totalPremium; // Total premium after all calculations
    // Input: Get the age of the applicant
    cout << "Enter your age: ";
    cin >> age;

    // Input validation for age
    if (age < 0) {
    cout << "Error: Age cannot be negative." << endl; 
    }
    // Determine base premium based on age
    else
    {
    if (age < 18) {
        Premium = 2000; // Premium for under 18
    } else if (age >= 18 && age <= 30) {
        Premium = 3500; // Premium for ages 18 to 30
    } else if (age >= 31 && age <= 50) {
        Premium = 5000; // Premium for ages 31 to 50
    } else {
        Premium = 8000; // Premium for above 50
    }
    // Input: Ask about pre-existing conditions
    cout << "Enter the number of pre-existing conditions (0, 1, or more): ";
    cin >> preExistingConditions;

    // Input validation for pre-existing conditions
    if (preExistingConditions < 0) {
        cout << "Error: Number of conditions cannot be negative." << endl;
    
    }

    // Determine additional charges based on pre-existing conditions
    else 
    {
    if (preExistingConditions == 0) {
        additionalCharge = 0; // No additional charge for no conditions
    } else if (preExistingConditions == 1) {
        additionalCharge = Premium * 0.25; // 25% increase for one condition
    } else {
        additionalCharge = Premium * 0.50; // 50% increase for more than one condition
    }

    // Input: Ask about smoker status
    cout << "Are you a smoker? (1 for yes, 0 for no): ";
    cin >> smokerInput; // Use int for input to follow instructions

    // Determine if there's an additional charge for smokers
    if (smokerInput == 1) {
        additionalCharge += Premium * 0.20; // 20% additional charge for smokers
    }
   // Calculate total premium
    totalPremium = Premium + additionalCharge;
  // Output: Display the total premium
    cout << "Total Health Insurance Premium: PKR " << totalPremium << endl;
    }
    }
    return 0;
}