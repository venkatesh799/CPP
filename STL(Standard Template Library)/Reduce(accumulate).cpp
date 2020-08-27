#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    int final_val= accumulate(v.begin(),v.end(),1,[](int first,int second){ return first*second; });
    cout<<"Final value is : "<<final_val<<endl;
    return 0;
}
