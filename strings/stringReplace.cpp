// Finding substrings

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string front;
    string back;
    int num;
    string text =  "I do like the seaside.";
    cout << "Initial text     :  " << text << endl;
    cout << "Size             :  " << text.size() << endl;
    cout << "End of \"like\"    :  " << (text.find("like")+4) << endl;
    
    // Insert substring at position 10, just after like
    text.insert(10,"to be beside ");
    cout << "Modified text    :  " << text << endl;

    // Erase text, 2 characters long, at position 3
    text.erase(2,3);
    cout << "Erased text      :  " << text << endl;

    // Replace text, 7 characters long, at position 25
    cout << "Position of \"seaside\"    :  " << (text.find("seaside")) << endl;
    text.replace(7,25,"strolling by the sea");
    cout << "Replaced text    :  " << text << endl;

    // Copy a substring from 9th position, 7 characters long
    cout << "Copied           :  " << text.substr(7,9) << endl;
    
    // Last character in statement
    cout << "Last Character   :  " << text.at(text.size()-1) << endl;

}

// void computeFeatures(string text)
// {
//     cout << "String         : " << text << endl; 
//     cout << "String size    : " << text.size() << endl;
//     cout << "String empty ? : " << text.empty() << endl;
// }