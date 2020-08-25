#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;  // Duplicates Not Allowed in the Set
    s.insert(100);
    s.insert(200);
    s.insert(400);
    s.insert(200); // Not Accepted
    s.insert(400);  // Not Accepted
    for(auto &val:s)
    {
        cout<<val<<endl;
    }
    cout<<"Size is: "<<s.size()<<endl;
    s.erase(100); // Deletes 40
    s.clear(); // Clears the set
    cout<<"Size is: "<<s.size()<<endl;
    return 0;
}
