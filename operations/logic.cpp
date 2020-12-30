// comparison operations in cpp

#include <iostream>
using namespace std;

int main()
{
    // Equality comparisons
    int a = 1, b = 0;
    char cap = 'A', low = 'a';

    cout << "AND logic  : "<< endl;
    cout << "a && a     : " << (a && a) << "  (1)" << endl;
    cout << "a && b     : " << (a && b) << "  (0)" << endl;
    cout << "b && b     : " << (b && b) << "  (0)" << endl;

    cout << "OR logic   : "<< endl;
    cout << "a || a     : " << (a || a) << "  (1)" << endl;
    cout << "a || b     : " << (a || b) << "  (1)" << endl;
    cout << "b || b     : " << (b || b) << "  (0)" << endl;

    cout << "NOT logic  : "<< endl;
    cout << "a =        : " << (a) << "  (1)" << endl;
    cout << "!a =       : " << (!a) << "  (0)" << endl;
    cout << "b=         : " << (b) << "  (0)" << endl;
    cout << "!b=        : " << (!b) << "  (1)" << endl;


}