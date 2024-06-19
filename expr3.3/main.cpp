#include <iostream>
#include "rational.hpp"
using namespace std;

int main() {
    Rational x(1, 3), y(1, 6), z;
    z = x + y;
    cout << x << " + " << y << " = " << z << endl;
    return 0;
}

