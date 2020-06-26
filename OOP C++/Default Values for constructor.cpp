using namespace std;
#include<iostream>
class Human
{

private:
    int age;
    string name;
public:
    Human()
    {
        cout<<"Default Constructor"<<endl;
    }
    Human(string name,int age=0)    //if user Doesn't pass the value for age then we will take it as Zero
                                    //as well as we can do it for name also and even for both also
    {
        cout<<"Overloaded Constructor "<<endl;
        cout<<"Name : "<<name<<endl<<"Age  :  "<<age<<endl;
    }
};
int main()
{
    Human venky("Google",30); //  google : 30

     //Human venky("gooogle")  // google  : 0  Here we will get default value
    return 0;
}
