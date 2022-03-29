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

int main(){
    Child son;
    Grandchild grandson;
    Parent* ptrChild = &son;
    Parent* ptrGrandChild = &grandson;

    ptrChild -> Common();
    ptrChild -> Identify();
    ptrChild -> Parent::Identify();
    ptrGrandChild -> Common();
    ptrGrandChild -> Identify();
    grandson.Relate();
    ptrGrandChild -> Parent::Identify();
    grandson.Child::Identify();
}
