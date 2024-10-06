// 17. Nested structure implementation of area of particular room 

#include <iostream>
using namespace std;

struct distance
{
    int meter;
    float centimeter;
};

struct room
{
    struct distance length;
    struct distance width; 
};

void AreaOfRoom( struct distance length, struct distance width){
    float newLength = length.meter + (length.centimeter/100);
    cout<<"new lenght "<<newLength<<endl;
    float newWidth = width.meter + (width.centimeter/100);
    // cout<< "new width "<<newWidth<<endl;
    float area = newLength * newWidth;
    cout<<"Area is "<<area<<" meter\n";
}

int main(int argc, char const *argv[])
{
    struct room dinningRoom;
    cout<<"Enter the length of room in meter and centimeter:- ";
    cin>>dinningRoom.length.meter>> dinningRoom.length.centimeter;
    cout<<"Enter the width of room in meter and centimeter:- ";
    cin>>dinningRoom.width.meter>> dinningRoom.width.centimeter;

    AreaOfRoom(dinningRoom.length, dinningRoom.width);

    return 0;
}
