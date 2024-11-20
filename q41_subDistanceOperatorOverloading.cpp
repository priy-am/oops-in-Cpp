// Wap to implement binary operator on distance by subtracting 2 distances using operator overloading.
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    int inches;
public:
    Distance(int f=0, int i =0):feet(f),inches(i){}
    void display(){
        cout << feet << " feet " << inches << " inches" << endl;
    }
    Distance operator-(const Distance &d)const{
        Distance temp;
        temp.feet = feet - d.feet;
        temp.inches = inches - d.inches;
        if(temp.inches <0){
            temp.feet -= 1;
            temp.inches += 12;
        }
        return temp;
    }
};

int main(int argc, char const *argv[])
{
    Distance d1(5, 8); 
    Distance d2(3, 9); 

    Distance d3 = d1 - d2;

    d1.display();
    d2.display();
    d3.display();
    return 0;
}
