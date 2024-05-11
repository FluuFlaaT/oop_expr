#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <cmath>

#ifndef POINT_H
#define POINT_H
#include "Point.hpp"
#endif

class Circle: public Point
{
public:
    Circle(double x, double y, double r): Point(x, y), range(r){};
    void position(Point &pt)
    {
        double dis;
        dis = sqrt(pow((pt.getx() - Point::getx()), 2) + pow((pt.gety() - Point::gety()), 2));
        if(dis < range)
        {
            cout << "The point is in the range of the circle." << endl;
        }
        else if (dis == range)
        {
            cout << "The point is on the edge of the circle." << endl;
        }
        else
        {
            cout << "The point is out of the range of the circle. " << endl;
        }
    }

private:
    double range;
};

#endif