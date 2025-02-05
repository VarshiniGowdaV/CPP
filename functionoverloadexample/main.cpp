#include <iostream>
#include <string>
using namespace std;

class UserProfile {
public:
    std::string name;
    std::string email;
    std::string dob;

    UserProfile(std::string name);
    UserProfile(std::string name, std::string email);
    UserProfile(std::string name, std::string email, std::string dob);
    ~UserProfile();
};

UserProfile::UserProfile(std::string name) : name(name)
{

}

UserProfile::UserProfile(std::string name, std::string email) : name(name), email(email)
{

}

UserProfile::UserProfile(std::string name, std::string email, std::string dob)
    : name(name), email(email), dob(dob)
{

}

UserProfile::~UserProfile()
{

}

int main() {
    UserProfile user1("Neha");
    UserProfile user2("Neha", "neha@gmail.com");
    UserProfile user3("Neha", "neha@gmail.com", "2000-05-15");

    cout << "User 1: " << user1.name << endl;
    cout << "User 2: " << user2.name << ", Email: " << user2.email << endl;
    cout << "User 3: " << user3.name << ", Email: " << user3.email << ", DOB: " << user3.dob << endl;

    return 0;
}
