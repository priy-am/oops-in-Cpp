// Wap using binary operator subtracting two time value in minute and hour.
#include <iostream>
using namespace std;

class Time
{
private:
    int hrs;
    int min;
public:
    Time(int h=0, int m =0):hrs(h),min(m){}
    void display(){
        cout << hrs << " hours " << min << " minutes" << endl;
    }
    Time operator-(const Time &t)const{
        Time temp;
        temp.hrs = hrs - t.hrs;
        temp.min = min - t.min;
        if(temp.min<0){
            temp.min += 60;
            temp.hrs--;
        }
        if (temp.hrs < 0) {
            temp.hrs = 0;
            temp.min = 0; 
        }
        return temp;
    }
};

int main(int argc, char const *argv[])
{
    Time t1(5, 30);
    Time t2(2, 45); 

    Time result = t1 - t2;

    cout << "First time: ";
    t1.display();

    cout << "Second time: ";
    t2.display();

    cout << "Result of subtraction: ";
    result.display();

    return 0;
}
