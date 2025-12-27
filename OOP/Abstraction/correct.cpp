#include <iostream>
using namespace std;

// Abstract class
class PaymentMethod {
public:
    virtual void pay(int amount) = 0;
    virtual ~PaymentMethod() {}
};

// Concrete implementation
class CreditCard : public PaymentMethod {
public:
    void pay(int amount) override {
        cout << "Paid " << amount << " using Credit Card" << endl;
    }
};

class UPI : public PaymentMethod {
public:
    void pay(int amount) override {
        cout << "Paid " << amount << " using UPI" << endl;
    }
};

int main() {
    PaymentMethod* p1 = new CreditCard();
    PaymentMethod* p2 = new UPI();
    

    p1->pay(100);
    p2->pay(200);

    delete p1;
    delete p2;
    return 0;
}