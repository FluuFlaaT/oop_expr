#include "myPoint.h"
#include <iostream>
#include <cmath>

using namespace std;

double myPoint::GetLength(myPoint p)
{
   return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
}

void myPoint::Printit()
{
   cout << " (" << x << "," << y << ") ";
}
