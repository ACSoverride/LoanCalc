#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //setting up variables
    double borrow;
    double rate;
    double months;
    //asking the user for input
    cout << "Please enter the amount you borrowed";
    cin >> borrow;
    cout << "Please enter your interest rate";
    cin >> rate;
    cout << "Please enter the total months of your loan";
    cin >> months;
    //doing the calculations
    double trueRate = rate/100;
    double monthlyPayment = borrow*pow(1+trueRate, months)*trueRate/(pow(1+trueRate, months)-1);
    //outputting everything
    cout << "\nLoan Amount: " << borrow;
    cout << "\nMonthly Interest Rate: " << rate << "%";
    cout << "\nNumber of Payments: " << months;
    cout << "\nMonthly Payment: " << monthlyPayment;
    cout << "\nTotal Amount paid back: " << borrow*pow(1+trueRate, months);

}
