#include <iostream>
using namespace std;

// Fat interface
class Worker {
public:
    virtual void work() = 0;
    virtual void eat() = 0;
    virtual ~Worker() {}
};

class HumanWorker : public Worker {
public:
    void work() override {
        cout << "Human is working" << endl;
    }

    void eat() override {
        cout << "Human is eating" << endl;
    }
};

class RobotWorker : public Worker {
public:
    void work() override {
        cout << "Robot is working" << endl;
    }

    void eat() override {
        // Robot does not eat
        cout << "Robot cannot eat" << endl;
    }
};

int main() {
    HumanWorker human;
    RobotWorker robot;

    human.work();
    human.eat();

    robot.work();
    robot.eat();   // Meaningless call

    return 0;
}
/*
What’s wrong here

1. Worker forces all implementers to support eat()
2. RobotWorker implements behavior it does not need
3. Interface is too broad → ISP violation
*/