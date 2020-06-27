//Single Inheritance

//One class derived from another class

using namespace std;
#include<iostream>
class A
{
public:
    A()
    {
        cout<<"i'm A"<<endl;
    }
};
class B:public A
{
public:
    B()
    {
        cout<<"i'm B"<<endl;
    }
};
int main()
{
    B obj;
    return 0;
}
