//Creating Objects from a Class in Different Ways

using namespace std;
#include<iostream>

class Human
{
    public:

        string name;

        void introduce()
        {

            cout<<"Hello "<<name<<endl;
        }

};
int main()
{

    Human A;  //This Object will be Stored in STACK

    Human *B = new Human(); // This Object will be Stored in HEAP

    A.name="VEnkatesh";

    B->name="Sundar";  // Acesss By using '->' Operator;

    A.introduce();

    B->introduce();

    return 0;
}
