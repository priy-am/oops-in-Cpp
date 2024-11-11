// Write a program to returning   object from function. 
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int len;
    int wid;
public:
    Rectangle(int l= 0, int w = 0):len(l), wid(w){}

    void setDimension(int l, int w){
        len= l;
        wid = w;
    }
    int area()const{
        return len*wid;
    }

    void display(){
        cout << "Length: " << len << ", Width: " << wid << endl;
    }
    Rectangle increseByFive(){
        return Rectangle(len+5, wid+5);
    }
};

int main(int argc, char const *argv[])
{
    Rectangle rect(10, 5);    
    cout << "Original Rectangle dimensions: ";
    rect.display();
    
    cout << "Area of Original Rectangle: " << rect.area() << endl;

    Rectangle largerRect = rect.increseByFive();

    cout << "\nLarger Rectangle dimensions: ";
    largerRect.display();
    
    cout << "Area of Larger Rectangle: " << largerRect.area() << endl;
    return 0;
}
