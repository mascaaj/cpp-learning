// Finding substrings

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string front;
    string back;
    int num;
    string text =  "I can resist anything but temptation.";
    cout << "Initial text  :  " << text << endl;

    // Find position of substring in string
    num = text.find("resist",0);
    cout << "Position  :  " << num << endl;
    
    // Find position of non existant substring in string
    num = text.find("non-existant",0);
    cout << "Position  :  " << num << endl;

    // Find position of I in string
    num = text.find_first_of("if",0);
    cout << "First I  :  " << num << endl;

    // Find position of not I in string
    num = text.find_first_not_of("if");
    cout << "First not I  :  " << num << endl;

    // Last position of t in string
    num = text.find_last_of("t");
    cout << "Last t  :  " << num << endl;

    // Last position of not t in string
    num = text.find_last_not_of("t");
    cout << "Last not t  :  " << num << endl;
}

// void computeFeatures(string text)
// {
//     cout << "String         : " << text << endl; 
//     cout << "String size    : " << text.size() << endl;
//     cout << "String empty ? : " << text.empty() << endl;
// }