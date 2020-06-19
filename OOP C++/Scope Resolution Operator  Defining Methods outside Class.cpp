using namespace std;
#include<iostream>
class A
{
public:
    string name="NoName";
    void introduce();        // Declared My Method Here
};
void A :: introduce()        // Accessing Method Using Scope Resolution Operator
{

    cout<<A::name<<endl;     //Accessing Data Members of Class Using Resolution Operator
}
int main()
{

    A obj1;

    obj1.introduce();       // Default Name will Execute

    obj1.name="Venkatesh";

    obj1.introduce();
}
