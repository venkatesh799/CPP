
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
    //Accessing here

    void introduce()
    {
        cout<<"i'm in Derived Class"<<endl;
         Base::introduce();
    }

};
int main()
{
    Derived obj;
    obj.introduce();
    //Accessing here
    //obj.Base::introduce();
    return 0;
}
