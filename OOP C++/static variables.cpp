using namespace std;
#include<iostream>
class Human
{

public:
    static int counter;  //Don't intialize here i.e static int counter=0;
    Human()
    {
        counter++;
    }
    void total()
    {
        cout<<"Total Objects :  "<<counter<<endl;
    }
};
int Human::counter=0;
int main()
{
    Human venky;
    venky.total(); // 1
    Human sundar;
    Human mark;
    venky.total();  // 3
    sundar.total(); // 3
    mark.total();   // 3
    return 0;
}
