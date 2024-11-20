// Wap to show constructor and destructor hierarchy in inheritance.
#include <iostream>
using namespace std;

class Base
{
public:
    Base(){
        cout << "Base class constructor called" << endl;
    }
    ~Base(){
        cout << "Base class destructor  called" << endl;
    }
};

class Derived :public Base{
public:
    Derived(){
        cout << "Derived class Constructor  called" << endl;
    }
    ~Derived(){
        cout << "Derived class destructor  called" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Derived d;
    return 0;
}
