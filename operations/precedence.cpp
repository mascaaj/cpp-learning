// precedence operations in cpp.
// This will be revisited later to include pointers and references.

#include <iostream>
using namespace std;

int main()
{
    // Equality comparisons
    int num = 1 + 4 * 3;
    cout << "Default order" << num <<endl;
 
    int num2 = (1 + 4) * 3;
    cout << "Forced order" << num2 <<endl;
 
    int num3 = 7 - 4 + 2;
    cout << "Default direction" << num3 <<endl;
 
    int num4 = 7 - (4 + 2);
    cout << "Forced direction" << num4 <<endl;
}