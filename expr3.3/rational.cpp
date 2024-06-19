#include "rational.hpp"
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Rational::Rational(int n, int d) : nr(n), dm(d) {
    simplify();
}

void Rational::simplify() {
    int gcd_value = gcd(nr, dm);
    nr /= gcd_value;
    dm /= gcd_value;
}

Rational Rational::operator+(const Rational& other) const {
    int num = nr * other.dm + other.nr * dm;
    int denom = dm * other.dm;
    return Rational(num, denom);
}

ostream& operator<<(ostream& out, const Rational& r) {
    out << r.nr << "/" << r.dm;
    return out;
}
