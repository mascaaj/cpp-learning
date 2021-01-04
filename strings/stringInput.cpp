// Place holder for file for string manipulation module.

#include <string>
#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Please enter full name" << endl;
    cin >> name;
    cout << "Thanks " << name << endl;
    
    // this ignores the residual content in the input buffer.
    cin.ignore(256,'\n');
    cout << "Please re-enter full name" << endl;
    getline(cin, name);
    cout << "Thanks " << name << endl;
}