#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    vector<int> out(v.size());
    vector<int>::iterator endfilter=remove_if(v.begin(),v.end(),[](int val)
              {
                  if(val%2 == 0)
                  {
                      return true;
                  }
                  return false;
              });

    for(auto itr=v.begin();itr != endfilter;itr++)
    {
        cout<<*itr<<endl;
    }
    return 0;
}


//we can see in the output all even numbers are removed
/*1
  3
  5 */
