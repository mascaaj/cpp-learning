#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector <int> vec(3,100);
    cout << "vector size        :" << vec.size() << endl;
    cout << "vector is Empty ?  :" << vec.empty() << endl;
    cout << "vector value at 3  :" << vec.at(2) << endl;
    // vector push 200 back:
    vec.push_back(200);
    cout << "vector size        :" << vec.size() << endl;
    cout << "vector is Empty ?  :" << vec.empty() << endl;
    cout << "vector last element pre pop:" << vec.back() << endl;
    // vector pop last value back:
    vec.pop_back();
    cout << "vector size        :" << vec.size() << endl;
    cout << "vector is Empty ?  :" << vec.empty() << endl;
    cout << "vector last element post pop:" << vec.back() << endl;
    // vector empty
    vec.clear();
    cout << "vector size        :" << vec.size() << endl;
    cout << "vector is Empty ?  :" << vec.empty() << endl;

    // cout << "vector :" << vec. << endl;
    // cout << "vector :" << vec. << endl;
}