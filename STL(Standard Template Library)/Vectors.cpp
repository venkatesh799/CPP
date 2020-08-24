#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v; //Contiguous  Memory Allocation
    v.push_back(10);
    v.push_back(20);
    v.push_back(19);
    v.push_back(90);
    vector<int>::iterator itr=v.begin(); // we can us auto itr=v.begin()from c++ 11
    cout<<"Value at iterator : "<<*itr<<endl;
    cout<<"Value at iterator : "<<*(itr+1)<<endl;
    for(;itr != v.end();itr++)
    {
        cout<<"value is :"<<*itr<<endl;
    }
    cout<<"Size is :"<<v.size()<<endl;
    v.clear();
    cout<<"Size is :"<<v.size()<<endl;
    return 0;
}
