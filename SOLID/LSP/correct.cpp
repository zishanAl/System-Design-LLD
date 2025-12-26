#include <iostream>
using namespace std;

// Base abstraction
class Bird {
public:
    virtual ~Bird() {}
};

// Separate capability
class FlyingBird {
public:
    virtual void fly() = 0;
    virtual ~FlyingBird() {}
};

class Sparrow : public Bird, public FlyingBird {
public:
    void fly() override {
        cout << "Sparrow is flying" << endl;
    }
};

class Penguin : public Bird {
    // No fly() method required.
};

void makeFlyingBirdFly(FlyingBird* bird) {
    bird->fly();
}

int main() {
    Sparrow sparrow;
    Penguin penguin;

    makeFlyingBirdFly(&sparrow);
    // makeFlyingBirdFly(&penguin);  // Compile-time safety

    return 0;
}
/*
Why this is correct

1. Behavior is modeled correctly
2. Only birds that can fly implement FlyingBird
3. Substitution does not break the system
4. Errors are caught at compile time, not runtime
*/