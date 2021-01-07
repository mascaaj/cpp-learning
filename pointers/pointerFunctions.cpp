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

    writeOutput(ptr);
    computeTriple(ptr);
    writeOutput(ptr);
    *ptr+=15;
    writeOutput(ptr);
    computeTriple(ptr);
    writeOutput(ptr);
}

void writeOutput(int* num)
{
    cout << "Current Value" << *num << endl;
}

void computeTriple(int* num)
{
    *num *= 3;
}