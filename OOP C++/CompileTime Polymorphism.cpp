// by function overloading
using namespace std;
#include<iostream>
class Base
{
public:
    void print()
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
int main()
{
   Base obj1;
   obj1.print();
   Derived obj2;
   obj2.print();
   return 0;
}
