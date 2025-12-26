#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   // Hidden data (Good practise)

public:
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(1000);

    account.deposit(500);
    account.withdraw(300);

    // account.balance = -500;  // Not allowed , produce Compile-time error

    cout << "Balance: " << account.getBalance() << endl;
    return 0;
}
/*
Why this is correct

1. Internal data is private
2. Access is controlled through methods
3. Validation logic is centralized
4. Object state remains valid
*/