// Factorial using recursion

#include <iostream>
using namespace std;

int factorail(int number){
    if(number == 0 || number == 1){
        return 1;
    }else{
        return number *factorail(number-1);
    }

}

int main(int argc, char const *argv[])
{
    int numb;
    cout<<"Enter the number that you want the factorial:- ";
    cin>>numb;
    int answer = factorail(numb);
    cout<<answer<<endl;
    return 0;
}

