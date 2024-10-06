// 2. Wap to determine if a given number or string is a palindrome.
#include <iostream>
#include <string>
#include <cctype> // For isalnum and tolower

using namespace std;

bool isPalindrome(const string& str) {

    string filteredStr;
    for (char c : str) {
        if (isalnum(c)) {
            filteredStr += tolower(c);
        }
    }

    string reversedStr;
    for (int i = filteredStr.length() - 1; i >= 0; --i) {
        reversedStr += filteredStr[i];
    }

    return filteredStr == reversedStr;
}

int main(int argc, char const *argv[])
{
    string input;
    
    cout<<"Enter the Sting aur number that you want to check that is palindrome or not:- ";
    cin>>input;
    if(isPalindrome(input)){
        cout<<input <<" is a palindrome\n";
    }else{
        cout<<input << " is not a palindrome\n";
    }
    
    return 0;
}
