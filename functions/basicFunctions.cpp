// Basic function implemention in cpp.

#include <iostream>
using namespace std;

float bodyTempC(), bodyTempF();

int main()
{
    cout << "Centigrade :  " << bodyTempC() << endl;
    cout << "Farenheit :  " << bodyTempF() << endl;
}

float bodyTempC()
{
    float temperature = 37.0;
    return temperature;
}

float bodyTempF()
{
    float temperature = 98.6;
    return temperature;
}