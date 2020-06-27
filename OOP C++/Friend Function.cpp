using namespace std;
#include<iostream>
class Human
{
private:
    string name;
    int age;
public:
    Human(string iname,int iage)
    {
        name=iname;
        age=iage;
    }
    void tell()
    {
        cout<<"Age : "<<age<<endl<<"Name  : "<<name<<endl;
    }
    friend void display(Human man);  //declaring friend function
};
void display(Human man)
{
     cout<<"Age :  "<<man.age<<endl<<"Name  : "<<man.name<<endl; //Acessing private members of a class
}
int main()
{
    Human venky("Venkatesh",21);
    display(venky);  // Acessing Friend function
    venky.tell();     //Acessing with object
    return 0;
}
