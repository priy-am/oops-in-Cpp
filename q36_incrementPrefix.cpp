// Wap to prefix (unary operator)increment object using operator overloading. 
#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int val = 0) : value(val) {}

    Counter& operator++() {
        ++value; 
        return *this; 
    }

    void display() const {
        cout << "Counter value: " << value << endl;
    }
};

int main(int argc, char const *argv[])
{
    
    Counter c1(5); 

    cout << "Before increment: ";
    c1.display();

    ++c1; 

    cout << "After increment: ";
    c1.display();

    return 0;
}
