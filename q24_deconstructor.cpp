// Write a program to show destructor
#include <iostream>
using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        //constructor
        Person(string name, int age):name(name),age(age){
            cout<<"Constructor called for: "<<name<<endl;
        }
        void display(){
            cout<<"Name: "<<name<<" age :- "<<age<<endl;
        }
        //deconstructor
        ~Person(){
            cout<<"Deconstructor called for "<<name<<endl;
        }
};

int main(int argc, char const *argv[])
{
    Person Indian("Ankit", 19);
    Indian.display();
    Person American("Arshad", 20);
    American.display();
    return 0;
}
