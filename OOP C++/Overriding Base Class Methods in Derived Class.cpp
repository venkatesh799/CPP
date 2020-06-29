//Overriding Base Class Methods in Derived Class

using namespace std;
#include<iostream>
class Base
{
public:
    void introduce()
    {
        cout<<"I'm in Base class"<<endl;
    }
};
class Derived : public Base
{
public:
    void introduce()
    {
        cout<<"i'm in Derived Class"<<endl;   //This will be called
    }
};
int main()
{
    Derived obj;
    obj.introduce();
    return 0;
}
