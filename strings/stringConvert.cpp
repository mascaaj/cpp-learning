// string conversion using sstream module.

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string term = "100";    // text to be converted to num
    int number = 100;       // num to be converted to text

    int num;                // term to num
    string text;            // num to text
    stringstream stream;    // to perfom conversions

    stream << term;         // load the string
    stream >> num;          // convert the string
    num /= 4;
    cout << "quarter of converted number is : " << num << endl;
    stream.str("");         // Empty the contents
    stream.clear();         // Empty the bit flags

    stream << number;
    stream >> text; 
    text+= " %";
    cout << "String value : " << text << endl;
    
}