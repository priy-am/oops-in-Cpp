//  wap to find given number is prime or not
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    bool isPrime = true;
    cout<<"Enter the number that you want to check:- ";
    cin>>number;
    if(number== 0 || number == 1){
        isPrime == false;
    }
    
    for(int i = 2; i< number/2; i++){
        if(number % i == 0){
            isPrime= false;
        }
    }

    if(isPrime){
        cout<<number<<" is a prime number\n";
    }else{
        cout<<number<<" is not a prime number\n";
    }

    return 0;
}
