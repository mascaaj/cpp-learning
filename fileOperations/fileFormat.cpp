// reading a formatted text file
// switched to csv because of tab formatting issues

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    const int RANGE = 12;
    int i=0,j=0;
    string tab[ RANGE ];
    ifstream reader("data.txt");

    if (!reader)
    {
        cout << "error opening file" << endl;
        return -1;
    }
        // for (i=0;!reader.eof();i++)
        // {
        //     getline(reader,line);
        //     cout << line << endl;
        // }

    // We understand the tab separation between the 4 fields
    // followed by new line.

    while (!reader.eof())
    {
        while (i <RANGE)
        {
        if (((i+1)%4)==0)
        {
            getline(reader,tab[i++],'\n');
            cout << endl << "tab value" << tab[i] << endl;
            cout << endl << "i value loop1 loop1 " << i << endl;
        }
        else
        {
            getline(reader,tab[i++],',');
            cout << endl << "tab value" << tab[i] << endl;
            cout << endl << "i value loop1 loop2 " << i << endl;
        }
        } 
    }
    reader.close();
    i=0;

    while (i <RANGE)
    {
        cout << endl << "i value" << i << endl;
        cout << endl << "Record Number" << ++j << endl;
        cout << "Forename   :   " << tab[i++] << endl;
        cout << "Surname    :   " << tab[i++] << endl;
        cout << "Department :   " << tab[i++] << endl;
        cout << "Telephone  :   " << tab[i++] << endl;
    }

}