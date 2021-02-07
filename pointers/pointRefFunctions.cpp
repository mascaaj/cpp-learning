// understanding data storage

#include <iostream>
#include <string>
using namespace std;

void add(int& a, int* b)
{cout << "Total " << (a + *b) << endl;};

int main()
{
    int num =100,sum=500;
    int& ref = num;
    int* ptr = &num;
    void(* fn) (int& a, int* b) = add;
    cout << "Reference  : " << ref << endl;
    cout << "Pointer    : " << *ptr << endl;
    cout << "Pointer Add: " << ptr << endl;    
    fn(ref,ptr);
    ptr = &sum;
    cout << "Reference  : " << ref << endl;
    cout << "Pointer    : " << *ptr << endl;
    cout << "Pointer Add: " << ptr << endl;    
    fn(ref,ptr);
    ptr = &num;
    cout << "Reference  : " << ref << endl;
    cout << "Pointer    : " << *ptr << endl;
    cout << "Pointer Add: " << ptr << endl;    
    fn(ref,ptr);

}


