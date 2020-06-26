using namespace std;
#include<iostream>
class Human
{
private:
    int age;
    string name;

public:
    Human()
                    //This should be Must else we will Get an Error.
                    //when We Have a Multiple Constructors like Human(int iage) ,  Human(string iname)
                    //Human(int iage,string iname) This Should be Must
    {
        age=0;
        name="NoName";
        cout<<"Default Constructor"<<endl;
    }

    Human(int iage)
    {
        cout<<"Constructor with age as parameter  : "<<iage<<endl;
    }

    Human(string iname)
    {
        cout<<"Constructor with Name as parameter  : "<<iname<<endl;
    }

    Human(int iage,string iname)
    {
        cout<<"Constructor with Both age and Name  as parameters   : "<<iage<<"  "<<iname<<endl;
    }

    void display()
    {
        cout<<age<<" "<<name<<endl;
    }
};

int main()
{
    Human venky;  // defaulit Constructor Called

    Human venky1(10);
    venky1.display();

    Human venky2("Venkatesh");
    venky2.display();

    Human venky3(20,"Google");
    venky3.display();
    return 0;
}
