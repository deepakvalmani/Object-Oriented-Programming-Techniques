#include <iostream>
using namespace std;

/**
 * Class: BankAccount
 * Purpose: Encapsulates financial balance and transaction rules.
 */
class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int acc, double b) : name(n), accountNumber(acc), balance(b) {}

    // Only allows adding positive amounts
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful." << endl;
        }
    }

    // Validates if the user has enough money before removing it
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        } else {
            cout << "Transaction Failed: Insufficient funds." << endl;
        }
    }

    void display() {
        cout << "User: " << name << " | Account: " << accountNumber 
             << " | Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAcc("John Smith", 887766, 2500.0);
    myAcc.withdraw(3000.0); // Should fail
    myAcc.display();
    return 0;
}