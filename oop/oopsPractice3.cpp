#include <iostream>
#include <string>

using namespace std;

class Polygon
{
    public:
        int width,height;
    public:
        // void setValues(int w, int h){width=w;height=h;}
        Polygon(int width, int height): width(width),height(height){}
        void printShape () {cout << "Shape is probably a polygon" << endl;} 
        void printShape (string shape) {cout << "Shape : "<< shape << endl;} // overloaded function within class
};

class Rectangle : public Polygon
{
    public:
    Rectangle(int width, int height) : Polygon (width , height) {} // overloaded constructor
    int area() {return (width* height);}
    void printShape (string shape, string parent) {cout << "Shape : "<< shape << "Parent : " << parent << endl;} //overriding function
};



class Triangle : public Polygon
{
    public:
    Triangle(int width, int height) : Polygon (width , height) {}
    int area() {return (0.5* width* height);}
};


int main() {
    Rectangle rect(5,8);
    Triangle tri(5,8);
    // rect.setValues(8,9);
    // tri.setValues(8,9);
    cout << tri.area() << endl;
    cout << rect.area() << endl;
    rect.printShape("rectangle","polygon");
    rect.Polygon::printShape();
    rect.Polygon::printShape("rectangle");
    


}