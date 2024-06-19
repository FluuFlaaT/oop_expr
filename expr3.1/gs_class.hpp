#ifndef GEOMETRIC_SHAPE_HPP
#define GEOMETRIC_SHAPE_HPP
#include "geometric_shape.hpp"
#endif

class Circle : public Geometric_shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    void Show() const override {
        cout << "圆形";
    }
    double perimeter() const override {
        return 2 * M_PI * radius;
    }
    double area() const override {
        return M_PI * radius * radius;
    }
    double volume() const override {
        return 0;
    }
};

class Rectangle : public Geometric_shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void Show() const override {
        cout << "矩形";
    }
    double perimeter() const override {
        return 2 * (length + width);
    }
    double area() const override {
        return length * width;
    }
    double volume() const override {
        return 0;
    }
};

class Triangle : public Geometric_shape {
private:
    double a, b, c;
public:
    Triangle(double _a, double _b, double _c) : a(_a), b(_b), c(_c) {}
    void Show() const override {
        cout << "三角形";
    }
    double perimeter() const override {
        return a + b + c;
    }
    double area() const override {
        double s = perimeter() / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    double volume() const override {
        return 0;
    }
};

class Box : public Geometric_shape {
private:
    double length, width, height;
public:
    Box(double l, double w, double h) : length(l), width(w), height(h) {}
    void Show() const override {
        cout << "长方体";
    }
    double perimeter() const override {
        return 2 * (length + width);
    }
    double area() const override {
        return length * width;
    }
    double volume() const override {
        return length * width * height;
    }
};

class Cylinder : public Geometric_shape {
private:
    double radius, height;
public:
    Cylinder(double r, double h) : radius(r), height(h) {}
    void Show() const override {
        cout << "圆柱";
    }
    double perimeter() const override {
        return 2 * M_PI * radius;
    }
    double area() const override {
        return M_PI * radius * radius;
    }
    double volume() const override {
        return M_PI * radius * radius * height;
    }
};

class Cone : public Geometric_shape {
private:
    double radius, height;
public:
    Cone(double r, double h) : radius(r), height(h) {}
    void Show() const override {
        cout << "圆锥";
    }
    double perimeter() const override {
        return 2 * M_PI * radius;
    }
    double area() const override {
        return M_PI * radius * radius;
    }
    double volume() const override {
        return M_PI * radius * radius * height / 3;
    }
};

class T_pyramid : public Geometric_shape {
private:
    double a, b, c, height;
public:
    T_pyramid(double _a, double _b, double _c, double h) : a(_a), b(_b), c(_c), height(h) {}
    void Show() const override {
        cout << "三棱锥";
    }
    double perimeter() const override {
        return a + b + c;
    }
    double area() const override {
        double s = perimeter() / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    double volume() const override {
        return area() * height / 3;
    }
};

class T_prism : public Geometric_shape {
private:
    double a, b, c, height;
public:
    T_prism(double _a, double _b, double _c, double h) : a(_a), b(_b), c(_c), height(h) {}
    void Show() const override {
        cout << "三棱柱";
    }
    double perimeter() const override {
        return a + b + c;
    }
    double area() const override {
        double s = perimeter() / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    double volume() const override {
        return area() * height;
    }
};