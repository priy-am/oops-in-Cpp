// Write a program to pass objects as a function argument
#include <iostream>
using namespace std;

class User
{
public:
    string name;
    int age;
    string city;

    User(string n, int a, string c):name(n),age(a),city(c){}
};

void displayUserInfo(const User& user){
    cout << "Name: " << user.name << endl;
    cout << "Age: " << user.age << endl;
    cout << "City: " << user.city << endl;
}

int main(int argc, char const *argv[])
{
    User user("Priyam", 20, "Faridabad");

    // Pass the object to the function
    displayUserInfo(user);
    return 0;
}
