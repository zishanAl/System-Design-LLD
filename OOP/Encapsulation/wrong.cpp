#include <iostream>
using namespace std;

class BankAccount {
public:
    double balance;   // Public data (Bad Practise)
};

int main() {
    BankAccount account;
    account.balance = 1000;

    // Anyone can modify internal state freely (Bad Practise)
    account.balance = -500;

    cout << "Balance: " << account.balance << endl;
    return 0;
}
/*
What’s wrong here

1. balance is exposed
2. No validation or protection
3. Object can enter an invalid state
*/