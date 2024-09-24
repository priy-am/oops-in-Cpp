// 1. Wap to implement a table for a given number making use of manipulators like setw() and escape characters.

#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    cout<<"Enter the number that you want to print the table:- ";
    cin>>number;
    for(int i =1; i<=10; i++){
    cout<<number<< setw(7)<<"*"<<setw(8) << i<<setw(8)<<"="<<setw(8)<<number*i<<endl ;
    }
    return 0;
}
