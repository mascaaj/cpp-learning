#include <iostream>
using namespace std;

class Base
{
    public:
    void Identify(int adr) const
    {
        cout << "Base class called by 0x" << hex << adr << endl;
    }
};

class SubA : public Base { };
class SubB : public Base { };

int main()
{
    Base* ptrA = new SubA;
    cout << ptrA << endl;
    cout << &ptrA << endl;
    Base* ptrB = new SubB;
    cout << ptrB << endl;
    cout << &ptrB << endl;
    // here the need is to convert pointer ref to int. This is non standard
    ptrA -> Identify(((int) &ptrA)); 
    ptrB -> Identify(((int) &ptrB));

    // base class is called by derived classes SubA and SubB. This gets assigned to poinerA,B
    // When passed to identify, reference of ptrs are being passed. these point to SubA and SubB
}