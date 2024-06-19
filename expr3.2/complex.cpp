#include <iostream>
#include "complex.hpp"
using namespace std;

Complex::Complex(double r, double i) : real(r), imag(i) {}

Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

Complex operator+(double lhs, const Complex& rhs) {
    return Complex(lhs + rhs.real, rhs.imag);
}

void Complex::display() const {
    cout << "(" << real << ", " << imag << ")";
}
