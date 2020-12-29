// variable arrays

#include <iostream>
using namespace std;

int main(){
    // single dim integer / float array
    int num[6];
    num[0] = 1; num[1]=12.44556; num[2]=100;
    cout << " Int Array 0 : " << num[0] << endl;
    cout << " Int Array 1 : " << num[1] << endl;
    cout << " Int Array 2 : " << num[2] << endl;
    cout << " Int Array" << num << endl;

    // single dimension character array
    char name[5] = {'m','i','k','e','\0'};
    cout << " Text String : " << name << endl;
    cout << " String Array 1 : " << name[1] << endl;
    cout << " String Array 2 : " << name[2] << endl;
    cout << " String Array 4 : " << name[4] << endl;

    // multi dimension integer / array. Row column assignment
    int mulnum[2][3] = {{4,5,6},{7,8,9}};
    cout << " Multi Array 0,2 : " << mulnum[0][2] << endl;
    cout << " Multi Array 1,3 : " << mulnum[1][2] << endl;
    cout << " Multi Array 1,1 : " << mulnum[1][1] << endl;
    cout << " Multi Array" << mulnum << endl;

}