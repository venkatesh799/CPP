//Multilevel Inheritance

// In this type of inheritance, a derived class is created from another derived class.

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
class C:public B

{
public:
    C()
    {
        cout<<"i'm C"<<endl;
    }
};
int main()
{
    C obj2;
    return 0;
}
