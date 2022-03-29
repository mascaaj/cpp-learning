// understanding data storage

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr = nums;

    cout << "ptr at : " << ptr << " gets : " << *ptr << endl;
    ptr++;
    cout << "ptr at : " << ptr << " gets : " << *ptr << endl;
    ptr++;
    cout << "ptr at : " << ptr << " gets : " << *ptr << endl;
    ptr++;
    cout << "ptr at : " << ptr << " gets : " << *ptr << endl;
    ptr-=3;
    cout << "ptr at : " << ptr << " gets : " << *ptr << endl;


    for (int i = 0;i<10;i++)
    {
        cout << endl << "Element: " << i ;
        cout << " Value:  " << *ptr << endl;
        ptr++;
    }
}