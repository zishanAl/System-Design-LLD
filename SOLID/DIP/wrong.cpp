#include <iostream>
using namespace std;

class MySQLDatabase {
public:
    void connect() {
        cout << "Connecting to MySQL database" << endl;
    }
};

class Application {
private:
    MySQLDatabase database;  // Bad practise: Direct dependency on concrete class

public:
    void start() {
        database.connect();
    }
};

int main() {
    Application app;
    app.start();

    return 0;
}
/*
What’s wrong here

1. Application (high-level module) directly depends on MySQLDatabase
2. Switching to another database requires modifying Application
3. Tight coupling → DIP violation
*/