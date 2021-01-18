#include <iostream>
using namespace std;

// Here Bird class is a capability class. If called directly, error will be thrown
class Bird
{
    public:
        virtual int Talk() const {return -1;}

        virtual int Fly() const {return -1;}
};

class Pigeon : public Bird
{
    public:
        int Talk() const
        {cout << "Coo ! Coo !" << endl;}

        int Fly() const
        {cout <<"A pigeon flies away "<< endl;}
};

class Chicken : public Bird
{
    public:
        int Talk() const
        {cout << "Cluck ! Cluck !" << endl;}

        int Fly() const
        {cout <<"A Chicken cannot fly "<< endl;}
};

int main()
{
    Bird* pPigeon = new Pigeon;
    Bird* pChicken = new Chicken;

    pPigeon     -> Talk();
    pPigeon     -> Fly();
    pChicken    -> Talk();
    pChicken    -> Fly();
    pPigeon     -> Bird::Fly();
    pChicken    -> Bird::Talk();
    if (-1){cout << "Error ! Program Terminated" << endl;return 0;}

    pChicken    -> Talk();
    pChicken    -> Fly();  
}