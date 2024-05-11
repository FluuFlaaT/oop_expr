#include "triangle.h"

using namespace std;

void triangle::getArea()
{
    double area;
    area = 0.5 * ((p1.GetX() * (p2.GetY() - p3.GetY())) + (p2.GetX() * (p3.GetY() - p1.GetY())) + (p3.GetX() * (p1.GetY() - p2.GetY())));
    area = abs(area);
    cout << "The area of the triangle is " << area << endl;
}

void triangle::getPerimeter()
{
    double perimeter = 0;
    perimeter += sqrt(abs( pow((p1.GetX() - p2.GetX()) , 2) + pow((p1.GetY() - p2.GetY()), 2)));
    perimeter += sqrt(abs( pow((p2.GetX() - p3.GetX()) , 2) + pow((p2.GetY() - p3.GetY()), 2)));
    perimeter += sqrt(abs( pow((p1.GetX() - p3.GetX()) , 2) + pow((p1.GetY() - p3.GetY()), 2)));
    cout << "The perimeter of the triangle is " << perimeter << endl;
}