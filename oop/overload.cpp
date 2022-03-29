// basic oop concepts in cpp
#include <iostream>
#include <string>

using namespace std;

class Dog
{
    int age,weight;
    string color;
    
    public:
    void bark(string noise) {cout << noise << endl;}
    
    Dog();
    Dog (int,int);
    int getAge() {return age;}
    int getWeight() {return weight;}
    string getColor() {return color;}
    ~Dog();
};


Dog::Dog ()
{   age = 4;
    weight = 55;
    color = "Purple";
}

Dog::Dog (int age,int weight)
{
    this -> age = age;
    this -> weight = weight;
    color = "White";
}

Dog::~Dog()
{
    cout << "object destroyed"<< endl;
}

int main()
{
    Dog fido(3,15);
    Dog pooch;

    cout << "Fido's age is "<< fido.getAge() <<endl;
    cout << "Fido's weight is "<< fido.getWeight() <<endl;
    cout << "Fido's color is "<< fido.getColor() <<endl;
    fido.bark("ARF");

    cout << "Pooch's age is "<< pooch.getAge() <<endl;
    cout << "Pooch's weight is "<< pooch.getWeight() <<endl;
    cout << "Pooch's color is "<< pooch.getColor() <<endl;
    pooch.bark("WHINE");

}
