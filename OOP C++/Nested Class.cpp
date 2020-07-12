//Nested Class or Inner Class

using namespace std;
#include<iostream>
class A
{
public:
    string name;
    class B
    {
        public:
        string country;
        int no;
    };
    B b;
    void show()
    {
        cout<<name<<endl<<b.country<<endl<<b.no;
    }
};
int main()
{
    A a;
    A::B b1;  //This Valid
    // B obj;  Not Valid Here
    a.name="venkatesh";
    a.b.country="India";
    a.b.no=1;
    a.show();
    return 0;
}
