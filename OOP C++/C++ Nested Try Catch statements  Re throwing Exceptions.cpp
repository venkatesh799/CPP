using namespace std;
#include<iostream>
int main()
{

    try
    {
        try
        {
            throw "char type error";
        }
        catch(const char *e)
        {
            cout<<"Inner block exception--> "<<e<<endl;
        }
        throw runtime_error("Something");
    }
    catch(const char *e)
    {
        cout<<"Outer Block -->"<<e<<endl;
    }
    catch(...)
    {
        cout<<"unknow Exception";
    }
    return 0;
}
