#include <iostream>
#include <string>
using namespace std;

int main() {
    string accountType, level;
    double balance, interestRate = 0.0;

    cout << "Enter account type (Personal/Business): ";
    cin >> accountType;
    cout << "Enter account level (Standard/Gold/Platinum): ";
    cin >> level;
    cout << "Enter account balance: ";
    cin >> balance;

    if (accountType == "Personal") {
        if (level == "Standard") {
            interestRate = 1.2;
        } else if (level == "Gold") {
            if (balance >= 5000) 
                interestRate = 2.3;
            else if (balance >= 1000) 
                interestRate = 1.9;
        }
    } else if (accountType == "Business") {
        if (level == "Standard" && balance >= 1500) {
            interestRate = 1.7;
        } else if (level == "Platinum" && balance >= 10000) {
            interestRate = 2.5;
        }
    }

    cout << "Interest Rate: " << interestRate << "%" << endl;
    return 0;
}
