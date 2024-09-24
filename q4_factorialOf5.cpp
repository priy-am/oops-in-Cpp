// Wap for finding factorial of 5. 
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int fact = 1;
    for(int i=1; i<=5;i++){
         fact *= i;
    }
        cout<<"factorial of 5 is "<<fact<<endl;
    return 0;
}
