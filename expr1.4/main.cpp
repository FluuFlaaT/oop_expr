#include "triangle.h"
#include "myPoint.h"

using namespace std;

int main()
{
    myPoint p1(0,0), p2(2,0), p3(0,2);
    triangle tri(p1, p2, p3);

    tri.getArea();
    tri.getPerimeter();

    return 0;
}