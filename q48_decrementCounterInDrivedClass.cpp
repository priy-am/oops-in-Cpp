// Wap to decrement function in derived class(counter) 
#include <iostream>
using namespace std; 

class Counter
{
private:
    int val;
public:
    Counter(int v =0):val(v){}
    void display(){
        cout << "Counter value: " << val << endl;
    }
    Counter &operator--(){
        --val;
        return *this;
    }
};

class ExtendedCounter:public Counter{
public:
    ExtendedCounter(int v=0):Counter(v){}
    void decrement(){
        --(*this);
    }
};

int main(int argc, char const *argv[])
{
    ExtendedCounter ec(10);  

    cout << "Before decrement: ";
    ec.display();

    ec.decrement();  

    cout << "After decrement: ";
    ec.display();
    return 0;
}
