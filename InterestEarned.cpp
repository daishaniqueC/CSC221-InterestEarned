// This program calculates the final savings balance and interest earned after one year.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () 
{
    double principalBalance;
    double annualInterestRate;
    int timesCompounded;
    double decimalRate;
    double amount;
    double interestEarned;

    cout << "This program calculates your savings account balance and the interest earned after one year using compound interest." << endl;
    cout << "Please enter your starting balance: ";
    cin >> principalBalance;
    cout << "Please enter your annual interest rate as a percentage: ";
    cin >> annualInterestRate;
    cout << "Please enter the number of times the interest is compounded: ";
    cin >> timesCompounded;
    
    decimalRate = annualInterestRate / 100;
    amount = principalBalance * pow(1 + decimalRate / timesCompounded, timesCompounded);
    interestEarned = amount - principalBalance;

    cout << fixed << setprecision(2);

    cout << endl;
    cout << "Savings Account Report" << endl;
    cout << left << setw(20) << "Interest Rate:" << annualInterestRate << "%" << endl;
    cout << left << setw(20) << "Times Compounded:" << timesCompounded << endl;
    cout << left << setw(20) << "Principal:" << "$" << principalBalance << endl;
    cout << left << setw(20) << "Interest Earned:" << "$" << interestEarned << endl;
    cout << left << setw(20) << "Final Balance:" << "$" << amount << endl;

    return 0;
}