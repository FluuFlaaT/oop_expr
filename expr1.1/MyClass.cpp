#include "MyClass.h"
#include <iostream>

MyClass::MyClass()
{
    x = 0;
    y = 0;
}

MyClass::MyClass(int a = 0, int b = 0)
{
    x = a;
    y = b;
}

void MyClass::Print()
{
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
}

void MyClass::SetX(int a)
{
    x = a;
}

void MyClass::SetY(int a)
{
    y = a;
}