#include <iostream>
#include <cmath>
using namespace std;
//Author: Matthew Shapiro
//Class : CSI 140-01
// Assignment : Loan Calculator
// Date Assigned : Date - 9/18/22
// Due Date : Due - 9/25/22 11:59 pm
// Description : An application that calculates the total and monthly cost of a loan
//A brief description of the purpose of the program.
// Certification of Authenticity :
//I certify that this is entirely my own work, except where I have given fully documented
// references to the work of others.I understand the definition and
// consequences of plagiarism and acknowledge that the assessor of this assignment
// may, for the purpose of assessing this assignment :
// -Reproduce this assignment and provide a copy to another member of
// academic staff; and / or
// - Communicate a copy of this assignment to a plagiarism checking service
// (which may then retain a copy of this assignment on its database for
// the purpose of future plagiarism checking)
//FYI VERY IMPORTANT: As a firm believer in the open source software movement, and for version history features this project is publicly
//available on my github ACSOverride. If your plagiarism checker fires off because of that I can prove that I am the owner of that github account/repo.
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
    cout << "\nInterest Paid " << borrow*pow(1+trueRate, months)-borrow;

}
