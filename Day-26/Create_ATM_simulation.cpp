#include <iostream>
using namespace std;

int main() {
    int defaultPin = 1234;
    int enteredPin;
    int remainingAttempts = 3;
    double currentBalance = 1000.00; 
    int selectedMenuChoice;
    double transactionAmount;
    bool isUserActive = true;

    cout << "=================================\n";
    cout << "   WELCOME TO THE VIRTUAL ATM    \n";
    cout << "=================================\n";

    while (remainingAttempts > 0) {
        cout << "\nPlease enter your 4-digit PIN: ";
        cin >> enteredPin;
        if (enteredPin == defaultPin) {
            cout << "Access Granted!\n";
            break; 
        } else {
            remainingAttempts--;
            cout << "Incorrect PIN. ";
            if (remainingAttempts > 0) {
                cout << "Attempts remaining: " << remainingAttempts << "\n";
            } else {
                cout << "Your account has been locked. Please contact support.\n";
                return 0; 
            }
        }
    }
    while (isUserActive) {
        cout << "\n---------------------------------\n";
        cout << "            ATM MENU             \n";
        cout << "---------------------------------\n";
        cout << "1. Check Current Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit Transaction\n";
        cout << "Please select an option (1-4): ";
        cin >> selectedMenuChoice;

        switch (selectedMenuChoice) {
            case 1:
                cout << "\nYour current available balance is: $" << currentBalance << "\n";
                break;
            case 2:
                cout << "\nEnter the amount you wish to deposit: $";
                cin >> transactionAmount;
                
                if (transactionAmount > 0) {
                    currentBalance += transactionAmount;
                    cout << "Success! $" << transactionAmount << " has been added to your account.\n";
                    cout << "New balance: $" << currentBalance << "\n";
                } else {
                    cout << "Invalid deposit amount.\n";
                }
                break;
            case 3:
                cout << "\nEnter the amount you wish to withdraw: $";
                cin >> transactionAmount;

                if (transactionAmount > currentBalance) {
                    cout << "Transaction Declined: Insufficient funds available.\n";
                } else if (transactionAmount <= 0) {
                    cout << "Invalid withdrawal amount.\n";
                } else {
                    currentBalance -= transactionAmount;
                    cout << "Success! Please collect your $" << transactionAmount << ".\n";
                    cout << "Remaining balance: $" << currentBalance << "\n";
                }
                break;
            case 4:
                cout << "\nThank you for choosing our banking services. Goodbye!\n";
                isUserActive = false;
                break;

            default:
                cout << "Invalid selection. Please input a choice from 1 to 4.\n";
                break;
        }
    }

    return 0;
}
