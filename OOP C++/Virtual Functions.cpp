using namespace std;
#include<iostream>
class person
{
public:
    virtual void intro()
    {
        cout<<"I'M Person"<<endl;
    }
};
class student : public person
{
public:
    void intro()
    {
        cout<<"I'M Student"<<endl;
    }
};
class gstudent:public student
{
public:
    void intro()
    {
        cout<<"I'M Graduate Student"<<endl;   // step 2 - Without this method output:I'M Person  I'M Student  I'M Student
    }
};
void who(person &obj)
{
    obj.intro();
}
int main()
{
    person p;
    student s;
    gstudent g;
    who(p);        //Step  1 I'M Person
    who(s);        //        I'M Student
    who(g);        //        I'M Graduate Student
    return 0;
}
