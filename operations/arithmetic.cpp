// Arithmetic operations in cpp

#include <iostream>
using namespace std;

int main()
{
    // basic arithmetic
    int a = 5,b = 8;
    cout << "sum a,b        : " << (a + b) << endl;
    cout << "product a,b    : " << (a * b) << endl;
    cout << "diff a,b       : " << (a - b) << endl;
    cout << "division a,b   : " << (b / a) << endl;
    cout << "modulus a,b    : " << (b % a) << endl;

    // prefix and postfix
    cout << "postfix init   : " << a << endl;
    cout << "postfix a      : " << a++ << endl;
    cout << "postfix result : " << a << endl;
    cout << "prefix init    : " << b << endl;
    cout << "prefix b       : " << ++b << endl;
    cout << "prefix result  : " << b << endl;

    // value assignment
    cout << "value a                                    : " << a << endl;
    cout << "value b                                    : " << b << endl;
    cout << "add, then assign result to a (a += b)      : " << (a += b) << endl;
    cout << "value a                                    : " << a << endl;
    cout << "value b                                    : " << b << endl;
    cout << "subtract, then assign result to a (a -= b) : " << (a -= b) << endl;
    cout << "value a                                    : " << a << endl;
    cout << "value b                                    : " << b << endl;
    cout << "multiply, then assign result to a (a *= b) : " << (a *= b) << endl;
    cout << "value a                                    : " << a << endl;
    cout << "value b                                    : " << b << endl;
    cout << "divide, then assign result to a (a /= b)   : " << (a /= b) << endl;
    cout << "value a                                    : " << a << endl;
    cout << "value b                                    : " << b << endl;
    cout << "modulus, then assign result to a (b %= a)  : " << (b %= a) << endl;

}