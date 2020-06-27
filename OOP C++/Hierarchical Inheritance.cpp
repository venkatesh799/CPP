//Hierarchical Inheritance

//In this type of inheritance,

//more than one sub class is inherited from a single base class.

// i.e. more than one derived class is created from a single base class.

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
class C:public A
{
public:
    C()
    {
        cout<<"i'm C"<<endl;
    }
};
int main()
{
    C obj1;
    cout<<" "<<endl;
    B obj2;
    return 0;
}
