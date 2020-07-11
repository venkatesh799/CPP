
//Diamond Problem

using namespace std;
#include<iostream>
class A
{
public:
    void walk()
    {
        cout<<"Walk";
    }
};
class B:public A
{
};
class C:public A
{
};
class D:public B,public C
{
};
int main()
{
    D obj1;
    obj1.walk();    //we will get ambiguity problem because
                    //obj1 don't know from which instance it would refer to A
                    // whether From A or From B this is called diamond problem
                    //to overcome this we use virtual
    return 0;
}


//Correct Way Solution for Diamond Problem

using namespace std;
#include<iostream>
class A
{
public:
    void walk()
    {
        cout<<"Walk";
    }
};
class B:virtual public A
{
};
class C:virtual public A
{
};
class D:public B,public C
{
};
int main()
{
    D obj1;
    obj1.walk();    //we will get ambiguity problem because
                    //obj1 don't know from which instance it would refer to A
                    // whether From A or From B this is called diamond problem
                    //to overcome this we use virtual
    return 0;
}
