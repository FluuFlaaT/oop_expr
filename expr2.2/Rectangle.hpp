#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <cmath>
using namespace std;

#ifndef POINT_H
#define POINT_H
#include "Point.hpp"
#endif

class Rectangle: public Point
{
public:
    Rectangle(double x, double y, double h, double l): Point(x, y), height(h), length(l){};
    void position(Point &pt)
    {
        bool inRange = false;
        if((pt.getx() > Point::getx() && pt.getx() - Point::getx() < height ) && (pt.gety() < Point::gety() && Point::gety() - pt.gety() < length))
        {
            cout << "The point is in the range of the rectangle. " << endl;
        }
        else if (((pt.getx() == Point::getx() || pt.getx() == Point::getx() + height) && pt.gety() <= Point::gety() && Point::gety() - pt.gety() <= length) 
                    || (pt.gety() == Point::gety() || pt.gety() == Point::gety() - length) && pt.getx() >= Point::getx() && pt.getx() - Point::getx() <= height)
        {
            cout << "The point is on the edge of the rectangle. " << endl;
        }
        else
        {
            cout << "The Point is out of the range of the rectangle. "<< endl;
        }
    }

private:
    double height, length;

};


#endif