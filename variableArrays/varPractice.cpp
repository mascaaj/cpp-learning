#include <iostream>
using namespace std;

int main(){
int i,j;
int num[7];
num[1] = 5; num[0] = 0; num[2] = 12.587;
cout << num[0] << endl;cout << num[1] << endl;cout << num[2] << endl;

char word[4] = {'r','o','b','\0'};
cout << word << endl;
cout << word[1] << endl;

int numInst[3] = {4,5,6};
for(i=0;i<3;++i)
    {
        cout << numInst[i] << endl;
    }

int multiDim[2][3] = {{1,2,3},{4,5,6}};
for(i=0;i<2;++i)
    {
        for(j=0;j<3;++j)
        cout << multiDim[i][j] << endl;
    }
}