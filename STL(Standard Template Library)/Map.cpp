#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> mp;
    //we can't insert duplicates in map
    // we can update the map
    // Maps always maintain the Sorted order
    mp.insert(make_pair(1,100)); //inserting
    mp[2]=20; //another way of inserting
    mp[9]=90;
    mp[6]=60;
    mp.insert(make_pair(6,60)); // it will not work because it already in the map
    mp[6]=900; // This will work We are updating the map
    for(auto itr=mp.begin();itr!=mp.end();itr++) //iterating
    {
        cout<<itr->first<<"-->"<<itr->second<<endl;
    }
    return 0;
}


/* OUTPUT MAP always gives sorted order
1-->100
2-->20
6-->900
9-->90
*/
