#include <iostream>
using namespace std;

// Base abstraction
class Vehicle {
public:
    virtual void move() = 0;   // common behavior
    virtual ~Vehicle() {}
};


class Car : public Vehicle {
public:
    void move() override {
        cout << "Car is driving" << endl;
    }
};

class Bicycle : public Vehicle {
public:
    void move() override {
        cout << "Bicycle is pedaling" << endl;
    }
};

int main() {
    Vehicle* v1 = new Car();
    Vehicle* v2 = new Bicycle();

    v1->move();
    v2->move();

    delete v1;
    delete v2;
    return 0;
}