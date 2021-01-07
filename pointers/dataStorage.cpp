// understanding data storage

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num = 100;
    double sum = 0.0123456789;
    string text = "C++ Fun";

    cout << "integer variable stored at : " << &num << endl;
    cout << "double variable stored at : " << &sum << endl;
    cout << "string variable stored at : " << &text << endl;
}