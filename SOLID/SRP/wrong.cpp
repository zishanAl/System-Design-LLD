#include <iostream>
using namespace std;

class UserService {
public:
    void createUser() {
        cout << "Creating user" << endl;
    }

    void saveToDatabase() {
        cout << "Saving user to database" << endl;
    }

    void sendEmail() {
        cout << "Sending welcome email" << endl;
    }
};

int main() {
    UserService userService;
    userService.createUser();
    userService.saveToDatabase();
    userService.sendEmail();

    return 0;
}
/*
What’s wrong here (SRP violation)

1. UserService is responsible for:
    a. User creation
    b. Database persistence
    c. Email notification
2. This class has multiple reasons to change
3. Too many responsibilities in one place
*/