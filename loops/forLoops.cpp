// Basic for loop implemention in cpp.

#include <iostream>
using namespace std;

int main()
{
    int i,j;
    for (i=1; i<4; i++)
    {
        cout << "loop: Iteration :  " << i << endl;
        for (j=3; j>0; j--)
        {
            cout << "Inner loop: Iteration :  " << j << endl;
        }
    }
}
