// Inheritance concepts in cpp
#include <iostream>
using namespace std;

// Base class definition
class Parent
{
    public:
        Parent ()
        {cout << "Default constructor called : "<<endl;}
    
        Parent (int a)
        {cout <<" Overloaded constructor called : "<< endl;}
};

// inherited class definitions, rectangle
class Daughter : public Parent
{
    public:
    Daughter ()
        {cout <<"Derived Daughter class constructor called : "<< endl;}

        
};

class Son : public Parent
{
    public:
    Son (int a) : Parent (a)
        {cout <<"Derived Son class overloaded constructor called : "<< endl;}
};

int main()
{
    Daughter Soma;
    Son Jacob(0);
}