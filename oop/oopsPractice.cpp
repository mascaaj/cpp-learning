#define PI 3.14284584684
#include <iostream>
#include <math.h>

using namespace std;

class Shape
{
    public:
        virtual float diagonal() = 0;
        virtual float area() = 0;
};

class Square : public Shape
{
    private:
        float length;
    public:
        Square(float length) : length(length) { }
        ~Square();
        float diagonal(){return sqrt(2)*length ;}
        float area(){return length*length;}
};

class Rectangle : public Shape
{
    private:
        float length, width;
    public:
        Rectangle(float length, float width) : length(length), width(width) { }
        ~Rectangle();
        float diagonal(){return sqrt((length*width) + (width*width));}
        float area(){return (width*length);}
};

class Circle : public Shape
{
    private:
        float radius;
    public:
        Circle(float radius) : radius(radius){ }
        ~Circle();
        float diagonal(){return (radius * 2);}
        float area(){return (PI*radius*radius);}
};

int main(){
    Shape* pCircle = new Circle(5.0);
    cout << pCircle->area() << endl;
    


}