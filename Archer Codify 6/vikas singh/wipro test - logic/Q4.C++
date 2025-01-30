
// Write a program that accepts the age and date of birth of a person and checks for the premium amount needs to paid. do validation for age should not be greater than 72. the code should print the amount to be insured, and the premium amount to paid monthly.  Code in c++ 

#include <iostream>
using namespace std;


int main() {
    int age;
    string dateOfBirth;
    float insuredAmount, monthlyPremium;

    cout << "Enter your age: ";
    cin >> age;

    if (age > 72) {
        cout << "Invalid age. Age should not be greater than 72." << endl;
        return 0;
    }
    
    cout << "Enter your date of birth (DD/MM/YYYY): ";
    cin >> dateOfBirth;

    cout << "Enter the amount to be insured: ";
    cin >> insuredAmount;

    monthlyPremium = insuredAmount * 0.05;
 
    cout << "Details:" << endl;
    cout << "Age: " << age << endl;
    cout << "Date of Birth: " << dateOfBirth << endl;
    cout << "Amount to be insured: " << insuredAmount << endl;
    cout << "Monthly premium amount: " << monthlyPremium << endl;

    return 0;
}
