// Basic function arguments in cpp.

#include <iostream>
using namespace std;


float fToC(float degreesF=32.0);

int main()
{
    float faren, centigrade;
    cout << "Enter the desired Fahrenheit Temperature :\t";
    cin >> faren;
    centigrade = fToC(faren);
    cout << "Converted temperature in Centigrade :  " << centigrade << endl;
}

float fToC(float degreesF)
{
    float degreesC = (5.0/9.0) *(degreesF -32.0);
    return degreesC;
}