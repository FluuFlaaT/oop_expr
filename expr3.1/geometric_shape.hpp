using namespace std;

class Geometric_shape {
public:
    virtual void Show() const = 0;
    virtual double perimeter() const = 0;
    virtual double area() const = 0;
    virtual double volume() const = 0;
};