//program 1

using namespace std;
#include<iostream>
int main()
{

    try
    {
        throw 20;  //only integer Catch block will execute i.e 2
    }
    catch(const char *e)
    {
        cout<<e;
    }
    catch(int a)
    {
        cout<<a;
    }
    return 0;
}

//program 2

using namespace std;
#include<iostream>
int main()
{

    try
    {
        throw "exception;  // only char  Catch block will execute i.e 1
    }
    catch(const char *e)  //1
    {
        cout<<e;
    }
    catch(int a) //2
    {
        cout<<a;
    }
    return 0;
}

//program 3

using namespace std;
#include<iostream>
int main()
{

    try
    {
        throw runtime_error(10);  //only runtime Catch block will execute i.e 3
    }
    catch(const char *e)   //1
    {
        cout<<e;
    }
    catch(int a) //2
    {
        cout<<a;
    }
    catch(runtime_error k) //3
    {
        cout<<k.what();
    }

    return 0;
}


//program 4

using namespace std;
#include<iostream>
int main()
{

    try
    {
        throw 20;  //if none match then commomn catch(...) i.e 3 will execute
    }
    catch(const char *e)   //1
    {
        cout<<e;
    }
    catch(runtime_error k) //2
    {
        cout<<k.what();
    }
    catch(...)  //3
    {

        cout<<"something gone wrong";
    }

    return 0;
}


//program 5

using namespace std;
#include<iostream>
int main()
{

    try
    {
        throw "something";  //only char Catch block i.e 1 will execute if char catch block not found then common catch block i.e 3 will execute
    }
    catch(const char *e)   //1
    {
        cout<<e;
    }
    catch(int a) //2
    {
        cout<<a;
    }
    catch(runtime_error k) //3
    {
        cout<<k.what();
    }

    return 0;
}


