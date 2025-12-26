#include <iostream>
using namespace std;

// Small, focused interfaces
class Workable {
public:
    virtual void work() = 0;
    virtual ~Workable() {}
};

class Eatable {
public:
    virtual void eat() = 0;
    virtual ~Eatable() {}
};

class HumanWorker : public Workable, public Eatable {
public:
    void work() override {
        cout << "Human is working" << endl;
    }

    void eat() override {
        cout << "Human is eating" << endl;
    }
};

class RobotWorker : public Workable {
public:
    void work() override {
        cout << "Robot is working" << endl;
    }
    // Robot is not forced to implement eat
};

int main() {
    HumanWorker human;
    RobotWorker robot;

    human.work();
    human.eat();

    robot.work();
    // robot.eat();  // Compile-time safety
    return 0;
}

/*
Why this is correct

1. Interfaces are small and focused
2. Classes implement only what they need
3. Invalid behavior is blocked at compile time
4. Design is flexible and extensible
*/