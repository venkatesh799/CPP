using namespace std;
#include<iostream>
void student();
int main()
{
    student();    // We can't use Class A stuff here because it is restricted to Student function only
    return 0;
}
void student()  // Defining Class in a Function
{
    class A
    {
    public:
        string name;
        void show()
        {
            cout<<name;
        }
    };
    A obj;
    obj.name="Venkatesh";
    obj.show();
}
