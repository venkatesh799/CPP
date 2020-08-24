#include<iostream>
#include<map>
using namespace std;
int main()
{
    //it allows multiple values & update not possible

    multimap<int,int> mp;
    mp.insert(make_pair(1,100));
    mp.insert(make_pair(2,200));
    mp.insert(make_pair(3,300));
    mp.insert(make_pair(1,250));
    mp.insert(make_pair(2,280));
    // mp[1]=298; Not possible
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<"-->"<<itr->second<<endl;
    }
    return 0;
}
