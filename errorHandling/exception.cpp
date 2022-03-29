// Basic try catch logic

#include <iostream>
using namespace std;

int main()
{
    int number;
    try
    {
        for (number =1; number<20; number++)
        {
            if (number > 10) throw (number);
            else 
            cout << "Number:" << number << endl;
        }
    }
    catch(int num)
    {
        cout << "Exception at: " << num << endl;
    }
    
}