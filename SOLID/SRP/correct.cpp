#include <iostream>
using namespace std;

// Responsible only for user-related business logic
class UserService {
public:
    void createUser() {
        cout << "Creating user" << endl;
    }
};

// Responsible only for database operations
class UserRepository {
public:
    void save() {
        cout << "Saving user to database" << endl;
    }
};

// Responsible only for sending emails
class EmailService {
public:
    void sendWelcomeEmail() {
        cout << "Sending welcome email" << endl;
    }
};

int main() {
    UserService userService;
    UserRepository userRepository;
    EmailService emailService;

    userService.createUser();
    userRepository.save();
    emailService.sendWelcomeEmail();

    return 0;
}

/*
Why this is correct:

1. Each class has one responsibility
2. Changes in email logic won’t affect user logic
3. Database changes won’t affect email logic
4. Code is easier to extend and test
*/