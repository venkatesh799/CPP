#include<iostream>
#include<list>
//list is a doubly linked list
using namespace std;
int main()
{
    // Same as vectors
    list<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(19);
    v.push_back(90);
    list<int>::iterator itr=v.begin();
    cout<<"Value at iterator : "<<*itr<<endl;
    for(;itr != v.end();itr++)
    {
        cout<<"value is :"<<*itr<<endl;
    }
    cout<<"Size is :"<<v.size()<<endl;
    v.clear();
    cout<<"Size is :"<<v.size()<<endl;
    return 0;
}
