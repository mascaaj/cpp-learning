// understanding data storage

#include <iostream>
#include <string>
using namespace std;

void writeOutput(int*);
void computeTriple(int*);

int main()
{
    int num = 5;
    int* ptr = &num;
    cout << "Variable memory address :" << &num << endl;
    cout << "Pointer memory address :" << ptr << endl;
    writeOutput(ptr);
    computeTriple(ptr);
    writeOutput(ptr);
    cout << "Pointer memory address :" << ptr << endl;
    *ptr+=15;
    writeOutput(ptr);
    computeTriple(ptr);
    writeOutput(ptr);
    cout << "Pointer memory address :" << ptr << endl;

}

void writeOutput(int* num)
{
    cout << "Current Value" << *num << endl;
}

void computeTriple(int* num)
{
    *num *= 3;
}