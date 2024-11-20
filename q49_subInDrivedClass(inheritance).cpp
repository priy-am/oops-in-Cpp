// Wap to subtraction in derived class(inheritance)
#include <iostream>
using namespace std;

class Counter
{
protected:
    int val;
public:
    Counter(int v=0):val(v){}
    void display(){
        cout << "Counter value: " << val << endl;
    }
};

class ExtendedCounter:public Counter{
public:
    ExtendedCounter(int v=0):Counter(v){}
    ExtendedCounter operator-(const ExtendedCounter &n)const{
        ExtendedCounter temp;
        temp.val = val- n.val;
        return temp;
    }
};

int main(int argc, char const *argv[])
{
    ExtendedCounter ec1(20);  
    ExtendedCounter ec2(10);  

    cout << "First Counter: ";
    ec1.display();

    cout << "Second Counter: ";
    ec2.display();

    
    ExtendedCounter ec3 = ec1 - ec2;

    cout << "Result after subtraction: ";
    ec3.display();  
    return 0;
}
