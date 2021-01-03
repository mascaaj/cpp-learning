// file append

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // define the new content here
    string info = "\n\ttext nonsense here";
    info.append("\n\t\t\tMr Poet 2020");


    // define write object here
    ofstream writer("poem.txt", ios::app);

    // if object absent, error, else write to file
    if (!writer)
    {
        cout << "Error in opening the file for output" << endl;
        return -1;
    }

    writer << info << endl;
    writer.close();
    // Close file

}
