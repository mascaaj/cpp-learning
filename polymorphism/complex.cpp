#include <iostream>
using namespace std;

class Boat
{
    protected:
        int length;
    public:
        int getLength(){ return length;}
        virtual void Model() = 0; // want downstream derived classes to implement this
};

class Sailboat : public Boat
{
    protected:
        int mast;
    public:
        int getMast() {return mast;}
        virtual void Boom() = 0;
};

class Powerboat : public Boat
{
    protected:
        int engine;
    public:
        int getEngine() {return engine;}
        virtual void maxSpeed() = 0;
};

class Cruiser : public Powerboat
{
    public :
        Cruiser() {length =20;engine = 120;}
        ~Cruiser();
        void Model() {cout << "Cruiser Classic"<< endl;}
        void maxSpeed() {cout << "Max Speed: 200 knots" << endl;}
};

class Laser : public Sailboat
{
    public:
        Laser() {mast = 19;length =35;} //Constructor
        ~Laser();
        void Model() {cout << "Laser Classic"<< endl;}
        void Boom() {cout << "Boom: 14 ft" << endl;}
};

int main()
{
    Laser* pLaser = new Laser;
    pLaser->Model();
    pLaser->Boom();
    cout << "Laser Length "<< pLaser ->Boat::getLength()<<endl;
    cout << "Laser Mast "<< pLaser ->Sailboat::getMast()<<endl;
    
    Cruiser* pCruiser = new Cruiser;
    pCruiser->Model();
    pCruiser->maxSpeed();
    cout << "Cruiser Length "<< pCruiser ->Powerboat::getLength()<<endl;
    cout << "Cruiser Max Speed "<< pCruiser ->Powerboat::getEngine()<<endl;
}