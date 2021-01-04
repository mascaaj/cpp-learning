// Basic switch implemention in cpp.

#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    char letter = 'C';
    switch(num)
    {
        // break statements here are not syntacticy needed.
        case 1 : cout << num << " : Monday"; break;
        case 2 : cout << num << " : Tuesday"; break;
        case 3 : cout << num << " : Wednesday"; break;
        case 4 : cout << num << " : Thursday"; break;
        case 5 : cout << num << " : Friday"; break;
        default : cout << num << " : Weekday"; break;
    }

}