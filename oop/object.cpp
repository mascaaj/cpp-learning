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
    void setAge(int yrs) {age = yrs;}
    void setWeight(int lbs) {weight=lbs;}
    void setColor(string col) {color = col;}
    int getAge() {return age;}
    int getWeight() {return weight;}
    string getColor() {return color;}
};

int main()
{
    Dog fido;
    fido.setAge(3);
    fido.setWeight(15);
    fido.setColor("Blue");

    cout << "Fido's age is "<< fido.getAge() <<endl;
    cout << "Fido's weight is "<< fido.getWeight() <<endl;
    cout << "Fido's color is "<< fido.getColor() <<endl;
    fido.bark();


}
