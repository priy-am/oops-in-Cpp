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

void SumOfAreaOfRooms();


int main(int argc, char const *argv[])
{
    
    return 0;
}
