#include <iostream>

using namespace std;

float calculateSimpleInterest(float principal, float time, const float rate) {
    return (principal * time * rate) / 100;
}

int main() {
    float principal, time, rate;
    
    cout << "Enter the principal amount: ";
    cin >> principal;
    
    cout << "Enter the time (in years): ";
    cin >> time;
    
    cout << "Enter the rate of interest: ";
    cin >> rate;
    
    float simpleInterest = calculateSimpleInterest(principal, time, rate);
    
    cout << "The Simple Interest is: " << simpleInterest << endl;
    
    return 0;
}
