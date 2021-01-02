// Basic if loop implemention in cpp.

#include <iostream>
using namespace std;

int main()
{
    int num = 7;
    char letter = 'D';

    if (num<5)
    {
        cout << "number is less than 5" << endl;
        if (letter == 'A'){cout << "Letter is A" << endl;}
    }

    else
    {cout << "number is greater than 5" << endl;}

    if (num>5 && letter != 'A')
    {
        cout << "Holy Mackerel ! It must be the conjucnction !!" << endl;
    }
}