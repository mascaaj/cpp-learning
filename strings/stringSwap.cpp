// understanding string features

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string front;
    string back;
    string text =  "Always laugh when you can. It\'s the best medicine";
    front.assign(text);
    cout << "front  :  " << front << endl;
    front.assign(text,0,27);
    cout << "front  :  " << front << endl;
    back.assign(text,27,text.size());
    cout << back << endl;

    back.swap(front);
    cout << "front  :  " << front << endl;
    cout << "back   :  " << back << endl;

}

// void computeFeatures(string text)
// {
//     cout << "String         : " << text << endl; 
//     cout << "String size    : " << text.size() << endl;
//     cout << "String empty ? : " << text.empty() << endl;
// }