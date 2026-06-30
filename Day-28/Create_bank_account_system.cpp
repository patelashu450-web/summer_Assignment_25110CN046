#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;
public:
    void createAccount() {
        cout << "\nEnter Account Holder Name: ";
        cin.ignore();
        getline(cin, accountHolder);
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Initial Balance: ";
        cin >> balance;
        cout << "\nAccount successfully created!\n";
    }
    void deposit() {
        double amount;
        cout << "\nEnter amount to deposit: ";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully!\n";
        } else {
            cout << "Invalid amount!\n";
        }
    }
    void withdraw() {
        double amount;
        cout << "\nEnter amount to withdraw: ";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully!\n";
        } else {
            cout << "Invalid amount or insufficient balance!\n";
        }
    }
    void displayDetails() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << "-----------------------" << endl;
    }
};
int main() {
    BankAccount account;
    int choice;
    bool accountCreated = false;
    do {
        cout << "\n=== BANKING MANAGEMENT SYSTEM ===" << endl;
        cout << "1. Create New Account" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Check Account Details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        switch (choice) {
            case 1:
                account.createAccount();
                accountCreated = true;
                break;
            case 2:
                if (accountCreated) {
                    account.deposit();
                } else {
                    cout << "\nPlease create an account first!\n";
                }
                break;
            case 3:
                if (accountCreated) {
                    account.withdraw();
                } else {
                    cout << "\nPlease create an account first!\n";
                }
                break;
            case 4:
                if (accountCreated) {
                    account.displayDetails();
                } else {
                    cout << "\nPlease create an account first!\n";
                }
                break;
            case 5:
                cout << "\nThank you for using our banking system!\n";
                break;
            default:
                cout << "\nInvalid selection. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
