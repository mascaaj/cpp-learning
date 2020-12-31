// comparison operations in cpp

#include <iostream>
using namespace std;

int main()
{
    // Equality comparisons
    int nil = 0, num = 0, max = 1, a = 5, b = 10;
    char cap = 'A', low = 'a';

    cout << "Equality Comparisons   : "<< endl;
    cout << "A == a     : " << (cap == low) << "  (false)" << endl;

    cout << "Equality Comparisons   : "<< endl;
    cout << "0 == 0     : " << (nil == num) << "  (true)" << endl;

    cout << "Inequality Comparisons : "<< endl;
    cout << "0 != 1     : " << (nil != max) << "  (true)" << endl;

    cout << "Comparisons            : "<< endl;
    cout << "0 <= 1     : " << (nil <= max) << "  (true)" << endl;

    cout << "0 >= 1     : " << (nil >= max) << "  (false)" << endl;

    cout << "0 > 1      : " << (nil > max) << "  (false)" << endl;

}