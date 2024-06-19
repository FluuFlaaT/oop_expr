#include <iostream>
#include "complex.hpp"
using namespace std;

int main() {
    Complex a(2, 5), b(7, 8), c;
    c = a + b;
    c.display();
    cout << endl;
    c = 4.1 + a;
    c.display();
    cout << endl;
    return 0;
}

