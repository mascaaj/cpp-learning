#include <iostream>
using namespace std;

class Bird
{
    public:
        virtual void Talk() const
        {cout << "A bird talks .... " << endl;}

        virtual void Fly() const
        {cout << "A bird flies .... " << endl;}
};

class Pigeon : public Bird
{
    public:
        void Talk() const
        {cout << "Coo ! Coo !" << endl;}

        void Fly() const
        {cout <<"A pigeon flies away "<< endl;}
};

class Chicken : public Bird
{
    public:
        void Talk() const
        {cout << "Cluck ! Cluck !" << endl;}

        void Fly() const
        {cout <<"A Chicken cannot fly "<< endl;}
};

int main()
{
    Bird* pPigeon = new Pigeon;
    Bird* pChicken = new Chicken;
    Chicken chicken = Chicken();

    pPigeon     -> Talk();
    pPigeon     -> Fly();
    pChicken    -> Talk();
    pChicken    -> Fly();
    pPigeon     -> Bird::Fly();
    pChicken    -> Bird::Fly();
    chicken.Fly();
    
}