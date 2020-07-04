//Virtual Functions
// if two classes inherited and functions overridden Then Virtual says that there is no static connection

using namespace std;
#include<iostream>
class Base
{
public:
    virtual void print()
    {
        cout<<"Base"<<endl;
    }
};
class Derived:public Base
{

public:
    void print()
    {
        cout<<"Derived"<<endl;
    }
};
void who(Base &b)
{
    b.print();
}
int main()
{
   Base obj1;
   who(obj1);
   Derived obj2;
   who(obj2);
   return 0;
}

