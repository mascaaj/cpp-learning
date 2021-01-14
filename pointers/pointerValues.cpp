// understanding data storage

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 8,b = 16;
    int* aPtr = &a;
    int* bPtr = &b;

    cout << "Addresses of variables : " << endl;
    cout << "a : " << &a << endl;
    cout << "b : " << &b << endl << endl;

    cout << "Addresses of pointers : " << endl;
    cout << "aPtr : " << &aPtr << endl;
    cout << "bPtr : " << &bPtr << endl << endl;

    cout << "Values in pointers : " << endl;
    cout << "aPtr : " << aPtr << endl;
    cout << "bPtr : " << bPtr << endl << endl;

    cout << "Values addresses the pointers point to : " << endl;
    cout << "aPtr points to a : " << *aPtr << endl;
    cout << "bPtr points to b : " << *bPtr << endl;
}