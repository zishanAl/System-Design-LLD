#include <iostream>
using namespace std;

// Abstraction
class Database {
public:
    virtual void connect() = 0;
    virtual ~Database() {}
};

// Low-level module
class MySQLDatabase : public Database {
public:
    void connect() override {
        cout << "Connecting to MySQL database" << endl;
    }
};

// Another low-level module
class MongoDatabase : public Database {
public:
    void connect() override {
        cout << "Connecting to MongoDB database" << endl;
    }
};

// High-level module
class Application {
private:
    Database* database;  // Improvement: Depends on abstraction

public:
    Application(Database* db) : database(db) {}

    void start() {
        database->connect();
    }
};

int main() {
    MySQLDatabase mysql;
    MongoDatabase mongo;

    Application app1(&mysql);
    app1.start();

    Application app2(&mongo);
    app2.start();

    return 0;
}

/*
Why this is correct

1. High-level code depends on abstraction
2. Low-level modules implement the abstraction
3. Easy to extend without modifying existing code
4. Enables dependency injection and testing
*/