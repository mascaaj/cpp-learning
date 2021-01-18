// polymorphism implies different behavious based on dynamic type

#include <iostream>
using namespace std;

class Shape
{
    public:
    virtual float getArea() const=0;
};

class Rectangle : public Shape
{
    private:
        int width, height;
    public:
        Rectangle(float width, float height) : width(width), height(height) { }
        virtual float getArea() const { return (width * height); }
        ~Rectangle();
};

Rectangle::~Rectangle()
{ 
    cout << "Rectangular object destroyed "<< endl;
}

class Circle : public Shape
{
    private:
        int radius;
    public:
        Circle(float radius) : radius(radius) { }
        virtual float getArea() const { return (3.142 * radius * radius); }
        ~Circle();
};

Circle::~Circle()
{ 
    cout << "Circular object destroyed "<< endl;
}

void printArea (const Shape& shape){
    cout << "Area of shape is " << shape.getArea() << endl;
    // pass in some reference to a shape class.
    // not a pointer, so dot operator applies
}

int main()
{
    Rectangle r(2,6);
    cout<<"rect_ref" << &r<<endl;
    // Shape& shape = r; // Shape& static type, r is dynamic type
    // this is only usable if dynamic type is subclass of static type

    Shape* shape = &r; // point to Shape, use reference to r
    cout<<"shape_val" << shape<<endl;
    cout<<"shape_ref" << &shape<<endl;

    // cout << "Area of rectangle is " << shape->getArea() << endl;
    Circle c(12);
    shape = &c;
    cout<<"circle_ref" << &c<<endl;
    cout<<"shape_val" << shape<<endl;
    cout<<"shape_ref" << &shape<<endl;
    // cout << "Area of circle is " << c.getArea() << endl;
    // cout << "Area of circle is " << shape->getArea() << endl;

    printArea(r); // reference of r
    printArea(c); // reference of c
    printArea(*shape); // dereferenced pointer == reference of c
}