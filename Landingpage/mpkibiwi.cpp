#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int A[10];

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    v.pop_back();

    for(int i=0; i<v.size(); i++)
    cout << v[i] << " ";

    return 0;
}