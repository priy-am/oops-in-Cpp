//  wap to print first n natural numbers
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    cout<<"Enter the number that upto want to print the natural number:- ";
    cin>>number;
    for(int i =1; i<= number; i++){
        cout<<i<<"\t";
    }
    return 0;
}
