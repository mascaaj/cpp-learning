#include <string>
#include <iostream>
#include <sstream>

using namespace std;

void computeFeatures(string str);

int main(){

    string word = "99 ";
    char hue[4] = {'R','e','d','\0'};
    string word2 = " balloons";
    string word3 = word + hue + word2;

    cout << word3.size()<< endl;
    cout << word3<< endl;

    string back = "Balloons ? Lame !";
    cout << back<< endl;

    string temp;
    temp.assign(back);
    back.assign(word3);
    word3.assign(temp);
    // cout << word3<< endl;
    cout << back << endl;
    cout << word3<< endl;

    temp = back.append(word3);
    cout << temp << endl;
    string insertString = "I prefer chocolates !";
    temp.insert(temp.size()-6,insertString);
    cout << temp << endl;
    

    std::string str="We think in generalities, but we live in details.";
                                           // (quoting Alfred N. Whitehead)

    std::string str2 = str.substr (3,5);     // "think"
    std::cout << str2 << '\n';
    int pos = str.find("live");      // position of "live" in str
    std::cout << pos << '\n';
    std::string str3 = str.substr (pos);     // get from "live" to the end

    std::cout << str2 << ' ' << str3 << '\n';

    cout << str.compare(33,50,str2) <<endl;
    computeFeatures(str);
}

void computeFeatures(string str){
    cout << "size is" << str.size() << endl;
    cout << "Is empty ? " << str.empty() << endl;
    cout << "string is" << str << endl;
}