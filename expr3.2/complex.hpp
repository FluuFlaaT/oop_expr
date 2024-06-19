#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0);
    
    Complex operator+(const Complex& other) const;
    
    friend Complex operator+(double lhs, const Complex& rhs);
    
    void display() const;
};

#endif // COMPLEX_HPP
;