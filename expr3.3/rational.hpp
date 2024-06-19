#ifndef RATIONAL_HPP
#define RATIONAL_HPP

#include <iostream>

// Helper function to calculate gcd
int gcd(int a, int b);

class Rational {
private:
    int nr;  // 分子 numerator
    int dm;  // 分母 denominator
    void simplify();
public:
    Rational(int n = 0, int d = 1);

    Rational operator+(const Rational& other) const;

    friend std::ostream& operator<<(std::ostream& out, const Rational& r);
};

#endif // RATIONAL_HPP
