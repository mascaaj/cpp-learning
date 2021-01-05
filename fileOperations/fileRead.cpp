// file write

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{    
    int type;int i;
    char letter;
    string line;

    // this code snippet, ingests the argument and pushes it to the loop
    stringstream stream ;
    stream << argv[1];
    stream >> type;

    ifstream reader("poem.txt");

    if (!reader)
    {
        cout << "error opening file" << endl;
        return -1;
    }

    if (type == 0)
    {
        for (i=0;!reader.eof();i++)
        {
            reader.get(letter);
            cout << letter;
        }
    }
    else
    {
        for (i=0;!reader.eof();i++)
        {
        getline(reader,line);
        cout << line << endl;
        }
    }

    reader.close();
    cout << "iterations : " << i << endl;

}
// int main(int argc, char** argv) 
// { 
//     cout << "You have entered " << argc 
//          << " arguments:" << "\n"; 
  
//     for (int i = 0; i < argc; ++i) 
//         cout << argv[i] << "\n"; 
  
//     return 0; 
// } 