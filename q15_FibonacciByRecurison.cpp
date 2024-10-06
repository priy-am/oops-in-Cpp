// Fibonacci using recursion 

#include <iostream>
using namespace std;

int fibonacci(int num){
    if(num == 1){
        return 0;
    }
    if(num == 2 || num == 3){
        return 1;
    }

    return fibonacci(num-1) + fibonacci(num-2);
}

int main(int argc, char const *argv[])
{
    int numb;
    cout<<"Enter the number upto you want the series:- ";
    cin>>numb;
    int answer = fibonacci(numb);
    cout<<endl;
    return 0;
}
