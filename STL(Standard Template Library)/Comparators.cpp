#include<iostream>
#include<set>
#include<map>
using namespace std;
int main()
{
    set<int,greater<int>> s1;  // we will get set in descending order
    s1.insert(10),s1.insert(100),s1.insert(80);
    for(auto &val:s1)
    {
        cout<<val<<endl;
    }
    cout<<endl;
    set<int,less<int>> s2;  // we will get set in ascending order
    s2.insert(10),s2.insert(100),s2.insert(80);
    for(auto &val:s2)
    {
        cout<<val<<endl;
    }
    cout<<endl;
    map<int,string,greater<int>> s3;  // we will get set in descending order
    s3.insert(make_pair(10,"abc")),s3.insert(make_pair(100,"xyz")),s3.insert(make_pair(80,"pqr"));
    for(auto &val:s3)
    {
        cout<<val.first<<"-->"<<val.second<<endl;
    }
    return 0;
}
