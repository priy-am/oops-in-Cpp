// Write a  suitable program to use 'x' as a global variable, 'x' as static variable, 'x' as a variable in for scope and 'x' as variable in if else scope. 
#include <iostream>
using namespace std;
// Global variable
int x = 10;

void staticVariableExample() {
    // Static variable
    static int x = 20; 
    cout << "Static x: " << x << endl;
    x++;
}

int main() {
    cout << "Global x: " << x << endl;


    if (true) {
        int x = 30; 
        cout << "If-else x: " << x << endl;
    }

    for (int x = 0; x < 5; x++) { 
        cout << "For loop x: " << x << endl;
    }

    staticVariableExample();
    staticVariableExample();

    return 0;
}
