// Abstract data type (ADT).
// Cannot be instantiated, has to have derived methods.

#include <iostream>
using namespace std;

class Shape
{
    public:
    virtual float getArea()=0;
    virtual int getEdge()=0;
    virtual void Draw() = 0;
};

class Rectangle : public Shape
{
    private:
        int width, height;
    public:
        Rectangle(float width, float height) : width(width), height(height) { }
        float getArea() { return (width * height); }
        int getEdge() { return (2*width + 2*height);}
        void Draw() 
        {
            for (int i=0;i<height;i++)
            {
                for (int j=0;j<width;j++)
                {
                    cout << "x";
                }
                cout << endl;
            }
        }
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
        float getArea() { return (3.142 * radius * radius); }
        int getEdge() { return (2*3.142*radius);}
        void Draw() { }
        ~Circle();
};

Circle::~Circle()
{ 
    cout << "Circular object destroyed "<< endl;
}

// void printArea (const Shape& shape){
//     cout << "Area of shape is " << shape.getArea() << endl;
//     // pass in some reference to a shape class.
//     // not a pointer, so dot operator applies
// }

int main()
{
    Shape* pQuad = new Rectangle(3,9);
    Shape* pSquare = new Rectangle(4,4);
    Shape* pCircle = new Circle(5);

    pQuad -> Draw();
    pQuad -> getArea();
    pQuad -> getEdge();
    pSquare -> Draw();
    // if (-1){cout << "Error ! Program Terminated" << endl;return 0;}
}