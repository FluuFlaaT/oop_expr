#include "Circle.hpp"
#include "Rectangle.hpp"

using namespace std;

int main()
{
    Circle circle(0, 0, 1);
    Rectangle rec(-1, 1, 2, 2);
    Point p1(-1, 0), p2(0, 0), p3(1000,0);
    Point p4(sqrt(0.5), sqrt(0.5));

    circle.position(p1);
    rec.position(p1);
    circle.position(p2);
    rec.position(p2);
    circle.position(p3);
    rec.position(p3);

    circle.position(p4);

    return 0;
}