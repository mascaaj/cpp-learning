// casting data types operations in cpp.

#include <iostream>
using namespace std;

int main()
{
    // Equality comparisons
    int num = 7, factor = 2;
    char letter = 'A'; 
    float result = 0.0;
    float result2 = 0.0;

    cout << "Integer division" << (num/factor) <<endl;

    result = (float) 7/2;
    cout << "Cast division float" << result <<endl;
 
    result2 = static_cast <float> (7)/2;
    cout << "Cast division float" << result2 <<endl;
   
    num = static_cast <int> (letter);
    cout << "Cast character int " << num <<endl;

    letter = static_cast <char> (75);
    cout << "Cast int character " << letter <<endl;


}