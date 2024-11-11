// Write a program to show inline function

#include <iostream>
using namespace std;

class calculator
{
public:
    int add(int a, int b){return a+b;};
    int multi(int a, int b){return a*b;};
};

int main(int argc, char const *argv[])
{
    calculator calc;
     cout << "Addition of 5 and 3: " << calc.add(5, 3) << endl;
    cout << "Multiplication of 5 and 3: " << calc.multi(5, 3) << endl;
    return 0;
}
