using namespace std;
#include<iostream>
class A
{
protected:
    string name;   //Here String is Protected  But we can break that
public:
    void set(string iname)
    {
        name=iname;
    }
};
class B:protected A
{
public:
    A::name;     //Accessing the protected member here as public
    A::set;      //Enabling the Set method as public in Derived class and make it Accessible to the Class B objects
    void display()
    {
        cout<<name<<endl;
    }
};
int main()
{
    B obj1;
    obj1.set("venky");
    obj1.display();
    return 0;
}
