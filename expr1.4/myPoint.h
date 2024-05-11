#ifndef MYPOINT_H
#define MYPOINT_H

#include <cmath>
#include <iostream>

class myPoint
{
public:
    myPoint(double x0 = 0.0, double y0 = 0.0) : x(x0), y(y0) {}
    myPoint(myPoint &np) : x(np.x), y(np.y) {}
    double GetX() { return x; }
    double GetY() { return y; }
    void SetX(double x0) { x = x0; }
    void SetY(double y0) { y = y0; }
    void SetPoint(double x0, double y0)
    {
        x = x0;
        y = y0;
    }
    void SetPoint(myPoint &np)
    {
        x = np.x;
        y = np.y;
    }
    double GetLength(myPoint p);
    void Printit();

private:
    double x, y;
};

#endif // MYPOINT_H