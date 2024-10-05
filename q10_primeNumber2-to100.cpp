// 10. wap to print prime numbers between 2 to 100

#include<iostream>
using namespace std;

int printPrime(int number){
    for(int i = 2; i<number/2; i++){
        if(number % i == 0){
        return i;
        }
       
    }
    
}

int main(int argc, char const *argv[])
{
    // bool isPrime = true;
    cout<<"Printing all the prime number between 2 to 100:-\n";
    for(int i = 2; i< 100;i++ ){
        int num = printPrime(i);
        cout<< num<<"\t";
    }
    return 0;
}
