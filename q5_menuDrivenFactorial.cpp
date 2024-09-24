// 5. Wap for menu driven program to find factorial of a given number less than 10 by making use of for loop and other control statements if needed. The user should be prompted to enter another number if the number entered by him/her is out of the range asked.
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int fact = 1;
    int number;
    int choise;
    do
    {
        cout<<"Enter the number between 1 to 10:- ";
        cin>>number;
        if(number < 1 || number > 10){
            cout<<"Number should be lie between 1 to 10\n";
        }else{
            for(int i=1; i<=number;i++){
                fact *= i;
            }
            cout<<"Factorial of "<<number<<" is "<<fact<<endl;
        }

        cout<<"Do you want to try again\n Enter 1 to continue:- ";
        cin>>choise;

    } while (choise == 1);
    
    return 0;
}
