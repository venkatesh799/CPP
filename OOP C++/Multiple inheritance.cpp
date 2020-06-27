//Multiple Inheritance: Multiple Inheritance is a feature of C++

//where a class can inherit from more than one classes.

//i.e one sub class is inherited from more than one base classes.

using namespace std;
#include<iostream>
class A
{
public:
    A()
    {
        cout<<"i.m A"<<endl;
    }
};
class B
{
public:

    B()
    {
        cout<<"i'm B"<<endl;
    }
};
class C:public  A,public B
{
public:

    C()
    {
        cout<<"i'm C"<<endl;
    }
};
int main()
{
    C obj;
    return 0;
}
