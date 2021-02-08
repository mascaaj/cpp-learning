#include <iostream>
using namespace std;

void writeOutput(int* num);
void tripleInput(int* num);

int main(){
    int a = 10;
    int* ptrA =  &a;

    int& refA = a;

    cout << ptrA << endl;
    cout << &a << endl;
    cout << *ptrA << endl;
    cout << a << endl;

    *ptrA  *= 2;
    cout << ptrA << endl;
    cout << &a << endl;
    cout << *ptrA << endl;
    cout << a << endl;
    cout << "delimiter" <<endl;

    tripleInput(ptrA);
    writeOutput(ptrA);

    cout << "delimiter" <<endl;

    cout << refA << endl;
    cout << &refA << endl;
    cout << &a << endl;
    cout << a << endl;

    refA *=2;
    cout << ptrA << endl;
    cout << &a << endl;
    cout << *ptrA << endl;
    cout << a << endl;


    char num[] = {'c','t','f','y','i','o','q','\0'};
    const char* pNum = num;
    cout << "delimiter" <<endl;
    cout << pNum << endl;
    cout << *pNum << endl;
    cout << &pNum << endl;
    pNum++;
    cout << pNum << endl;
    cout << *pNum << endl;
    cout << &pNum << endl;

    cout << "delimiter" <<endl;

    const char* text = "C++ is great";
    const char* word = "For me";
    const char* ap1[3] = {text,word,num};
    for (int i=0; i<3;i++ )
    {
    cout << ap1[i] << " ";
    }

    cout << "delimiter" <<endl;

}

void writeOutput(int* num)
{
    cout << *num << endl;
}

void tripleInput(int* num)
{
    *num *= 3;
}