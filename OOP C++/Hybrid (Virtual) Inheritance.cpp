//Hybrid (Virtual) Inheritance

//   Hybrid Inheritance is implemented by combining more than one type of inheritance

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
class C:public A,public B
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
    return 0;
}


//Consider Class A & B comes under Single inheritance

//Consider Class A & B & C Comes under Multiple Inheritance
