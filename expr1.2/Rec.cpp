#include "Rec.h"
#include <iostream>

Rec::Rec(float a, float b)
{
    x = a;
    y = b;
    perimeter = (x + y) * 2;
    area = x * y;
}

void Rec::Print()
{
    std::cout << "The area of the rectangle is " << area << std::endl;
    std::cout << "The perimeter of the rectangle is " << perimeter << std::endl;
}