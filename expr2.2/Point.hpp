#include <iostream>

using namespace std;

class Point
{
public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(double xv, double yv)
    {
        x = xv;
        y = yv;
    }
    Point(Point &pt)
    {
        x = pt.x;
        y = pt.y;
    }
    double getx() { return x; }
    double gety() { return y; }
    double Area() { return 0; }
    void Show() { cout << "x=" << x << ' ' << "y=" << y << endl; }

private:
    double x, y;
};
