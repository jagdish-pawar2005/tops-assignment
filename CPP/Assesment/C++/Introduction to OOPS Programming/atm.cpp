#include <iostream>
#include <ctime>
using namespace std;

class ATM
{
private:
    int pin;
    double balance;

public:
    ATM(); // Constructor

    void showWelcome();
    bool login();
    void helpScreen();
    void deposit();
    void withdraw();
    void checkBalance();
    void menu();
};

// Constructor using Scope Resolution Operator
ATM::ATM()
{
    pin = 12345;
    balance = 20000;
}

void ATM::showWelcome()
{
    time_t now = time(0);

    cout << "\n====================================";
    cout << "\n      ATM BANKING APPLICATION";
    cout << "\n====================================";
    cout << "\nCurrent Date & Time: " << ctime(&now);
    cout << "\n1. Login";
    cout << "\n2. Help";
    cout << "\n3. Exit";
    cout << "\n====================================\n";
}

bool ATM::login()
{
    int userPin;

    cout << "\nEnter ATM PIN: ";
    cin >> userPin;

    if (userPin == pin)
    {
        cout << "\nPIN Verified Successfully!\n";
        return true;
    }

    cout << "\nIncorrect PIN! Exiting Program...\n";
    return false;
}

void ATM::helpScreen()
{
    cout << "\n========== HELP SCREEN ==========\n";
    cout << "PIN for login: 12345\n";
    cout << "You can perform:\n";
    cout << "1. Deposit Money\n";
    cout << "2. Withdraw Money\n";
    cout << "3. Check Balance\n";
    cout << "=================================\n";
}

void ATM::deposit()
{
    double amount;

    cout << "\nEnter Amount to Deposit: ";
    cin >> amount;

    balance += amount;

    cout << "\nDeposit Successful!";
    cout << "\nCurrent Balance: Rs. " << balance << endl;
}

void ATM::withdraw()
{
    double amount;

    cout << "\nEnter Amount to Withdraw: ";
    cin >> amount;

    if (amount > balance)
    {
        cout << "\nInsufficient Balance!";
        cout << "\nAvailable Balance: Rs. " << balance << endl;
    }
    else
    {
        balance -= amount;
        cout << "\nWithdrawal Successful!";
        cout << "\nRemaining Balance: Rs. " << balance << endl;
    }
}

void ATM::checkBalance()
{
    cout << "\nCurrent Balance: Rs. " << balance << endl;
}

void ATM::menu()
{
    int choice;

    do
    {
        cout << "\n========== ATM MENU ==========\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            deposit();
            break;

        case 2:
            withdraw();
            break;

        case 3:
            checkBalance();
            break;

        case 4:
            cout << "\nThank You For Using ATM.\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);
}

int main()
{
    ATM obj;
    int choice;

    obj.showWelcome();

    cout << "\nEnter Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        if (obj.login())
        {
            obj.menu();
        }
        break;

    case 2:
        obj.helpScreen();
        break;

    case 3:
        cout << "\nProgram Closed.\n";
        break;

    default:
        cout << "\nInvalid Choice!\n";
    }

    return 0;
}