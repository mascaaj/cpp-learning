#include <iostream>
using namespace std;

class Parent
{
    public:
        void Common() const
        {cout << "I am part of this family"<< endl;}

        virtual void Identify() const
        {cout << "I am the parent" << endl;}
};

class Child : public Parent 
{
    public:
        void Identify() const
        {cout << "I am the child" << endl;}
};

class Grandchild : public Child
{
    public:
        void Identify() const
        {cout << "I am the grandchild" << endl;}

        void Relate() const
        {cout << "Grandchild has parent and grandparent"<< endl;}
};

int main()
{
    Child son;
    Grandchild grandson;
    Parent* ptrChild = &son;            // ptrChild bound to parent class
    Parent* ptrGrandchild = &grandson;  // ptrGrandchild bound to parent class

    ptrChild -> Common();               // Inherited
    ptrChild -> Identify();             // Overriden
    ptrGrandchild -> Common();          // Inherited
    ptrGrandchild -> Identify();        // Overriden
    ptrChild -> Parent::Identify();     // Explict about which class implementation to use
    ptrChild -> Parent::Common();       // Explict about which class implementation to use
    grandson.Relate();                  // using instance of granchild class
}
