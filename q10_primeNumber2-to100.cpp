// 10. wap to print prime numbers between 2 to 100

#include<iostream>
using namespace std;

bool IsPrime(int number){
    if(number <=1) return false;
    for(int i = 2; i<number/2; i++){
        if(number % i == 0){
        return false;
        }
    }
    return true;
    
}

int main(int argc, char const *argv[])
{
    // bool isPrime = true;
    cout<<"Printing all the prime number between 2 to 100:-\n";
    for(int i = 2; i< 100;i++ ){
        if(IsPrime(i)){
        cout<< i<<"\t";
        }
    }
    return 0;
}
