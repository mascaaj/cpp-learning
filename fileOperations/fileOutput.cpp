// Modifying input and outputs
// pipe the output value to cout

#include <iostream>
using namespace std;

int main()
{
    bool isTrue =1;
    int num = 255;

    cout.width(50);
    cout.fill('.');
    cout << "output" << endl;

    cout << isTrue << " : " << boolalpha << isTrue << endl;
    cout << num << " : " << hex << showbase << uppercase << num << endl;
}