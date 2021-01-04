// understanding string features

#include <iostream>
#include <string>
using namespace std;

void computeFeatures(string);

int main(){
    string text = "C++ is fun";
    computeFeatures(text);
    text+= " for everyone";
    computeFeatures(text);
    text.clear();
    computeFeatures(text);
}

void computeFeatures(string text)
{
    cout << "String         : " << text << endl; 
    cout << "String size    : " << text.size() << endl;
    cout << "String empty ? : " << text.empty() << endl;
}