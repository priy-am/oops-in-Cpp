// Wap to prefix (unary operator) decrement object using operator overloading.
#include <iostream>
using namespace std;

class Counter
{
private:
    int value;
public:
    Counter(int val=0):value(val){}
    void display(){
        cout<<"Counter Value "<<value<<endl;
    }
    Counter &operator--(){
        --value;
        return *this;
    }
};

int main(int argc, char const *argv[])
{
    Counter c1(9);
    cout<<"Before decrement ";
    c1.display();
    --c1;
    cout<<"After decrement ";
    c1.display();
    return 0;
}
