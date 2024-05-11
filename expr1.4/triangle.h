#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "myPoint.h"
#include <cmath>

class triangle
{
public:
    triangle(myPoint a, myPoint b, myPoint c): p1(a), p2(b), p3(c) {};
    void getArea();
    void getPerimeter();
    ~triangle(){};

private:
    myPoint p1, p2, p3;
};

#endif