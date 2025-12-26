#include <iostream>
#include <stdexcept>
using namespace std;

class Bird {
public:
    virtual void fly() {
        cout << "Bird is flying" << endl;
    }

    virtual ~Bird() {}
};

class Penguin : public Bird {
public:
    void fly() override {
        //Penguin cannot fly, but forced to implement fly()
        throw runtime_error("Penguin cannot fly");
    }
};

void makeBirdFly(Bird* bird) {
    bird->fly();
}

int main() {
    Bird sparrow;
    Penguin penguin;

    makeBirdFly(&sparrow);
    makeBirdFly(&penguin);  //Runtime failure

    return 0;
}
/*
What’s wrong here

1. Penguin is-a Bird, but cannot fulfill fly()
2. Replacing Bird with Penguin breaks behavior
3. LSP is violated
*/