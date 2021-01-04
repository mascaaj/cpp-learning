// Basic function overloading in cpp.

#include <iostream>
using namespace std;

float computeArea(float), computeArea(float,float), computeArea(char,float,float);

int main()
{
    float diameter;
    cout << "enter the diameter of the circle :\t";
    cin >> diameter;
    cout << "Area of the circle :  " << computeArea(diameter) << endl;

    float height, width;
    cout << "enter the height of square / rectangle :\t";
    cin >> height;
    cout << "enter the width of the square / rectangle :\t";
    cin >> width;
    cout << "Area of the square / rectangle :  " << computeArea(height, width) << endl;

    float heightT, widthT;
    char shape;
    cout << "enter the alphabet of shape name :\t";
    cin >> shape;
    cout << "enter the height of shape :\t";
    cin >> heightT;
    cout << "enter the width of the shape :\t";
    cin >> widthT;
    cout << "Area of the shape :  " << computeArea(shape, heightT, widthT) << endl;

}

float computeArea(float diameter)
{
    float Area = (2 * 3.142 * (diameter/2));
    return Area;
}

float computeArea(float height, float width)
{
    float Area = height * width;
    return Area;
}

float computeArea(char letter, float height, float width)
{
    // Here the letter is a placeholder not used. But could be used to identify the shape
    float Area =  (0.5 * height * width);
    return Area;
}