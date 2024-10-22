// Nested structure implementation of area of house (sum of area of all rooms in the house).

#include <iostream>
using namespace std;

struct distance
{
    int meter;
    float centimeter;
};

struct Room
{
    struct distance length;
    struct distance width;
};

float AreaOfRoom(struct distance length, struct distance width){
    float newLength = length.meter +(length.centimeter/100);
    float newWidth = width.meter + (width.centimeter/100);
    float area = newLength * newWidth;
    return area;
}

float SumOfAreaOfRooms(float a, float b){
    return a+b;
}


int main(int argc, char const *argv[])
{
    struct Room dinningRoom;
    struct Room studyRoom;
    cout<<"Enter the length of dinning room in meter and centimeter:- ";
    cin>>dinningRoom.length.meter>> dinningRoom.length.centimeter;
    cout<<"Enter the width of dinning room in meter and centimeter:- ";
    cin>>dinningRoom.width.meter>> dinningRoom.width.centimeter;

    float a = AreaOfRoom(dinningRoom.length, dinningRoom.width); 
    cout<<"area of dinningRoom "<<a<<endl;
    
    cout<<"Enter the length of study room in meter and centimeter:- ";
    cin>>studyRoom.length.meter>> studyRoom.length.centimeter;
    cout<<"Enter the width of study room in meter and centimeter:- ";
    cin>>studyRoom.width.meter>> studyRoom.width.centimeter;
    float b = AreaOfRoom(studyRoom.length, studyRoom.width);   
    cout<<"area of studyRoom "<<b<<endl;

    float c = SumOfAreaOfRooms(a, b);
    int m = c;
    float cm= c-m;
    cout<<m<<"meter"<<cm<<"cm"<<endl;
    return 0;
}
