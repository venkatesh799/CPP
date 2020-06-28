// Order of Execution of Constructors and Destructors in Inheritance


using namespace std;
#include<iostream>
class A
{
    public:
        A()
        {
            cout<<"i'm Construtor of A"<<endl;
        }
        ~A()
        {
            cout<<"i'm destructor of A"<<endl;
        }
};
class B : public A
{
    public:
        B()
        {
            cout<<"i'm Construtor of B"<<endl;
        }
        ~B()
        {
            cout<<"i'm destructor of B"<<endl;
        }
};
int main()
{
    B obj1;   // Constructor of base class then constructor of derived class
              //then destructor of base class then destructor of derived class
    return 0;
}

