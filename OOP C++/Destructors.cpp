using namespace std;
#include<iostream>
class Human
{
public:
    Human()
    {
        cout<<"Constructor Called "<<endl;
    }
    ~Human()
    {
        cout<<"Destructor Called"<<endl;
    }
};
int main()
{
    Human *venky=new Human();     // We will get only Constructor Called because we Doesn't delete the memory it still there
                                //so, we use delete keyword to delete the memory
   delete venky; // now both constructor and destructor called
    return 0;
}
