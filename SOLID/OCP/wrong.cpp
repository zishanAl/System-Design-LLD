#include <iostream>
using namespace std;

class PaymentService {
public:
    void pay(string paymentType) {
        if (paymentType == "CARD") {
            cout << "Processing card payment" << endl;
        } 
        else if (paymentType == "UPI") {
            cout << "Processing UPI payment" << endl;
        }
        // Every new payment method requires modifying this class
    }
};

int main() {
    PaymentService paymentService;
    paymentService.pay("CARD");
    paymentService.pay("UPI");

    return 0;
}
/*
What’s wrong here

1. PaymentService must be modified for every new payment type
2. Adding NETBANKING, WALLET, etc. breaks OCP
3. High chance of regression bugs
*/