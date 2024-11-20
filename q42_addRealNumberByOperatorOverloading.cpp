// Wap to implement binary operator on real numbers (addition)using operator overloading. 
#include<iostream>
using namespace std;

class RealNumber
{
private:
    double value;
public:
    RealNumber(double v = 0.0):value(v){}
    void display(){
        cout << value << endl;
    }
    RealNumber operator+(const RealNumber &n)const{
        RealNumber temp;
        temp.value = value + n.value;
        return temp;
    }
};

int main(int argc, char const *argv[])
{
    RealNumber n1(8.3);
    RealNumber n2(9.2);
    RealNumber result = n1 + n2;
    n1.display();
    n2.display();
    result.display();
    return 0;
}
