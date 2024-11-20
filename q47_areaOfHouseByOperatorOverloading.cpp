// Wap to calculate the area of a house using operator overloading
#include <iostream>
using namespace std;

class House
{
private:
    double len, wid;
public:
    House(double l=0.0,double w=0.0):len(l),wid(w){}
    void display(){
        cout << "Length: " << len << " meters, Width: " << wid << " meters" << endl;
    }
    double operator*(){
        return len*wid;
    }
};

int main(int argc, char const *argv[])
{
    House house1(10.5, 20.3);  

    house1.display();

    double area = *house1; 
    cout << "Area of the house: " << area << " square meters" << endl;

    return 0;
}
