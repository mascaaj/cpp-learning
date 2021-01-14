// Inheritance concepts in cpp
#include <iostream>
using namespace std;

// Base class definition
class Polygon
{
    protected:
        int height, width;
    public:
        void setValues(int w,int h) {width = w;height = h;};
};

// inherited class definitions, rectangle
class Rectangle : public Polygon
{
    public:
        int area(){return(width * height);}
};

class Triangle : public Polygon
{
    public:
        int area() {return(0.5*width*height);}
};

int main()
{
    Rectangle rect;
    Triangle tri;
    tri.setValues(4,2);
    rect.setValues(4,2);
    cout << tri.area() << endl;
    cout << rect.area() << endl;

}