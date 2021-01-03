// file write

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // define the content here
    string poem = "\n\tthis is line 1 of poem";
    poem.append("\n\tthis is line 2 of poem");
    poem.append("\n\tthis is line 3 of poem");
    poem.append("\n\tthis is line 4 of poem");

    // define write object here
    ofstream writer("poem.txt");

    // if object absent, error, else write to file
    if (!writer)
    {
        cout << "Error in opening the file for output" << endl;
        return -1;
    }

    writer << poem << endl;
    writer.close();
    // Close file

}
