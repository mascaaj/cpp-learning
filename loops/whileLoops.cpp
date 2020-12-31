// Basic while implemention in cpp.

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    vector <int> vec(10);
    while (i < vec.size())
    {
        i++;
        vec[i-1] = i;
        cout << "  |  " << vec.at(i-1);
    }
}