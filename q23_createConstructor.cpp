// write a program to create a  constructor ( no argument , multiple argument and copy)

#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    // constructor -- no argument
    Person(){
        name = "unkown";
        age = 0;
    }
    //constructor multi-argument 
    Person(string name, int age):name(name),age(age){}

    //constructor with copy 
    Person( const Person &p){
        name = p.name;
        age = p.age;
    }
    //display funtion 
    void display(){
        cout<<"Name: "<<name<<", age:- "<<age<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Person man;
    man.display();
    Person Women("Priyam", 20);
    Women.display();
    Person girl = Women;
    girl.display();
    return 0;
}
