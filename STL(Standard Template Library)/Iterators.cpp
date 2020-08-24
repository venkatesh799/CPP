#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    // iterators are similar to pointers
    int arr[]={10,56,3,54};
    int *start=&arr[0];
    int *last=&arr[0]+(sizeof(arr)/sizeof(int));
    for( ;start != last;start++)
    {
        cout<<*start<<endl;
    }
    start=&arr[0];
    last=&arr[0]+(sizeof(arr)/sizeof(int));
    sort(start,last);
    cout<<"After Sorting \n"<<endl;
    for( ;start != last;start++)
    {
        cout<<*start<<endl;
    }
    return 0;
}
