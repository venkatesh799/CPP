using namespace std;
#include<iostream>
class Human
{
private:
    int age=10;  //Creating Private Member
public:
    void getage()
    {

        cout<<age<<endl;
    }
    void setage(int value)
    {
        age=value;
    }
};
int main()
{

    Human A;

   // a.age=20; // We will Get an Error Because it is Private

   A.getage(); // 10;

   A.setage(20);  // Modifying The Private Member

   A.getage(); // 20
}
