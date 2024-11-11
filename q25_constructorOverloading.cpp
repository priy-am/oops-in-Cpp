//  Write a program to show constructor overloading 
#include <iostream>
using namespace std;

class Book
{
private:
    string author;
    string bookName;
    float price;
public:
    //constructors
    Book():author("author"),bookName("Unknow"),price(0.0){} // no-argument
    Book(string author):author(author),bookName("Unknown"),price(0.0){}
    Book(string author, string bookName):author(author),bookName(bookName),price(0.0){}
    Book(string author, string bookName, float price):author(author),bookName(bookName),price(price){}

    void display(){
        cout<<"Author "<<author<<" , Book Name :- "<<bookName<<", Price:- "<<price<<endl;
    }

};

int main(int argc, char const *argv[])
{
    Book book1;
    book1.display();
    Book book2("Robert Kiyosaki");
    book2.display();
    Book book3("john doe", "dsa");
    book3.display();
    Book book4("Robert Kiyosaki", "Rich dad, poor dad", 400.78);
    return 0;
}
