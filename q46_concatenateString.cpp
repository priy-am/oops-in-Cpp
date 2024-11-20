// Wap to concatenate string using operator overloading.
#include<iostream>
using namespace std;

class String
{
private:
    string str;
public:
    String(const string &s = ""):str(s){}
    void display(){
        cout << str << endl;
    }

    String operator+(const String &s)const{
        String temp;
        temp.str = str + s.str;
        return temp;
    }
};

int main(int argc, char const *argv[])
{
    String str1("Hello ");
    String str2("World!");

    String result = str1 + str2;

    cout << "First string: ";
    str1.display();

    cout << "Second string: ";
    str2.display();

    cout << "Concatenated string: ";
    result.display();
    return 0;
}
