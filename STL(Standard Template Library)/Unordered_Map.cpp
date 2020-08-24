#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    //Exactly same as Map but not in sorted order

    unordered_map<int,int> mp;
    mp.insert(make_pair(1,100));
    mp.insert(make_pair(2,200));
    mp.insert(make_pair(3,300));
    mp.insert(make_pair(1,250));
    mp.insert(make_pair(2,280));
    mp[1]=298;
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<"-->"<<itr->second<<endl;
    }
    return 0;
}

