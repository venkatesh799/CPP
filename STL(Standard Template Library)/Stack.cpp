#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Size of Stack :"<<s.size()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<"Size of Stack :"<<s.size()<<endl;
    return 0;
}

//Stacks are a type of container adaptors with LIFO(Last In First Out) type of working,
//where a new element is added at one end and (top) an element is removed from that end only.
 //We can use List & Vectors in Stack Data Structres
 //stack<int,vector<int>> s;
 //stack<int,list<int>> s;
