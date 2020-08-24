
#include<iostream>
#include<algorithm> //We can manipulate the data
#include<vector>
using namespace std;
int main()
{
    vector<int> v; //we can't sort the list because it is bidirectional
    v.push_back(10);
    v.push_back(20);
    v.push_back(19);
    v.push_back(90);
    vector<int>::iterator itr=v.begin();
    cout<<"Value at iterator : "<<*itr<<endl;
    cout<<"\nBefore Sorting"<<endl;
    for(;itr != v.end();itr++)
    {
        cout<<"value is :"<<*itr<<endl;
    }
    itr=v.begin();
    sort(v.begin(),v.end());
    cout<<"\nAfter Sorting"<<endl;
    for(;itr != v.end();itr++)
    {
        cout<<"value is :"<<*itr<<endl;
    }
    cout<<"\nSize is :"<<v.size()<<endl;
    v.clear();
    cout<<"Size is :"<<v.size()<<endl;
    return 0;
}
