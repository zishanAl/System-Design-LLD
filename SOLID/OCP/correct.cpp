#include <iostream>
using namespace std;

// Abstraction
class PaymentMethod {
public:
    virtual void pay() = 0;
    virtual ~PaymentMethod() {}
};

// Extension 1
class CardPayment : public PaymentMethod {
public:
    void pay() override {
        cout << "Processing card payment" << endl;
    }
};

// Extension 2
class UpiPayment : public PaymentMethod {
public:
    void pay() override {
        cout << "Processing UPI payment" << endl;
    }
};

// High-level class
class PaymentService {
public:
    void makePayment(PaymentMethod* paymentMethod) {
        paymentMethod->pay();
    }
};

int main() {
    PaymentService paymentService;

    CardPayment card;
    UpiPayment upi;

    paymentService.makePayment(&card);
    paymentService.makePayment(&upi);

    return 0;
}

/*
Why this is correct

1. PaymentService is closed for modification
2. New payment methods are added by:
    a. Creating a new class
    b. Implementing PaymentMethod
3. Existing code remains unchanged
*/