#include "MyClass.h"

using namespace std;

int main()
{
    MyClass obj1, obj2(5,8);

    obj1.SetX(1);
    obj1.SetY(3);

    obj1.Print();
    obj2.Print();

    return 0;
}