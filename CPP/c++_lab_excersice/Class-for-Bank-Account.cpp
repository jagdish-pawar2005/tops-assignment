#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;  // Private data member (Encapsulation)

public:
    // Constructor 
    BankAccount(float initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            cout << "Invalid initial balance. Setting balance to 0.\n";
            balance = 0;
        }
    }

    // deposit money
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    // withdraw money
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient balance!\n";
        }
    }

    // Function to display current balance
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    float initialBalance;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount account(initialBalance);  // user input balance

    int choice;
    float amount;

    do {
        cout << "\n===== Bank Menu =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Display Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.displayBalance();
                break;
            case 4:
                cout << "Exiting program. Thank you!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

