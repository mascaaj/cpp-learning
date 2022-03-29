// Inheritance concepts in cpp
#include <iostream>
using namespace std;

// Base class definition
class Man
{
    public:
    void speak() {cout << "Hello ! "<<endl;}
    
    void speak (string msg) {cout <<"  "<< msg << endl;}
};

// inherited class definitions, rectangle
class Hombre : public Man
{
    public:
    void speak(string msg) {cout << msg << endl;}
};

int main()
{
    Man Jason;
    Hombre Luis;
    Jason.speak();
    Jason.speak("What a nice day ?");

    Luis.speak("hola !!");                      // uses the overridden method with no spaces
    Luis.Man::speak("Es una tarde hermosa");    // uses the base class method with space
}