// Wap using for loop to print the squares of even numbers up to 100.
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Printing square of even number\n";
    for(int i = 0; i<=100; i++){
        if(i%2 == 0){
            cout<<"square of "<<i <<" is "<<i*i<<endl;
        }
    }
    return 0;
}
