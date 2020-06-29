using namespace std;
#include<iostream>
class A
{
public:
    A(int age)
    {
        cout<<"In A Constructor  "<<age<<endl;
    }
};
class B:public A
{
public:
    B(int x):A(x)  //Calling base class constructor in derived class
    {
    cout<<x<<endl;
    }

};
int main()
{
    B obj1(10);
    return 0;
}


/*Example 2

using namespace std;
#include<iostream>
class A
{
public:
    A()
    {
        cout<<"In A Constructor  "<<endl;
    }
};
class B:public A
{
public:
    B(int x):A()  //Calling base class constructor in derived class
    {
    cout<<"i'm B"<<x;
    }

};
int main()
{
    B obj1(10);
    return 0;
}

 */


 /*
 Example 3

 using namespace std;
#include<iostream>
class A
{
public:
    A(int age)
    {
        cout<<"In A Constructor  "<<age<<endl;
    }
};

class B
{
public:
    A(string color)
    {
        cout<<"In A Constructor  "<<color<<endl;
    }
};

class C:public A,public B
{
public:
    c(int x,string color):A(x),B(color)  //Calling base class constructor in derived class
    {
    cout<<x<<color<<endl;
    }

};
int main()
{
    C obj1(10,'white');
    return 0;
}



