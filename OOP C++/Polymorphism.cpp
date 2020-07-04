using namespace std;
#include<iostream>
class Animal
{
public:
    void print()
    {
        cout<<"Animals"<<endl;
    }
};
class Dog:public Animal
{
public:
    void print()
    {
        cout<<"Bow Bow"<<endl;
    }
};
class Cat:public Animal
{

public:
    void print()
    {
        cout<<"Meow Meow"<<endl;
    }
};
int main()
{
   Animal obj1;
   obj1.print();
   Dog obj2;
   obj2.print();
   Cat obj3;
   obj3.print();
   return 0;
}
