// basic oop concepts in cpp
#include <iostream>
#include <string>

using namespace std;

class Dog           //define the name if the class
{
    int age,weight; // define private members of class
    string color;
    
    public:         // define public members / methods
    void bark() {cout << "WOOF!" << endl;} // void because no return value
    Dog (int,int,string);                  // constructor for dog class
    int getAge() {return age;}             // function to access private members
    int getWeight() {return weight;}
    string getColor() {return color;}       
    ~Dog();                                // destructor for dog class
};

Dog::Dog (int age,int weight,string color)
{
    this -> age = age;                      // this used because the ns for constructor Dog is class Dog
    this -> weight = weight;
    this -> color = color;
}

Dog::~Dog()
{
    cout << "object destroyed"<< endl;
}

int main()
{
    Dog fido(3,15,"Blue");
    Dog pooch(10,25,"Pink");

    cout << "Fido's age is "<< fido.getAge() <<endl;
    cout << "Fido's weight is "<< fido.getWeight() <<endl;
    cout << "Fido's color is "<< fido.getColor() <<endl;
    fido.bark();

    cout << "Pooch's age is "<< pooch.getAge() <<endl;
    cout << "Pooch's weight is "<< pooch.getWeight() <<endl;
    cout << "Pooch's color is "<< pooch.getColor() <<endl;
    pooch.bark();

}
