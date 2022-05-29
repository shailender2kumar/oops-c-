#include <iostream>
using namespace std;

class SHAPE
{
    public:
    virtual int no_of_sides() = 0;
};

class Trapezoid : public SHAPE
{
public:
    int no_of_sides()
    {
        return 4;
    }
};

class Triangles : public SHAPE
{
public:
    int no_of_sides()
    {
        return 3;
    } 
};

class Hexagon : public SHAPE
{
public:
    int no_of_sides()
    {
        return 6;
    } 
};

int main()
{
    Triangles TRI;
    Trapezoid TRA;
    Hexagon HEX;

    cout<<"Number of sides of a triangle: "<<TRI.no_of_sides()<<endl;
    cout<<"Number of sides of a trapezoid: "<<TRA.no_of_sides()<<endl;
    cout<<"Number of sides of a hexagon: "<<HEX.no_of_sides()<<endl;

    return 0;
}
