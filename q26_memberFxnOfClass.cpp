//  Write a program to define member function outside the class

#include <iostream>
using namespace std;

class User
{
public:
    string name;
    int age;

    User(string name, int age){}

    void displayInfo();
};

User::User(string n, int a ):name(n),age(a){}

void User::displayInfo(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main(int argc, char const *argv[])
{
    User user("priyam", 20);

    user.displayInfo();
    return 0;
}
