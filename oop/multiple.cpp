// basic oop concepts in cpp
#include <iostream>
#include <string>

using namespace std;

class Dog
{
    int age,weight;
    string color;
    
    public:
    void bark() {cout << "WOOF!" << endl;}
    void setValues(int,int,string);
    int getAge() {return age;}
    int getWeight() {return weight;}
    string getColor() {return color;}
};

void Dog::setValues(int age,int weight,string color)
{
    this -> age = age;
    this -> weight = weight;
    this -> color = color;
}

int main()
{
    Dog fido,pooch;
    fido.setValues(3,15,"Blue");
    pooch.setValues(10,25,"Pink");

    cout << "Fido's age is "<< fido.getAge() <<endl;
    cout << "Fido's weight is "<< fido.getWeight() <<endl;
    cout << "Fido's color is "<< fido.getColor() <<endl;
    fido.bark();

    cout << "Pooch's age is "<< pooch.getAge() <<endl;
    cout << "Pooch's weight is "<< pooch.getWeight() <<endl;
    cout << "Pooch's color is "<< pooch.getColor() <<endl;
    pooch.bark();

}
