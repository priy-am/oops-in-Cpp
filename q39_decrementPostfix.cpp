// Wap to postfix(unary operator)decrement object using operator overloading.
#include<iostream>
using namespace std;
class Counter{
private:
    int value;
public:
    Counter(int val = 1):value(val){}
    void display(){
        cout<<"counter value "<<value<<endl;
    }
    Counter &operator --(int){
        value--;
        return *this;
    }
};

int main(int argc, char const *argv[])
{
    Counter c1(3);
    cout<<"Before decrement ";
    c1.display();
    c1--;
    cout<<"After decrement ";
    c1.display();
    return 0;
}
