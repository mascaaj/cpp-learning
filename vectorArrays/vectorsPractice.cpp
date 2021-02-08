#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector <int> vec(3,25);
    cout << vec.size() << endl;
    vec.resize(6,40);
    cout << vec.size() << endl;
    vec.pop_back();
    cout << vec.size() << endl;

    vec.push_back(12);

    for(vector<int>::iterator it =vec.begin();it !=vec.end();++it){
        cout << ' ' << *it;
    }
}