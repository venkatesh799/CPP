#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> s;  // Duplicates Allowed in  multiset
    s.insert(100);
    s.insert(200);
    s.insert(400);
    s.insert(200); //  Accepted
    s.insert(400);  // Accepted
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
