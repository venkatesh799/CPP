using namespace std;
#include<iostream>
class Human
{
public:
    static void greetings() //static function only Aceess the static varibles only and other static functions
    {
        cout<<"Hello"<<endl;
    }
};
int main()
{
    Human a;
    a.greetings();        //Not Recommended
    Human::greetings();   //Recommended
    return 0;
}
