using namespace std;
#include<iostream>
void test() throw(int,char,runtime_error)
{
    throw 'K';
}
int main()
{
    try
    {
        test();
    }
    catch(int a)
    {
        cout<<"Integer Catch  :"<<a;
    }
    catch(char b)
    {
        cout<<"char Catch  :"<<b;
    }
    catch(runtime_error c)
    {
        cout<<"Runtime Catch  :"<<c.what();
    }
    return 0;
}
