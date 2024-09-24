#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number, nextTerm;
    cout<<"Enter the number upto want to fibonacci series:- ";
    cin>>number;
    int term1 = 0;
    int term2 = 1;
    cout<<"Fibonacci series\n";
        cout<<term1<<"\t";
        cout<<term2<<"\t";
    for(int i = 2; i<number;i++){
        nextTerm = term1 + term2;
        cout<< nextTerm<<"\t";
        term1 = term2;
        term2 = nextTerm;
    }
    return 0;
}
