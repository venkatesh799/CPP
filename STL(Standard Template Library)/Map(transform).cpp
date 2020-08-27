#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    vector<int> out(v.size());  //if we don't specify the size of output array then use transform(v.begin(),v.end(),back_inserter(out)),[](int val)..........
    transform(v.begin(),v.end(),out.begin(),[](int val)
                                             {
                                                return val*val;
                                             });
    // we can get the output into same array also just use v.begin() as 3rd argument in transform...
    for(auto &val:out)
    {
        cout<<val<<endl;
    }
    return 0;
}
