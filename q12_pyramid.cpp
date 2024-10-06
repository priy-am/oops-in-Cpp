// 12. wap to print pyramid pattern-
// ****1
// ***121
// **12321
// *1234321
// 123454321

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numb = 5; 
    for(int i = 1; i <= numb; i++){
        for(int j = numb; j > i; j--){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        for(int j = i - 1; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
