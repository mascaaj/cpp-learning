// understanding data storage

#include <iostream>
#include <string>
using namespace std;

void writeOutput(int&);
void computeTriple(int&);

int main()
{
    int num = 5;
    int& ref = num;
    cout << "Variable memory address :" << &num << endl;
    cout << "Reference memory address :" << &ref << endl;
    writeOutput(ref);
    computeTriple(ref);
    writeOutput(ref);
    cout << "Reference memory address :" << &ref << endl;
    ref+=15;
    writeOutput(ref);
    computeTriple(ref);
    writeOutput(ref);
    cout << "Reference memory address :" << &ref << endl;

}

void writeOutput(int& num)
{
    cout << "Current Value" << num << endl;
}

void computeTriple(int& num)
{
    num *= 3;
}