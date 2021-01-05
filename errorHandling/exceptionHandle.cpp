// handling exceptions

#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>
#include <typeinfo>

using namespace std;

int main()
{
    string lang = "C++";
    int num = 1000000000;
    try
    {
        // lang.replace(100,1,"C");
        // lang.resize(num);
        // lang.resize(3 * num);
        ifstream reader("nosuch.txt");
        if (!reader) __throw_logic_error("File not found");
    }
    catch(out_of_range &error)
    {
        cerr << "Range Exception : " << error.what() << '\n';
        cerr << "Exception Type : " << typeid(error).name() << endl; 
    }
    catch(exception &error)
    {
        cerr << "Exception : " << error.what() << '\n';
        cerr << "Exception Type : " << typeid(error).name() << endl; 
    }
    
}