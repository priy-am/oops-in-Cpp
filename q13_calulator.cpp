// 13. Calculator

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int choice; 
    cout<<"Enter the 1 . multiplication , 2. division, 3. addition, 4. subtract, 5. exit :-";
    cin>>choice;
    switch (choice)
    {
    case 1:
        {
            int a,b ;
            cout<<"Enter two number for multiplication:- ";
            cin>>a>>b;
            cout<<a<< " * " <<b <<" is "<<a*b<<endl;
        }
        break;
    case 2:
        {
            int a,b ;
            cout<<"Enter numerator and denominator :- ";
            cin>>a>>b;
            cout<<a<< " / " <<b <<" is "<<a/b<<endl;
        }
        break;
    case 3:
        {
            int a,b ;
            cout<<"Enter two number addition:- ";
            cin>>a>>b;
            cout<<a<< " + " <<b <<" is "<<a+b<<endl;
        }
        break;
    case 4:
        {
            int a,b ;
            cout<<"Enter two number for subtract:- ";
            cin>>a>>b;
            cout<<a<< " - " <<b <<" is "<<a-b<<endl;
        }
        break;
    case 5:
        {
            cout<<"Exiting the program ";
        }
        break;
    
    default:
        cout<<"Select the correct choice";
    }
    
    return 0;
}

