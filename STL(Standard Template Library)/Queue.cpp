#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Size of Queue :"<<s.size()<<endl;
    cout<<"Queue First Element is :"<<s.front()<<endl;
    cout<<"Queue Last Element is\ :"<<s.back()<<endl;
    while(!s.empty())
    {
        cout<<s.front()<<endl;
        s.pop();
    }
    cout<<"Size of Queue :"<<s.size()<<endl;
    return 0;
}

// Queues are a type of container adaptors which operate in a first in first out (FIFO) type of arrangement.
//Elements are inserted at the back (end) and are deleted from the front.
//We can use List & but we can't use Vectors in Queue Data Structures
//queue<int,list<int>> s;
