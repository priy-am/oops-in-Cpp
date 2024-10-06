// 16. Structure implementation of distance (feet and inches) 

#include <iostream>
using namespace std;

struct distance
{
    int feet;
    float inches;
};


int main(int argc, char const *argv[])
{
    struct distance height;
    cout<<"Enter the height in feet and inches:- ";
    cin>>height.feet>>height.inches;
    cout<<"Height is :- "<< height.feet<<" feet "<<height.inches<<" inches";
    return 0;
}
