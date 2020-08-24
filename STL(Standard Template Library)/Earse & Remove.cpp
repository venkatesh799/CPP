#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v1;
    v1.push_back(10),v1.push_back(90),v1.push_back(20),v1.push_back(30),v1.push_back(30),v1.push_back(40);
    vector<int> v2;
    v2.push_back(10),v2.push_back(90),v2.push_back(20),v2.push_back(30),v2.push_back(30),v2.push_back(40);
    vector<int>::iterator pend;
    cout<<"Original Vector 1"<<endl;
    for(auto &val:v1)
    {
        cout<<"Val -> "<<val<<endl;
    }
    cout<<"After Erase"<<endl;
    v1.erase(v1.begin()+1,v1.end()-3); // it will delete all the elements From given Range
    for(auto &val:v1)
    {
        cout<<"Val -> "<<val<<endl;
    }
     cout<<"Original Vector 2"<<endl;
    for(auto &val:v2)
    {
        cout<<"Val -> "<<val<<endl;
    }
    cout<<"After Remov 30"<<endl;
    pend=remove(v2.begin(),v2.end(),30); // it will delete all the elements with value 30
    for(auto &val:v2)
    {
        cout<<"Val -> "<<val<<endl;
    }
    return 0;
}
