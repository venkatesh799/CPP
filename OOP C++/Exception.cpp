using namespace std;
#include<iostream>
int main()
{

    int a=10,b=0,c;
    try
    {
        if(b == 0)
        {
        c=a/b;
        throw "Divide by Zero";
        }
    }
    catch(char* e)
    {
        cout<<e;
    }
    return 0;
}
